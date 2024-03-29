# Copyright (c) 2000 Carnegie Mellon University
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

# Makefile
#
# options:
#  all: compiles everything
#  install: compiles and installs files to their appropriate locations
#  package: recreates the distribution (spiral_wht.tgz)
#  wht_verify, wht_measure, whtgen, wht_pclprof: compiles the specified utility
#  clean: removes all output files

SHELL = /bin/sh

# choose compiler (gcc, cc)
CC = cc

# compiler options
CCFLAGS = -O6 -fomit-frame-pointer -malign-double -fstrict-aliasing -fPIC
ARFLAGS = 

# choose code generator
#   (whtgeni.c whtgenit.c whtgenr.c whtgenrt.c)
WHTGEN = codegen/whtgenrt.c

# MAX_UNROLLED is the log2 of the largest
# unrolled WHT to be used
# changing here also requires to change
# wht_new_small in wht.c and wht.h
MAX_UNROLLED = 8

MAX_INTERLEAVED = 7

# table of best wht trees
BESTTREE = besttrees.default
BESTTREE_P = 

# ddl
CHECK_DDL = none

# loop interleaving
CHECK_IL = none
LOOP_INTERLEAVING_LEVEL = 0

# check the correctness of ddl+il combined
CHECK_DDL_IL = 

# parallel
CHECK_PARA = none
THREAD = 1

# install
INSTALL = /usr/bin/install -c
prefix = /usr/local
exec_prefix = ${prefix}
INSTALL_INCLUDE = ${prefix}/include
INSTALL_INCLUDE2 = /usr/include
INSTALL_LIB = ${exec_prefix}/lib
INSTALL_DATA = ${prefix}/var
INSTALL_EXEC = ${exec_prefix}/bin
INSTALL_PCL = none

# all
all: wht_measure wht_verify wht_ga wht_pclprof wht_test 

install: wht_measure wht_ga wht_pclprof wht_dp.prl libwht.a spiral_wht.h \
           mkinstalldirs $(INSTALL_PCL) $(BESTTREE) retime.prl
	$(SHELL) mkinstalldirs $(INSTALL_LIB)
	$(SHELL) mkinstalldirs $(INSTALL_INCLUDE)
	$(SHELL) mkinstalldirs $(INSTALL_DATA)
	$(SHELL) mkinstalldirs $(INSTALL_EXEC)
	$(INSTALL) libwht.a $(INSTALL_LIB)/libwht.a
	$(INSTALL) spiral_wht.h $(INSTALL_INCLUDE)/spiral_wht.h
	$(INSTALL) $(BESTTREE) $(INSTALL_DATA)/wht_trees
	$(INSTALL) wht_measure $(INSTALL_EXEC)/wht_measure
	$(INSTALL) wht_ga $(INSTALL_EXEC)/wht_ga
	$(INSTALL) wht_dp.prl $(INSTALL_EXEC)/wht_dp.prl
	./retime.prl -m20
	

installpcl: wht_pclprof 
	$(INSTALL) wht_pclprof $(INSTALL_EXEC)/wht_pclprof

installpara: 
	$(SHELL) mkinstalldirs $(INSTALL_DATA)
	$(INSTALL) $(BESTTREE_P) $(INSTALL_DATA)/wht_trees$(THREAD)
	./retime.prl -m20 -f$(INSTALL_DATA)/wht_trees$(THREAD)
	cp $(INSTALL_DATA)/wht_trees $(INSTALL_DATA)/wht_trees1

uninstall:
	rm -f $(INSTALL_DATA)/wht_trees
	rm -f $(INSTALL_INCLUDE)/spiral_wht.h
	rm -f $(INSTALL_LIB)/libwht.a
	rm -f $(INSTALL_EXEC)/wht_measure
	rm -f $(INSTALL_EXEC)/wht_pclprof
	rm -f $(INSTALL_EXEC)/wht_ga
	rm -f $(INSTALL_EXEC)/wht_dp.prl
	rm -f $(INSTALL_DATA)/wht_trees[1-$(THREAD)]
 
package:
	tar c -C .. spiral_wht/Makefile.in spiral_wht/README \
          spiral_wht/COPYING spiral_wht/COPYRIGHT \
          spiral_wht/INSTALL spiral_wht/codegen \
          spiral_wht/config.guess spiral_wht/config.sub \
          spiral_wht/besttrees.default spiral_wht/besttrees.p2 \
          spiral_wht/besttrees.sparc spiral_wht/configure.in \
          spiral_wht/configure spiral_wht/wht_dp_sdl.prl.in spiral_wht/install-sh \
          spiral_wht/makelib spiral_wht/measure.c spiral_wht/mkinstalldirs \
          spiral_wht/pclprof.c spiral_wht/retime.prl.in \
          spiral_wht/simplop.prl.in spiral_wht/wht_trees.c \
          spiral_wht/verify.c spiral_wht/spiral_wht.c spiral_wht/spiral_wht.h \
          spiral_wht/ga/README spiral_wht/ga/best_ave.m \
          spiral_wht/ga/cross.c spiral_wht/ga/cross.h spiral_wht/ga/fitness.c \
          spiral_wht/ga/fitness.h spiral_wht/ga/ga.c spiral_wht/ga/ga.h \
          spiral_wht/ga/hash.c spiral_wht/ga/hash.h spiral_wht/ga/indiv.c \
          spiral_wht/ga/indiv.h spiral_wht/ga/main.c spiral_wht/ga/mutate.c \
          spiral_wht/ga/mutate.h spiral_wht/ga/options.h \
          spiral_wht/ga/plot_best_ave.sh spiral_wht/ga/rand.c \
          spiral_wht/ga/rand.h spiral_wht/ga/randtree.c \
          spiral_wht/ga/randtree.h spiral_wht/ga/tester.c \
          spiral_wht/ga/tester.h spiral_wht/ga/tree.c spiral_wht/ga/tree.h \
          spiral_wht/transpose.c spiral_wht/transpose_stride.c \
          spiral_wht/transpose.h.in spiral_wht/wht_dp_ddl.prl.in \
          spiral_wht/tools/gettimes spiral_wht/tools/makeweb \
          spiral_wht/ga/Makefile.in spiral_wht/test.c | gzip > spiral_wht.tgz

# checking
check: wht_test wht_verify $(CHECK_DDL) $(CHECK_IL) $(CHECK_DDL_IL) $(CHECK_PARA)
	./wht_verify -w "small[1]"
	./wht_verify -w "split[small[1], small[3]]"
	./wht_verify -w "split[split[small[2], small[4]], small[1]]"
	./wht_verify -w "split[small[5], split[small[2], small[1]]]"
	./wht_verify -w "split[small[1], split[small[2], small[1]], small[1]]"
	./wht_test

checkddl:
	./wht_verify -w "splitddl[small[3], small[4]]"
	./wht_verify -w "splitddl[small[4], split[small[2], small[2]]]"
	./wht_verify -w "splitddl[split[small[2], small[4]], small[2]]"
	./wht_verify -w "split[small[1], splitddl[small[2], small[6]]]"
	./wht_verify -w "split[splitddl[small[2], small[1]], small[3]]"
	./wht_verify -w "split[small[1], splitddl[small[2], small[1]], small[1]]"

checkil1:
	./wht_verify -w "split[smallil1[2],small[2]]"
	./wht_verify -w "split[small[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[smallil1[2],split[small[2],small[2]]]"
	./wht_verify -w "split[smallil1[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],small[2]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil1[1],small[3]]]"
	./wht_verify -w "split[split[small[2],small[2]],split[smallil1[1],small[3]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[small[1],small[3]]]"


checkil2: checkil1
	./wht_verify -w "split[smallil1[2],small[2]]"
	./wht_verify -w "split[small[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[smallil1[2],split[small[2],small[2]]]"
	./wht_verify -w "split[smallil1[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],small[2]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil1[1],small[3]]]"
	./wht_verify -w "split[split[small[2],small[2]],split[smallil1[1],small[3]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[small[1],small[3]]]"

	./wht_verify -w "split[smallil1[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[smallil1[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil1[1],small[3]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil1[1],small[3]]]"

checkil3: checkil2
	./wht_verify -w "split[smallil3[2],small[3]]"
	./wht_verify -w "split[small[2],split[smallil3[2],small[3]]]"
	./wht_verify -w "split[smallil3[2],split[small[2],small[2]]]"
	./wht_verify -w "split[smallil3[2],split[smallil3[2],small[3]]]"
	./wht_verify -w "split[split[smallil3[2],small[3]],small[2]]"
	./wht_verify -w "split[split[smallil3[2],small[3]],split[smallil3[1],small[3]]]"
	./wht_verify -w "split[split[small[2],small[2]],split[smallil3[1],small[3]]]"
	./wht_verify -w "split[split[smallil3[2],small[3]],split[small[1],small[3]]]"

	./wht_verify -w "split[smallil1[2],split[smallil3[2],small[3]]]"
	./wht_verify -w "split[smallil3[2],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil3[1],small[3]]]"
	./wht_verify -w "split[split[smallil3[2],small[3]],split[smallil1[1],small[3]]]"

checkil4: checkil3
	./wht_verify -w "split[smallil4[1],small[4]]"
	./wht_verify -w "split[small[2],split[smallil4[1],small[4]]]"
	./wht_verify -w "split[smallil4[1],split[small[2],small[2]]]"
	./wht_verify -w "split[smallil4[2],split[smallil4[1],small[4]]]"
	./wht_verify -w "split[split[smallil4[2],small[5]],small[2]]"
	./wht_verify -w "split[split[smallil4[1],small[4]],split[smallil4[1],small[4]]]"
	./wht_verify -w "split[split[small[2],small[2]],split[smallil4[1],small[4]]]"
	./wht_verify -w "split[split[smallil4[1],small[4]],split[small[1],small[3]]]"

	./wht_verify -w "split[smallil1[2],split[smallil4[1],small[4]]]"
	./wht_verify -w "split[smallil4[1],split[smallil1[2],small[2]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil4[1],small[4]]]"
	./wht_verify -w "split[split[smallil4[1],small[4]],split[smallil1[1],small[3]]]"

checkil5: checkil4
	./wht_verify -w "split[smallil5[1],small[5]]"
	./wht_verify -w "split[small[2],split[smallil5[1],small[5]]]"
	./wht_verify -w "split[smallil5[1],split[small[2],small[3]]]"
	./wht_verify -w "split[smallil5[1],split[smallil5[1],small[5]]]"
	./wht_verify -w "split[split[smallil5[2],small[5]],small[2]]"
	./wht_verify -w "split[split[smallil5[1],small[5]],split[smallil5[1],small[5]]]"
	./wht_verify -w "split[split[small[2],small[2]],split[smallil5[1],small[5]]]"
	./wht_verify -w "split[split[smallil5[1],small[5]],split[small[1],small[3]]]"

	./wht_verify -w "split[smallil1[2],split[smallil5[1],small[5]]]"
	./wht_verify -w "split[smallil5[1],split[smallil1[2],small[3]]]"
	./wht_verify -w "split[split[smallil1[2],small[2]],split[smallil5[1],small[5]]]"
	./wht_verify -w "split[split[smallil5[1],small[5]],split[smallil1[1],small[2]]]"

checkddlil1: checkddl
	./wht_verify -w "splitddl[small[4], split[smallil1[2], small[2]]]"
	./wht_verify -w "splitddl[split[smallil1[2], small[4]], small[2]]"
	./wht_verify -w "split[smallil1[1], splitddl[small[2], small[6]]]"
	./wht_verify -w "split[smallil1[1], splitddl[small[2], small[1]], small[1]]"

checkddlil2: checkddlil1
	./wht_verify -w "splitddl[small[4], split[smallil1[2], small[2]]]"
	./wht_verify -w "splitddl[split[smallil1[2], small[4]], small[2]]"
	./wht_verify -w "split[smallil1[1], splitddl[small[2], small[6]]]"
	./wht_verify -w "split[smallil1[1], splitddl[small[2], small[1]], small[1]]"

	./wht_verify -w "splitddl[split[smallil1[2],small[2]],split[smallil1[2],small[3]]]"

checkddlil3: checkddlil2
	./wht_verify -w "splitddl[small[4], split[smallil3[2], small[3]]]"
	./wht_verify -w "splitddl[split[smallil3[2], small[4]], small[2]]"
	./wht_verify -w "split[smallil3[1], splitddl[small[2], small[6]]]"
	./wht_verify -w "split[smallil3[1], splitddl[small[2], small[1]], small[1]]"

checkddlil4: checkddlil3
	./wht_verify -w "splitddl[small[4], split[smallil4[1], small[4]]]"
	./wht_verify -w "splitddl[split[smallil4[1], small[4]], small[2]]"
	./wht_verify -w "split[smallil4[1], splitddl[small[2], small[6]]]"
	./wht_verify -w "split[smallil4[1], splitddl[small[2], small[1]], small[1]]"

checkddlil5: checkddlil4
	./wht_verify -w "splitddl[small[4], split[smallil5[1], small[5]]]"
	./wht_verify -w "splitddl[split[smallil5[2], small[5]], small[2]]"
	./wht_verify -w "split[smallil5[1], splitddl[small[2], small[6]]]"
	./wht_verify -w "split[smallil5[1], splitddl[small[2], small[2]], small[1]]"

checkpara:
	./wht_verify -p $(THREAD) -w "p_splitddl[small[5],small[2]]"
	./wht_verify -p $(THREAD) -w "split[small[4],p_splitddl[small[3],small[2]]]"
	./wht_verify -p $(THREAD) -w "split[p_splitddl[small[2],small[3]],small[3]]"
	./wht_verify -p $(THREAD) -w "p_splitddl[small[4],split[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "p_splitddl[split[small[2],small[2]],small[3]]"
	./wht_verify -p $(THREAD) -w "p_splitddl[small[4],p_splitddl[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "p_splitddl[p_splitddl[small[2],small[2]],small[3]]"

	./wht_verify -p $(THREAD) -w "p_split[small[5],small[2]]"
	./wht_verify -p $(THREAD) -w "split[small[4],p_split[small[3],small[2]]]"
	./wht_verify -p $(THREAD) -w "split[p_split[small[2],small[3]],small[3]]"
	./wht_verify -p $(THREAD) -w "p_split[small[4],split[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "p_split[split[small[2],small[2]],small[3]]"
	./wht_verify -p $(THREAD) -w "p_split[small[4],p_splitddl[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "p_split[p_splitddl[small[2],small[2]],small[3]]"

checkparaddl: checkpara
	./wht_verify -p $(THREAD) -w "splitddl[small[4],p_splitddl[small[2],small[2]]]" 
	./wht_verify -p $(THREAD) -w "splitddl[p_splitddl[small[2],small[2]],small[3]]" 
	./wht_verify -p $(THREAD) -w "p_splitddl[small[4],splitddl[small[3],small[2]]]" 
	./wht_verify -p $(THREAD) -w "p_splitddl[splitddl[small[3],small[2]],small[3]]" 

	./wht_verify -p $(THREAD) -w "splitddl[small[4],p_split[small[2],small[2]]]" 
	./wht_verify -p $(THREAD) -w "splitddl[p_split[small[2],small[2]],small[3]]" 
	./wht_verify -p $(THREAD) -w "p_split[small[4],splitddl[small[3],small[2]]]" 
	./wht_verify -p $(THREAD) -w "p_split[splitddl[small[3],small[2]],small[3]]" 

checkparail: checkpara
	./wht_verify -p $(THREAD) -w "split[smallil1[4],p_splitddl[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "split[smallil1[4],p_split[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "p_split[smallil1[4],split[small[2],small[2]]]"
	./wht_verify -p $(THREAD) -w "p_split[smallil1[4],p_split[small[2],small[2]]]"

checkparaddlil: checkparaddl checkparail
	./wht_verify -p $(THREAD) -w "splitddl[small[4],p_split[smallil1[2],small[2]]]" 
	./wht_verify -p $(THREAD) -w "splitddl[p_split[smallil1[2],small[2]],small[3]]" 
	./wht_verify -p $(THREAD) -w "p_split[smallil1[4],splitddl[small[3],small[2]]]" 


wht_test: test.c libwht.a
	$(CC) $(CCFLAGS) -DTHREADNUM=$(THREAD)        -L. -o wht_test test.c -lwht -lm 


# the code generator
whtgen: $(WHTGEN) Makefile
	$(CC) $(CCFLAGS) -o whtgen $(WHTGEN) -lm

# the library of unrolled building blocks
# the " is required since $(CCFLAGS) might contain
# several options
libwht.a: $(WHTGEN) makelib whtgen spiral_wht.o wht_trees.o transpose.o transpose_stride.o p_transpose.o p_transpose_stride.o
	./makelib -c $(CC) -o "$(CCFLAGS)" -a "$(ARFLAGS)" -n $(MAX_UNROLLED) -m $(MAX_INTERLEAVED) -l $(LOOP_INTERLEAVING_LEVEL)
	ar $(ARFLAGS) r libwht.a spiral_wht.o
	ar $(ARFLAGS) r libwht.a wht_trees.o
	ar $(ARFLAGS) r libwht.a transpose.o
	ar $(ARFLAGS) r libwht.a transpose_stride.o
	ar $(ARFLAGS) r libwht.a p_transpose.o
	ar $(ARFLAGS) r libwht.a p_transpose_stride.o
	ranlib libwht.a

# verification, -L adds . to the lib directories
wht_verify: verify.c libwht.a
	$(CC) $(CCFLAGS)       -DMAX_UNROLLED=$(MAX_UNROLLED) \
          -L. -o wht_verify verify.c -lwht -lm 

# runtime measurement
wht_measure: measure.c libwht.a
	$(CC) $(CCFLAGS)       -DMAX_UNROLLED=$(MAX_UNROLLED) \
          -L. -o wht_measure measure.c -lwht -lm 

transpose.o: transpose.c
	$(CC) $(CCFLAGS) -c transpose.c

transpose_stride.o: transpose_stride.c
	$(CC) $(CCFLAGS) -c transpose_stride.c

spiral_wht.o: spiral_wht.c Makefile
	$(CC) $(CCFLAGS)            -DMAX_UNROLLED=$(MAX_UNROLLED) \
	  -c spiral_wht.c

wht_trees.o: wht_trees.c
	$(CC) $(CCFLAGS)  -DBESTTREE='"$(INSTALL_DATA)/wht_trees"' -c wht_trees.c

p_transpose.o: p_transpose.c
	$(CC) $(CCFLAGS) -c p_transpose.c
        
p_transpose_stride.o: p_transpose_stride.c
	$(CC) $(CCFLAGS) -c p_transpose_stride.c


# pcl investigation
wht_pclprof: none 

pclprof: pclprof.c libwht.a 
	-$(CC) $(CCFLAGS)  -L.  -o wht_pclprof \
          pclprof.c -lwht -lm -lpcl  

# dummy target
none:

# ga
GAFILES = ga/main.c ga/cross.o ga/mutate.o ga/fitness.o \
  ga/indiv.o ga/randtree.o ga/tree.o ga/hash.o ga/rand.o \
  ga/tester.o ga/ga.o

CFLAGS = -I. $(CCFLAGS) -DMEASURE_LOC='"$(INSTALL_EXEC)/wht_measure"'

wht_ga: libwht.a wht_measure
	cd ga; make all
	$(CC) $(CCFLAGS) -DMEASURE_LOC='"$(INSTALL_EXEC)/wht_measure"' \
          -L. -I. -o wht_ga $(GAFILES) -lwht -lm 

# cleaning up
clean:
	rm -f il*.c s_*.c *.o libwht.a core wht_measure \
	      whtgen wht_pclprof wht_ga ga/*.o wht_verify wht_test \

distclean: clean
	rm -f Makefile config.cache config.log whtgen  retime.prl\
	      simplop.prl wht_dp.prl transpose.h parallel.h retime_p.prl

