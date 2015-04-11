/* This function has been automatically generated by whtgen. */

/*
  apply_small7( <wht>, <S>, <x> )
  ------------------------------
  computes
    WHT_(2^7) with stride <S>
  on the vector <x>
*/

#include "spiral_wht.h"

void apply_small7(Wht *W, long S, wht_value *x)
{
  wht_value t0;
  wht_value t1;
  wht_value t2;
  wht_value t3;
  wht_value t4;
  wht_value t5;
  wht_value t6;
  wht_value t7;
  wht_value t8;
  wht_value t9;
  wht_value t10;
  wht_value t11;
  wht_value t12;
  wht_value t13;
  wht_value t14;
  wht_value t15;
  wht_value t16;
  wht_value t17;
  wht_value t18;
  wht_value t19;
  wht_value t20;
  wht_value t21;
  wht_value t22;
  wht_value t23;
  wht_value t24;
  wht_value t25;
  wht_value t26;
  wht_value t27;
  wht_value t28;
  wht_value t29;
  wht_value t30;
  wht_value t31;
  wht_value t32;
  wht_value t33;
  wht_value t34;
  wht_value t35;
  wht_value t36;
  wht_value t37;
  wht_value t38;
  wht_value t39;
  wht_value t40;
  wht_value t41;
  wht_value t42;
  wht_value t43;
  wht_value t44;
  wht_value t45;
  wht_value t46;
  wht_value t47;
  wht_value t48;
  wht_value t49;
  wht_value t50;
  wht_value t51;
  wht_value t52;
  wht_value t53;
  wht_value t54;
  wht_value t55;
  wht_value t56;
  wht_value t57;
  wht_value t58;
  wht_value t59;
  wht_value t60;
  wht_value t61;
  wht_value t62;
  wht_value t63;
  wht_value t64;
  wht_value t65;
  wht_value t66;
  wht_value t67;
  wht_value t68;
  wht_value t69;
  wht_value t70;
  wht_value t71;
  wht_value t72;
  wht_value t73;
  wht_value t74;
  wht_value t75;
  wht_value t76;
  wht_value t77;
  wht_value t78;
  wht_value t79;
  wht_value t80;
  wht_value t81;
  wht_value t82;
  wht_value t83;
  wht_value t84;
  wht_value t85;
  wht_value t86;
  wht_value t87;
  wht_value t88;
  wht_value t89;
  wht_value t90;
  wht_value t91;
  wht_value t92;
  wht_value t93;
  wht_value t94;
  wht_value t95;
  wht_value t96;
  wht_value t97;
  wht_value t98;
  wht_value t99;
  wht_value t100;
  wht_value t101;
  wht_value t102;
  wht_value t103;
  wht_value t104;
  wht_value t105;
  wht_value t106;
  wht_value t107;
  wht_value t108;
  wht_value t109;
  wht_value t110;
  wht_value t111;
  wht_value t112;
  wht_value t113;
  wht_value t114;
  wht_value t115;
  wht_value t116;
  wht_value t117;
  wht_value t118;
  wht_value t119;
  wht_value t120;
  wht_value t121;
  wht_value t122;
  wht_value t123;
  wht_value t124;
  wht_value t125;
  wht_value t126;
  wht_value t127;
  wht_value t128;
  wht_value t129;
  wht_value t130;
  wht_value t131;
  wht_value t132;
  wht_value t133;
  wht_value t134;
  wht_value t135;
  wht_value t136;
  wht_value t137;
  wht_value t138;
  wht_value t139;
  wht_value t140;
  wht_value t141;
  wht_value t142;
  wht_value t143;
  wht_value t144;
  wht_value t145;
  wht_value t146;
  wht_value t147;
  wht_value t148;
  wht_value t149;
  wht_value t150;
  wht_value t151;
  wht_value t152;
  wht_value t153;
  wht_value t154;
  wht_value t155;
  wht_value t156;
  wht_value t157;
  wht_value t158;
  wht_value t159;
  wht_value t160;
  wht_value t161;
  wht_value t162;
  wht_value t163;
  wht_value t164;
  wht_value t165;
  wht_value t166;
  wht_value t167;
  wht_value t168;
  wht_value t169;
  wht_value t170;
  wht_value t171;
  wht_value t172;
  wht_value t173;
  wht_value t174;
  wht_value t175;
  wht_value t176;
  wht_value t177;
  wht_value t178;
  wht_value t179;
  wht_value t180;
  wht_value t181;
  wht_value t182;
  wht_value t183;
  wht_value t184;
  wht_value t185;
  wht_value t186;
  wht_value t187;
  wht_value t188;
  wht_value t189;
  wht_value t190;
  wht_value t191;
  wht_value t192;
  wht_value t193;
  wht_value t194;
  wht_value t195;
  wht_value t196;
  wht_value t197;
  wht_value t198;
  wht_value t199;
  wht_value t200;
  wht_value t201;
  wht_value t202;
  wht_value t203;
  wht_value t204;
  wht_value t205;
  wht_value t206;
  wht_value t207;
  wht_value t208;
  wht_value t209;
  wht_value t210;
  wht_value t211;
  wht_value t212;
  wht_value t213;
  wht_value t214;
  wht_value t215;
  wht_value t216;
  wht_value t217;
  wht_value t218;
  wht_value t219;
  wht_value t220;
  wht_value t221;
  wht_value t222;
  wht_value t223;
  wht_value t224;
  wht_value t225;
  wht_value t226;
  wht_value t227;
  wht_value t228;
  wht_value t229;
  wht_value t230;
  wht_value t231;
  wht_value t232;
  wht_value t233;
  wht_value t234;
  wht_value t235;
  wht_value t236;
  wht_value t237;
  wht_value t238;
  wht_value t239;
  wht_value t240;
  wht_value t241;
  wht_value t242;
  wht_value t243;
  wht_value t244;
  wht_value t245;
  wht_value t246;
  wht_value t247;
  wht_value t248;
  wht_value t249;
  wht_value t250;
  wht_value t251;
  wht_value t252;
  wht_value t253;
  wht_value t254;
  wht_value t255;
  wht_value t256;
  wht_value t257;
  wht_value t258;
  wht_value t259;
  wht_value t260;
  wht_value t261;
  wht_value t262;
  wht_value t263;
  wht_value t264;
  wht_value t265;
  wht_value t266;
  wht_value t267;
  wht_value t268;
  wht_value t269;
  wht_value t270;
  wht_value t271;
  wht_value t272;
  wht_value t273;
  wht_value t274;
  wht_value t275;
  wht_value t276;
  wht_value t277;
  wht_value t278;
  wht_value t279;
  wht_value t280;
  wht_value t281;
  wht_value t282;
  wht_value t283;
  wht_value t284;
  wht_value t285;
  wht_value t286;
  wht_value t287;
  wht_value t288;
  wht_value t289;
  wht_value t290;
  wht_value t291;
  wht_value t292;
  wht_value t293;
  wht_value t294;
  wht_value t295;
  wht_value t296;
  wht_value t297;
  wht_value t298;
  wht_value t299;
  wht_value t300;
  wht_value t301;
  wht_value t302;
  wht_value t303;
  wht_value t304;
  wht_value t305;
  wht_value t306;
  wht_value t307;
  wht_value t308;
  wht_value t309;
  wht_value t310;
  wht_value t311;
  wht_value t312;
  wht_value t313;
  wht_value t314;
  wht_value t315;
  wht_value t316;
  wht_value t317;
  wht_value t318;
  wht_value t319;
  wht_value t320;
  wht_value t321;
  wht_value t322;
  wht_value t323;
  wht_value t324;
  wht_value t325;
  wht_value t326;
  wht_value t327;
  wht_value t328;
  wht_value t329;
  wht_value t330;
  wht_value t331;
  wht_value t332;
  wht_value t333;
  wht_value t334;
  wht_value t335;
  wht_value t336;
  wht_value t337;
  wht_value t338;
  wht_value t339;
  wht_value t340;
  wht_value t341;
  wht_value t342;
  wht_value t343;
  wht_value t344;
  wht_value t345;
  wht_value t346;
  wht_value t347;
  wht_value t348;
  wht_value t349;
  wht_value t350;
  wht_value t351;
  wht_value t352;
  wht_value t353;
  wht_value t354;
  wht_value t355;
  wht_value t356;
  wht_value t357;
  wht_value t358;
  wht_value t359;
  wht_value t360;
  wht_value t361;
  wht_value t362;
  wht_value t363;
  wht_value t364;
  wht_value t365;
  wht_value t366;
  wht_value t367;
  wht_value t368;
  wht_value t369;
  wht_value t370;
  wht_value t371;
  wht_value t372;
  wht_value t373;
  wht_value t374;
  wht_value t375;
  wht_value t376;
  wht_value t377;
  wht_value t378;
  wht_value t379;
  wht_value t380;
  wht_value t381;
  wht_value t382;
  wht_value t383;
  wht_value t384;
  wht_value t385;
  wht_value t386;
  wht_value t387;
  wht_value t388;
  wht_value t389;
  wht_value t390;
  wht_value t391;
  wht_value t392;
  wht_value t393;
  wht_value t394;
  wht_value t395;
  wht_value t396;
  wht_value t397;
  wht_value t398;
  wht_value t399;
  wht_value t400;
  wht_value t401;
  wht_value t402;
  wht_value t403;
  wht_value t404;
  wht_value t405;
  wht_value t406;
  wht_value t407;
  wht_value t408;
  wht_value t409;
  wht_value t410;
  wht_value t411;
  wht_value t412;
  wht_value t413;
  wht_value t414;
  wht_value t415;
  wht_value t416;
  wht_value t417;
  wht_value t418;
  wht_value t419;
  wht_value t420;
  wht_value t421;
  wht_value t422;
  wht_value t423;
  wht_value t424;
  wht_value t425;
  wht_value t426;
  wht_value t427;
  wht_value t428;
  wht_value t429;
  wht_value t430;
  wht_value t431;
  wht_value t432;
  wht_value t433;
  wht_value t434;
  wht_value t435;
  wht_value t436;
  wht_value t437;
  wht_value t438;
  wht_value t439;
  wht_value t440;
  wht_value t441;
  wht_value t442;
  wht_value t443;
  wht_value t444;
  wht_value t445;
  wht_value t446;
  wht_value t447;
  wht_value t448;
  wht_value t449;
  wht_value t450;
  wht_value t451;
  wht_value t452;
  wht_value t453;
  wht_value t454;
  wht_value t455;
  wht_value t456;
  wht_value t457;
  wht_value t458;
  wht_value t459;
  wht_value t460;
  wht_value t461;
  wht_value t462;
  wht_value t463;
  wht_value t464;
  wht_value t465;
  wht_value t466;
  wht_value t467;
  wht_value t468;
  wht_value t469;
  wht_value t470;
  wht_value t471;
  wht_value t472;
  wht_value t473;
  wht_value t474;
  wht_value t475;
  wht_value t476;
  wht_value t477;
  wht_value t478;
  wht_value t479;
  wht_value t480;
  wht_value t481;
  wht_value t482;
  wht_value t483;
  wht_value t484;
  wht_value t485;
  wht_value t486;
  wht_value t487;
  wht_value t488;
  wht_value t489;
  wht_value t490;
  wht_value t491;
  wht_value t492;
  wht_value t493;
  wht_value t494;
  wht_value t495;
  wht_value t496;
  wht_value t497;
  wht_value t498;
  wht_value t499;
  wht_value t500;
  wht_value t501;
  wht_value t502;
  wht_value t503;
  wht_value t504;
  wht_value t505;
  wht_value t506;
  wht_value t507;
  wht_value t508;
  wht_value t509;
  wht_value t510;
  wht_value t511;
  wht_value t512;
  wht_value t513;
  wht_value t514;
  wht_value t515;
  wht_value t516;
  wht_value t517;
  wht_value t518;
  wht_value t519;
  wht_value t520;
  wht_value t521;
  wht_value t522;
  wht_value t523;
  wht_value t524;
  wht_value t525;
  wht_value t526;
  wht_value t527;
  wht_value t528;
  wht_value t529;
  wht_value t530;
  wht_value t531;
  wht_value t532;
  wht_value t533;
  wht_value t534;
  wht_value t535;
  wht_value t536;
  wht_value t537;
  wht_value t538;
  wht_value t539;
  wht_value t540;
  wht_value t541;
  wht_value t542;
  wht_value t543;
  wht_value t544;
  wht_value t545;
  wht_value t546;
  wht_value t547;
  wht_value t548;
  wht_value t549;
  wht_value t550;
  wht_value t551;
  wht_value t552;
  wht_value t553;
  wht_value t554;
  wht_value t555;
  wht_value t556;
  wht_value t557;
  wht_value t558;
  wht_value t559;
  wht_value t560;
  wht_value t561;
  wht_value t562;
  wht_value t563;
  wht_value t564;
  wht_value t565;
  wht_value t566;
  wht_value t567;
  wht_value t568;
  wht_value t569;
  wht_value t570;
  wht_value t571;
  wht_value t572;
  wht_value t573;
  wht_value t574;
  wht_value t575;
  wht_value t576;
  wht_value t577;
  wht_value t578;
  wht_value t579;
  wht_value t580;
  wht_value t581;
  wht_value t582;
  wht_value t583;
  wht_value t584;
  wht_value t585;
  wht_value t586;
  wht_value t587;
  wht_value t588;
  wht_value t589;
  wht_value t590;
  wht_value t591;
  wht_value t592;
  wht_value t593;
  wht_value t594;
  wht_value t595;
  wht_value t596;
  wht_value t597;
  wht_value t598;
  wht_value t599;
  wht_value t600;
  wht_value t601;
  wht_value t602;
  wht_value t603;
  wht_value t604;
  wht_value t605;
  wht_value t606;
  wht_value t607;
  wht_value t608;
  wht_value t609;
  wht_value t610;
  wht_value t611;
  wht_value t612;
  wht_value t613;
  wht_value t614;
  wht_value t615;
  wht_value t616;
  wht_value t617;
  wht_value t618;
  wht_value t619;
  wht_value t620;
  wht_value t621;
  wht_value t622;
  wht_value t623;
  wht_value t624;
  wht_value t625;
  wht_value t626;
  wht_value t627;
  wht_value t628;
  wht_value t629;
  wht_value t630;
  wht_value t631;
  wht_value t632;
  wht_value t633;
  wht_value t634;
  wht_value t635;
  wht_value t636;
  wht_value t637;
  wht_value t638;
  wht_value t639;
  wht_value t640;
  wht_value t641;
  wht_value t642;
  wht_value t643;
  wht_value t644;
  wht_value t645;
  wht_value t646;
  wht_value t647;
  wht_value t648;
  wht_value t649;
  wht_value t650;
  wht_value t651;
  wht_value t652;
  wht_value t653;
  wht_value t654;
  wht_value t655;
  wht_value t656;
  wht_value t657;
  wht_value t658;
  wht_value t659;
  wht_value t660;
  wht_value t661;
  wht_value t662;
  wht_value t663;
  wht_value t664;
  wht_value t665;
  wht_value t666;
  wht_value t667;
  wht_value t668;
  wht_value t669;
  wht_value t670;
  wht_value t671;
  wht_value t672;
  wht_value t673;
  wht_value t674;
  wht_value t675;
  wht_value t676;
  wht_value t677;
  wht_value t678;
  wht_value t679;
  wht_value t680;
  wht_value t681;
  wht_value t682;
  wht_value t683;
  wht_value t684;
  wht_value t685;
  wht_value t686;
  wht_value t687;
  wht_value t688;
  wht_value t689;
  wht_value t690;
  wht_value t691;
  wht_value t692;
  wht_value t693;
  wht_value t694;
  wht_value t695;
  wht_value t696;
  wht_value t697;
  wht_value t698;
  wht_value t699;
  wht_value t700;
  wht_value t701;
  wht_value t702;
  wht_value t703;
  wht_value t704;
  wht_value t705;
  wht_value t706;
  wht_value t707;
  wht_value t708;
  wht_value t709;
  wht_value t710;
  wht_value t711;
  wht_value t712;
  wht_value t713;
  wht_value t714;
  wht_value t715;
  wht_value t716;
  wht_value t717;
  wht_value t718;
  wht_value t719;
  wht_value t720;
  wht_value t721;
  wht_value t722;
  wht_value t723;
  wht_value t724;
  wht_value t725;
  wht_value t726;
  wht_value t727;
  wht_value t728;
  wht_value t729;
  wht_value t730;
  wht_value t731;
  wht_value t732;
  wht_value t733;
  wht_value t734;
  wht_value t735;
  wht_value t736;
  wht_value t737;
  wht_value t738;
  wht_value t739;
  wht_value t740;
  wht_value t741;
  wht_value t742;
  wht_value t743;
  wht_value t744;
  wht_value t745;
  wht_value t746;
  wht_value t747;
  wht_value t748;
  wht_value t749;
  wht_value t750;
  wht_value t751;
  wht_value t752;
  wht_value t753;
  wht_value t754;
  wht_value t755;
  wht_value t756;
  wht_value t757;
  wht_value t758;
  wht_value t759;
  wht_value t760;
  wht_value t761;
  wht_value t762;
  wht_value t763;
  wht_value t764;
  wht_value t765;
  wht_value t766;
  wht_value t767;




  t0 = x[0] + x[S];
  t1 = x[0] - x[S];
  t2 = x[2 * S] + x[3 * S];
  t3 = x[2 * S] - x[3 * S];
  t4 = t0 + t2;
  t6 = t0 - t2;
  t5 = t1 + t3;
  t7 = t1 - t3;
  t8 = x[4 * S] + x[5 * S];
  t9 = x[4 * S] - x[5 * S];
  t10 = x[6 * S] + x[7 * S];
  t11 = x[6 * S] - x[7 * S];
  t12 = t8 + t10;
  t14 = t8 - t10;
  t13 = t9 + t11;
  t15 = t9 - t11;
  t16 = t4 + t12;
  t20 = t4 - t12;
  t17 = t5 + t13;
  t21 = t5 - t13;
  t18 = t6 + t14;
  t22 = t6 - t14;
  t19 = t7 + t15;
  t23 = t7 - t15;
  t24 = x[8 * S] + x[9 * S];
  t25 = x[8 * S] - x[9 * S];
  t26 = x[10 * S] + x[11 * S];
  t27 = x[10 * S] - x[11 * S];
  t28 = t24 + t26;
  t30 = t24 - t26;
  t29 = t25 + t27;
  t31 = t25 - t27;
  t32 = x[12 * S] + x[13 * S];
  t33 = x[12 * S] - x[13 * S];
  t34 = x[14 * S] + x[15 * S];
  t35 = x[14 * S] - x[15 * S];
  t36 = t32 + t34;
  t38 = t32 - t34;
  t37 = t33 + t35;
  t39 = t33 - t35;
  t40 = t28 + t36;
  t44 = t28 - t36;
  t41 = t29 + t37;
  t45 = t29 - t37;
  t42 = t30 + t38;
  t46 = t30 - t38;
  t43 = t31 + t39;
  t47 = t31 - t39;
  t48 = t16 + t40;
  t56 = t16 - t40;
  t49 = t17 + t41;
  t57 = t17 - t41;
  t50 = t18 + t42;
  t58 = t18 - t42;
  t51 = t19 + t43;
  t59 = t19 - t43;
  t52 = t20 + t44;
  t60 = t20 - t44;
  t53 = t21 + t45;
  t61 = t21 - t45;
  t54 = t22 + t46;
  t62 = t22 - t46;
  t55 = t23 + t47;
  t63 = t23 - t47;
  t64 = x[16 * S] + x[17 * S];
  t65 = x[16 * S] - x[17 * S];
  t66 = x[18 * S] + x[19 * S];
  t67 = x[18 * S] - x[19 * S];
  t68 = t64 + t66;
  t70 = t64 - t66;
  t69 = t65 + t67;
  t71 = t65 - t67;
  t72 = x[20 * S] + x[21 * S];
  t73 = x[20 * S] - x[21 * S];
  t74 = x[22 * S] + x[23 * S];
  t75 = x[22 * S] - x[23 * S];
  t76 = t72 + t74;
  t78 = t72 - t74;
  t77 = t73 + t75;
  t79 = t73 - t75;
  t80 = t68 + t76;
  t84 = t68 - t76;
  t81 = t69 + t77;
  t85 = t69 - t77;
  t82 = t70 + t78;
  t86 = t70 - t78;
  t83 = t71 + t79;
  t87 = t71 - t79;
  t88 = x[24 * S] + x[25 * S];
  t89 = x[24 * S] - x[25 * S];
  t90 = x[26 * S] + x[27 * S];
  t91 = x[26 * S] - x[27 * S];
  t92 = t88 + t90;
  t94 = t88 - t90;
  t93 = t89 + t91;
  t95 = t89 - t91;
  t96 = x[28 * S] + x[29 * S];
  t97 = x[28 * S] - x[29 * S];
  t98 = x[30 * S] + x[31 * S];
  t99 = x[30 * S] - x[31 * S];
  t100 = t96 + t98;
  t102 = t96 - t98;
  t101 = t97 + t99;
  t103 = t97 - t99;
  t104 = t92 + t100;
  t108 = t92 - t100;
  t105 = t93 + t101;
  t109 = t93 - t101;
  t106 = t94 + t102;
  t110 = t94 - t102;
  t107 = t95 + t103;
  t111 = t95 - t103;
  t112 = t80 + t104;
  t120 = t80 - t104;
  t113 = t81 + t105;
  t121 = t81 - t105;
  t114 = t82 + t106;
  t122 = t82 - t106;
  t115 = t83 + t107;
  t123 = t83 - t107;
  t116 = t84 + t108;
  t124 = t84 - t108;
  t117 = t85 + t109;
  t125 = t85 - t109;
  t118 = t86 + t110;
  t126 = t86 - t110;
  t119 = t87 + t111;
  t127 = t87 - t111;
  t128 = t48 + t112;
  t144 = t48 - t112;
  t129 = t49 + t113;
  t145 = t49 - t113;
  t130 = t50 + t114;
  t146 = t50 - t114;
  t131 = t51 + t115;
  t147 = t51 - t115;
  t132 = t52 + t116;
  t148 = t52 - t116;
  t133 = t53 + t117;
  t149 = t53 - t117;
  t134 = t54 + t118;
  t150 = t54 - t118;
  t135 = t55 + t119;
  t151 = t55 - t119;
  t136 = t56 + t120;
  t152 = t56 - t120;
  t137 = t57 + t121;
  t153 = t57 - t121;
  t138 = t58 + t122;
  t154 = t58 - t122;
  t139 = t59 + t123;
  t155 = t59 - t123;
  t140 = t60 + t124;
  t156 = t60 - t124;
  t141 = t61 + t125;
  t157 = t61 - t125;
  t142 = t62 + t126;
  t158 = t62 - t126;
  t143 = t63 + t127;
  t159 = t63 - t127;
  t160 = x[32 * S] + x[33 * S];
  t161 = x[32 * S] - x[33 * S];
  t162 = x[34 * S] + x[35 * S];
  t163 = x[34 * S] - x[35 * S];
  t164 = t160 + t162;
  t166 = t160 - t162;
  t165 = t161 + t163;
  t167 = t161 - t163;
  t168 = x[36 * S] + x[37 * S];
  t169 = x[36 * S] - x[37 * S];
  t170 = x[38 * S] + x[39 * S];
  t171 = x[38 * S] - x[39 * S];
  t172 = t168 + t170;
  t174 = t168 - t170;
  t173 = t169 + t171;
  t175 = t169 - t171;
  t176 = t164 + t172;
  t180 = t164 - t172;
  t177 = t165 + t173;
  t181 = t165 - t173;
  t178 = t166 + t174;
  t182 = t166 - t174;
  t179 = t167 + t175;
  t183 = t167 - t175;
  t184 = x[40 * S] + x[41 * S];
  t185 = x[40 * S] - x[41 * S];
  t186 = x[42 * S] + x[43 * S];
  t187 = x[42 * S] - x[43 * S];
  t188 = t184 + t186;
  t190 = t184 - t186;
  t189 = t185 + t187;
  t191 = t185 - t187;
  t192 = x[44 * S] + x[45 * S];
  t193 = x[44 * S] - x[45 * S];
  t194 = x[46 * S] + x[47 * S];
  t195 = x[46 * S] - x[47 * S];
  t196 = t192 + t194;
  t198 = t192 - t194;
  t197 = t193 + t195;
  t199 = t193 - t195;
  t200 = t188 + t196;
  t204 = t188 - t196;
  t201 = t189 + t197;
  t205 = t189 - t197;
  t202 = t190 + t198;
  t206 = t190 - t198;
  t203 = t191 + t199;
  t207 = t191 - t199;
  t208 = t176 + t200;
  t216 = t176 - t200;
  t209 = t177 + t201;
  t217 = t177 - t201;
  t210 = t178 + t202;
  t218 = t178 - t202;
  t211 = t179 + t203;
  t219 = t179 - t203;
  t212 = t180 + t204;
  t220 = t180 - t204;
  t213 = t181 + t205;
  t221 = t181 - t205;
  t214 = t182 + t206;
  t222 = t182 - t206;
  t215 = t183 + t207;
  t223 = t183 - t207;
  t224 = x[48 * S] + x[49 * S];
  t225 = x[48 * S] - x[49 * S];
  t226 = x[50 * S] + x[51 * S];
  t227 = x[50 * S] - x[51 * S];
  t228 = t224 + t226;
  t230 = t224 - t226;
  t229 = t225 + t227;
  t231 = t225 - t227;
  t232 = x[52 * S] + x[53 * S];
  t233 = x[52 * S] - x[53 * S];
  t234 = x[54 * S] + x[55 * S];
  t235 = x[54 * S] - x[55 * S];
  t236 = t232 + t234;
  t238 = t232 - t234;
  t237 = t233 + t235;
  t239 = t233 - t235;
  t240 = t228 + t236;
  t244 = t228 - t236;
  t241 = t229 + t237;
  t245 = t229 - t237;
  t242 = t230 + t238;
  t246 = t230 - t238;
  t243 = t231 + t239;
  t247 = t231 - t239;
  t248 = x[56 * S] + x[57 * S];
  t249 = x[56 * S] - x[57 * S];
  t250 = x[58 * S] + x[59 * S];
  t251 = x[58 * S] - x[59 * S];
  t252 = t248 + t250;
  t254 = t248 - t250;
  t253 = t249 + t251;
  t255 = t249 - t251;
  t256 = x[60 * S] + x[61 * S];
  t257 = x[60 * S] - x[61 * S];
  t258 = x[62 * S] + x[63 * S];
  t259 = x[62 * S] - x[63 * S];
  t260 = t256 + t258;
  t262 = t256 - t258;
  t261 = t257 + t259;
  t263 = t257 - t259;
  t264 = t252 + t260;
  t268 = t252 - t260;
  t265 = t253 + t261;
  t269 = t253 - t261;
  t266 = t254 + t262;
  t270 = t254 - t262;
  t267 = t255 + t263;
  t271 = t255 - t263;
  t272 = t240 + t264;
  t280 = t240 - t264;
  t273 = t241 + t265;
  t281 = t241 - t265;
  t274 = t242 + t266;
  t282 = t242 - t266;
  t275 = t243 + t267;
  t283 = t243 - t267;
  t276 = t244 + t268;
  t284 = t244 - t268;
  t277 = t245 + t269;
  t285 = t245 - t269;
  t278 = t246 + t270;
  t286 = t246 - t270;
  t279 = t247 + t271;
  t287 = t247 - t271;
  t288 = t208 + t272;
  t304 = t208 - t272;
  t289 = t209 + t273;
  t305 = t209 - t273;
  t290 = t210 + t274;
  t306 = t210 - t274;
  t291 = t211 + t275;
  t307 = t211 - t275;
  t292 = t212 + t276;
  t308 = t212 - t276;
  t293 = t213 + t277;
  t309 = t213 - t277;
  t294 = t214 + t278;
  t310 = t214 - t278;
  t295 = t215 + t279;
  t311 = t215 - t279;
  t296 = t216 + t280;
  t312 = t216 - t280;
  t297 = t217 + t281;
  t313 = t217 - t281;
  t298 = t218 + t282;
  t314 = t218 - t282;
  t299 = t219 + t283;
  t315 = t219 - t283;
  t300 = t220 + t284;
  t316 = t220 - t284;
  t301 = t221 + t285;
  t317 = t221 - t285;
  t302 = t222 + t286;
  t318 = t222 - t286;
  t303 = t223 + t287;
  t319 = t223 - t287;
  t320 = t128 + t288;
  t352 = t128 - t288;
  t321 = t129 + t289;
  t353 = t129 - t289;
  t322 = t130 + t290;
  t354 = t130 - t290;
  t323 = t131 + t291;
  t355 = t131 - t291;
  t324 = t132 + t292;
  t356 = t132 - t292;
  t325 = t133 + t293;
  t357 = t133 - t293;
  t326 = t134 + t294;
  t358 = t134 - t294;
  t327 = t135 + t295;
  t359 = t135 - t295;
  t328 = t136 + t296;
  t360 = t136 - t296;
  t329 = t137 + t297;
  t361 = t137 - t297;
  t330 = t138 + t298;
  t362 = t138 - t298;
  t331 = t139 + t299;
  t363 = t139 - t299;
  t332 = t140 + t300;
  t364 = t140 - t300;
  t333 = t141 + t301;
  t365 = t141 - t301;
  t334 = t142 + t302;
  t366 = t142 - t302;
  t335 = t143 + t303;
  t367 = t143 - t303;
  t336 = t144 + t304;
  t368 = t144 - t304;
  t337 = t145 + t305;
  t369 = t145 - t305;
  t338 = t146 + t306;
  t370 = t146 - t306;
  t339 = t147 + t307;
  t371 = t147 - t307;
  t340 = t148 + t308;
  t372 = t148 - t308;
  t341 = t149 + t309;
  t373 = t149 - t309;
  t342 = t150 + t310;
  t374 = t150 - t310;
  t343 = t151 + t311;
  t375 = t151 - t311;
  t344 = t152 + t312;
  t376 = t152 - t312;
  t345 = t153 + t313;
  t377 = t153 - t313;
  t346 = t154 + t314;
  t378 = t154 - t314;
  t347 = t155 + t315;
  t379 = t155 - t315;
  t348 = t156 + t316;
  t380 = t156 - t316;
  t349 = t157 + t317;
  t381 = t157 - t317;
  t350 = t158 + t318;
  t382 = t158 - t318;
  t351 = t159 + t319;
  t383 = t159 - t319;
  t384 = x[64 * S] + x[65 * S];
  t385 = x[64 * S] - x[65 * S];
  t386 = x[66 * S] + x[67 * S];
  t387 = x[66 * S] - x[67 * S];
  t388 = t384 + t386;
  t390 = t384 - t386;
  t389 = t385 + t387;
  t391 = t385 - t387;
  t392 = x[68 * S] + x[69 * S];
  t393 = x[68 * S] - x[69 * S];
  t394 = x[70 * S] + x[71 * S];
  t395 = x[70 * S] - x[71 * S];
  t396 = t392 + t394;
  t398 = t392 - t394;
  t397 = t393 + t395;
  t399 = t393 - t395;
  t400 = t388 + t396;
  t404 = t388 - t396;
  t401 = t389 + t397;
  t405 = t389 - t397;
  t402 = t390 + t398;
  t406 = t390 - t398;
  t403 = t391 + t399;
  t407 = t391 - t399;
  t408 = x[72 * S] + x[73 * S];
  t409 = x[72 * S] - x[73 * S];
  t410 = x[74 * S] + x[75 * S];
  t411 = x[74 * S] - x[75 * S];
  t412 = t408 + t410;
  t414 = t408 - t410;
  t413 = t409 + t411;
  t415 = t409 - t411;
  t416 = x[76 * S] + x[77 * S];
  t417 = x[76 * S] - x[77 * S];
  t418 = x[78 * S] + x[79 * S];
  t419 = x[78 * S] - x[79 * S];
  t420 = t416 + t418;
  t422 = t416 - t418;
  t421 = t417 + t419;
  t423 = t417 - t419;
  t424 = t412 + t420;
  t428 = t412 - t420;
  t425 = t413 + t421;
  t429 = t413 - t421;
  t426 = t414 + t422;
  t430 = t414 - t422;
  t427 = t415 + t423;
  t431 = t415 - t423;
  t432 = t400 + t424;
  t440 = t400 - t424;
  t433 = t401 + t425;
  t441 = t401 - t425;
  t434 = t402 + t426;
  t442 = t402 - t426;
  t435 = t403 + t427;
  t443 = t403 - t427;
  t436 = t404 + t428;
  t444 = t404 - t428;
  t437 = t405 + t429;
  t445 = t405 - t429;
  t438 = t406 + t430;
  t446 = t406 - t430;
  t439 = t407 + t431;
  t447 = t407 - t431;
  t448 = x[80 * S] + x[81 * S];
  t449 = x[80 * S] - x[81 * S];
  t450 = x[82 * S] + x[83 * S];
  t451 = x[82 * S] - x[83 * S];
  t452 = t448 + t450;
  t454 = t448 - t450;
  t453 = t449 + t451;
  t455 = t449 - t451;
  t456 = x[84 * S] + x[85 * S];
  t457 = x[84 * S] - x[85 * S];
  t458 = x[86 * S] + x[87 * S];
  t459 = x[86 * S] - x[87 * S];
  t460 = t456 + t458;
  t462 = t456 - t458;
  t461 = t457 + t459;
  t463 = t457 - t459;
  t464 = t452 + t460;
  t468 = t452 - t460;
  t465 = t453 + t461;
  t469 = t453 - t461;
  t466 = t454 + t462;
  t470 = t454 - t462;
  t467 = t455 + t463;
  t471 = t455 - t463;
  t472 = x[88 * S] + x[89 * S];
  t473 = x[88 * S] - x[89 * S];
  t474 = x[90 * S] + x[91 * S];
  t475 = x[90 * S] - x[91 * S];
  t476 = t472 + t474;
  t478 = t472 - t474;
  t477 = t473 + t475;
  t479 = t473 - t475;
  t480 = x[92 * S] + x[93 * S];
  t481 = x[92 * S] - x[93 * S];
  t482 = x[94 * S] + x[95 * S];
  t483 = x[94 * S] - x[95 * S];
  t484 = t480 + t482;
  t486 = t480 - t482;
  t485 = t481 + t483;
  t487 = t481 - t483;
  t488 = t476 + t484;
  t492 = t476 - t484;
  t489 = t477 + t485;
  t493 = t477 - t485;
  t490 = t478 + t486;
  t494 = t478 - t486;
  t491 = t479 + t487;
  t495 = t479 - t487;
  t496 = t464 + t488;
  t504 = t464 - t488;
  t497 = t465 + t489;
  t505 = t465 - t489;
  t498 = t466 + t490;
  t506 = t466 - t490;
  t499 = t467 + t491;
  t507 = t467 - t491;
  t500 = t468 + t492;
  t508 = t468 - t492;
  t501 = t469 + t493;
  t509 = t469 - t493;
  t502 = t470 + t494;
  t510 = t470 - t494;
  t503 = t471 + t495;
  t511 = t471 - t495;
  t512 = t432 + t496;
  t528 = t432 - t496;
  t513 = t433 + t497;
  t529 = t433 - t497;
  t514 = t434 + t498;
  t530 = t434 - t498;
  t515 = t435 + t499;
  t531 = t435 - t499;
  t516 = t436 + t500;
  t532 = t436 - t500;
  t517 = t437 + t501;
  t533 = t437 - t501;
  t518 = t438 + t502;
  t534 = t438 - t502;
  t519 = t439 + t503;
  t535 = t439 - t503;
  t520 = t440 + t504;
  t536 = t440 - t504;
  t521 = t441 + t505;
  t537 = t441 - t505;
  t522 = t442 + t506;
  t538 = t442 - t506;
  t523 = t443 + t507;
  t539 = t443 - t507;
  t524 = t444 + t508;
  t540 = t444 - t508;
  t525 = t445 + t509;
  t541 = t445 - t509;
  t526 = t446 + t510;
  t542 = t446 - t510;
  t527 = t447 + t511;
  t543 = t447 - t511;
  t544 = x[96 * S] + x[97 * S];
  t545 = x[96 * S] - x[97 * S];
  t546 = x[98 * S] + x[99 * S];
  t547 = x[98 * S] - x[99 * S];
  t548 = t544 + t546;
  t550 = t544 - t546;
  t549 = t545 + t547;
  t551 = t545 - t547;
  t552 = x[100 * S] + x[101 * S];
  t553 = x[100 * S] - x[101 * S];
  t554 = x[102 * S] + x[103 * S];
  t555 = x[102 * S] - x[103 * S];
  t556 = t552 + t554;
  t558 = t552 - t554;
  t557 = t553 + t555;
  t559 = t553 - t555;
  t560 = t548 + t556;
  t564 = t548 - t556;
  t561 = t549 + t557;
  t565 = t549 - t557;
  t562 = t550 + t558;
  t566 = t550 - t558;
  t563 = t551 + t559;
  t567 = t551 - t559;
  t568 = x[104 * S] + x[105 * S];
  t569 = x[104 * S] - x[105 * S];
  t570 = x[106 * S] + x[107 * S];
  t571 = x[106 * S] - x[107 * S];
  t572 = t568 + t570;
  t574 = t568 - t570;
  t573 = t569 + t571;
  t575 = t569 - t571;
  t576 = x[108 * S] + x[109 * S];
  t577 = x[108 * S] - x[109 * S];
  t578 = x[110 * S] + x[111 * S];
  t579 = x[110 * S] - x[111 * S];
  t580 = t576 + t578;
  t582 = t576 - t578;
  t581 = t577 + t579;
  t583 = t577 - t579;
  t584 = t572 + t580;
  t588 = t572 - t580;
  t585 = t573 + t581;
  t589 = t573 - t581;
  t586 = t574 + t582;
  t590 = t574 - t582;
  t587 = t575 + t583;
  t591 = t575 - t583;
  t592 = t560 + t584;
  t600 = t560 - t584;
  t593 = t561 + t585;
  t601 = t561 - t585;
  t594 = t562 + t586;
  t602 = t562 - t586;
  t595 = t563 + t587;
  t603 = t563 - t587;
  t596 = t564 + t588;
  t604 = t564 - t588;
  t597 = t565 + t589;
  t605 = t565 - t589;
  t598 = t566 + t590;
  t606 = t566 - t590;
  t599 = t567 + t591;
  t607 = t567 - t591;
  t608 = x[112 * S] + x[113 * S];
  t609 = x[112 * S] - x[113 * S];
  t610 = x[114 * S] + x[115 * S];
  t611 = x[114 * S] - x[115 * S];
  t612 = t608 + t610;
  t614 = t608 - t610;
  t613 = t609 + t611;
  t615 = t609 - t611;
  t616 = x[116 * S] + x[117 * S];
  t617 = x[116 * S] - x[117 * S];
  t618 = x[118 * S] + x[119 * S];
  t619 = x[118 * S] - x[119 * S];
  t620 = t616 + t618;
  t622 = t616 - t618;
  t621 = t617 + t619;
  t623 = t617 - t619;
  t624 = t612 + t620;
  t628 = t612 - t620;
  t625 = t613 + t621;
  t629 = t613 - t621;
  t626 = t614 + t622;
  t630 = t614 - t622;
  t627 = t615 + t623;
  t631 = t615 - t623;
  t632 = x[120 * S] + x[121 * S];
  t633 = x[120 * S] - x[121 * S];
  t634 = x[122 * S] + x[123 * S];
  t635 = x[122 * S] - x[123 * S];
  t636 = t632 + t634;
  t638 = t632 - t634;
  t637 = t633 + t635;
  t639 = t633 - t635;
  t640 = x[124 * S] + x[125 * S];
  t641 = x[124 * S] - x[125 * S];
  t642 = x[126 * S] + x[127 * S];
  t643 = x[126 * S] - x[127 * S];
  t644 = t640 + t642;
  t646 = t640 - t642;
  t645 = t641 + t643;
  t647 = t641 - t643;
  t648 = t636 + t644;
  t652 = t636 - t644;
  t649 = t637 + t645;
  t653 = t637 - t645;
  t650 = t638 + t646;
  t654 = t638 - t646;
  t651 = t639 + t647;
  t655 = t639 - t647;
  t656 = t624 + t648;
  t664 = t624 - t648;
  t657 = t625 + t649;
  t665 = t625 - t649;
  t658 = t626 + t650;
  t666 = t626 - t650;
  t659 = t627 + t651;
  t667 = t627 - t651;
  t660 = t628 + t652;
  t668 = t628 - t652;
  t661 = t629 + t653;
  t669 = t629 - t653;
  t662 = t630 + t654;
  t670 = t630 - t654;
  t663 = t631 + t655;
  t671 = t631 - t655;
  t672 = t592 + t656;
  t688 = t592 - t656;
  t673 = t593 + t657;
  t689 = t593 - t657;
  t674 = t594 + t658;
  t690 = t594 - t658;
  t675 = t595 + t659;
  t691 = t595 - t659;
  t676 = t596 + t660;
  t692 = t596 - t660;
  t677 = t597 + t661;
  t693 = t597 - t661;
  t678 = t598 + t662;
  t694 = t598 - t662;
  t679 = t599 + t663;
  t695 = t599 - t663;
  t680 = t600 + t664;
  t696 = t600 - t664;
  t681 = t601 + t665;
  t697 = t601 - t665;
  t682 = t602 + t666;
  t698 = t602 - t666;
  t683 = t603 + t667;
  t699 = t603 - t667;
  t684 = t604 + t668;
  t700 = t604 - t668;
  t685 = t605 + t669;
  t701 = t605 - t669;
  t686 = t606 + t670;
  t702 = t606 - t670;
  t687 = t607 + t671;
  t703 = t607 - t671;
  t704 = t512 + t672;
  t736 = t512 - t672;
  t705 = t513 + t673;
  t737 = t513 - t673;
  t706 = t514 + t674;
  t738 = t514 - t674;
  t707 = t515 + t675;
  t739 = t515 - t675;
  t708 = t516 + t676;
  t740 = t516 - t676;
  t709 = t517 + t677;
  t741 = t517 - t677;
  t710 = t518 + t678;
  t742 = t518 - t678;
  t711 = t519 + t679;
  t743 = t519 - t679;
  t712 = t520 + t680;
  t744 = t520 - t680;
  t713 = t521 + t681;
  t745 = t521 - t681;
  t714 = t522 + t682;
  t746 = t522 - t682;
  t715 = t523 + t683;
  t747 = t523 - t683;
  t716 = t524 + t684;
  t748 = t524 - t684;
  t717 = t525 + t685;
  t749 = t525 - t685;
  t718 = t526 + t686;
  t750 = t526 - t686;
  t719 = t527 + t687;
  t751 = t527 - t687;
  t720 = t528 + t688;
  t752 = t528 - t688;
  t721 = t529 + t689;
  t753 = t529 - t689;
  t722 = t530 + t690;
  t754 = t530 - t690;
  t723 = t531 + t691;
  t755 = t531 - t691;
  t724 = t532 + t692;
  t756 = t532 - t692;
  t725 = t533 + t693;
  t757 = t533 - t693;
  t726 = t534 + t694;
  t758 = t534 - t694;
  t727 = t535 + t695;
  t759 = t535 - t695;
  t728 = t536 + t696;
  t760 = t536 - t696;
  t729 = t537 + t697;
  t761 = t537 - t697;
  t730 = t538 + t698;
  t762 = t538 - t698;
  t731 = t539 + t699;
  t763 = t539 - t699;
  t732 = t540 + t700;
  t764 = t540 - t700;
  t733 = t541 + t701;
  t765 = t541 - t701;
  t734 = t542 + t702;
  t766 = t542 - t702;
  t735 = t543 + t703;
  t767 = t543 - t703;
  x[0] = t320 + t704;
  x[64 * S] = t320 - t704;
  x[S] = t321 + t705;
  x[65 * S] = t321 - t705;
  x[2 * S] = t322 + t706;
  x[66 * S] = t322 - t706;
  x[3 * S] = t323 + t707;
  x[67 * S] = t323 - t707;
  x[4 * S] = t324 + t708;
  x[68 * S] = t324 - t708;
  x[5 * S] = t325 + t709;
  x[69 * S] = t325 - t709;
  x[6 * S] = t326 + t710;
  x[70 * S] = t326 - t710;
  x[7 * S] = t327 + t711;
  x[71 * S] = t327 - t711;
  x[8 * S] = t328 + t712;
  x[72 * S] = t328 - t712;
  x[9 * S] = t329 + t713;
  x[73 * S] = t329 - t713;
  x[10 * S] = t330 + t714;
  x[74 * S] = t330 - t714;
  x[11 * S] = t331 + t715;
  x[75 * S] = t331 - t715;
  x[12 * S] = t332 + t716;
  x[76 * S] = t332 - t716;
  x[13 * S] = t333 + t717;
  x[77 * S] = t333 - t717;
  x[14 * S] = t334 + t718;
  x[78 * S] = t334 - t718;
  x[15 * S] = t335 + t719;
  x[79 * S] = t335 - t719;
  x[16 * S] = t336 + t720;
  x[80 * S] = t336 - t720;
  x[17 * S] = t337 + t721;
  x[81 * S] = t337 - t721;
  x[18 * S] = t338 + t722;
  x[82 * S] = t338 - t722;
  x[19 * S] = t339 + t723;
  x[83 * S] = t339 - t723;
  x[20 * S] = t340 + t724;
  x[84 * S] = t340 - t724;
  x[21 * S] = t341 + t725;
  x[85 * S] = t341 - t725;
  x[22 * S] = t342 + t726;
  x[86 * S] = t342 - t726;
  x[23 * S] = t343 + t727;
  x[87 * S] = t343 - t727;
  x[24 * S] = t344 + t728;
  x[88 * S] = t344 - t728;
  x[25 * S] = t345 + t729;
  x[89 * S] = t345 - t729;
  x[26 * S] = t346 + t730;
  x[90 * S] = t346 - t730;
  x[27 * S] = t347 + t731;
  x[91 * S] = t347 - t731;
  x[28 * S] = t348 + t732;
  x[92 * S] = t348 - t732;
  x[29 * S] = t349 + t733;
  x[93 * S] = t349 - t733;
  x[30 * S] = t350 + t734;
  x[94 * S] = t350 - t734;
  x[31 * S] = t351 + t735;
  x[95 * S] = t351 - t735;
  x[32 * S] = t352 + t736;
  x[96 * S] = t352 - t736;
  x[33 * S] = t353 + t737;
  x[97 * S] = t353 - t737;
  x[34 * S] = t354 + t738;
  x[98 * S] = t354 - t738;
  x[35 * S] = t355 + t739;
  x[99 * S] = t355 - t739;
  x[36 * S] = t356 + t740;
  x[100 * S] = t356 - t740;
  x[37 * S] = t357 + t741;
  x[101 * S] = t357 - t741;
  x[38 * S] = t358 + t742;
  x[102 * S] = t358 - t742;
  x[39 * S] = t359 + t743;
  x[103 * S] = t359 - t743;
  x[40 * S] = t360 + t744;
  x[104 * S] = t360 - t744;
  x[41 * S] = t361 + t745;
  x[105 * S] = t361 - t745;
  x[42 * S] = t362 + t746;
  x[106 * S] = t362 - t746;
  x[43 * S] = t363 + t747;
  x[107 * S] = t363 - t747;
  x[44 * S] = t364 + t748;
  x[108 * S] = t364 - t748;
  x[45 * S] = t365 + t749;
  x[109 * S] = t365 - t749;
  x[46 * S] = t366 + t750;
  x[110 * S] = t366 - t750;
  x[47 * S] = t367 + t751;
  x[111 * S] = t367 - t751;
  x[48 * S] = t368 + t752;
  x[112 * S] = t368 - t752;
  x[49 * S] = t369 + t753;
  x[113 * S] = t369 - t753;
  x[50 * S] = t370 + t754;
  x[114 * S] = t370 - t754;
  x[51 * S] = t371 + t755;
  x[115 * S] = t371 - t755;
  x[52 * S] = t372 + t756;
  x[116 * S] = t372 - t756;
  x[53 * S] = t373 + t757;
  x[117 * S] = t373 - t757;
  x[54 * S] = t374 + t758;
  x[118 * S] = t374 - t758;
  x[55 * S] = t375 + t759;
  x[119 * S] = t375 - t759;
  x[56 * S] = t376 + t760;
  x[120 * S] = t376 - t760;
  x[57 * S] = t377 + t761;
  x[121 * S] = t377 - t761;
  x[58 * S] = t378 + t762;
  x[122 * S] = t378 - t762;
  x[59 * S] = t379 + t763;
  x[123 * S] = t379 - t763;
  x[60 * S] = t380 + t764;
  x[124 * S] = t380 - t764;
  x[61 * S] = t381 + t765;
  x[125 * S] = t381 - t765;
  x[62 * S] = t382 + t766;
  x[126 * S] = t382 - t766;
  x[63 * S] = t383 + t767;
  x[127 * S] = t383 - t767;
}