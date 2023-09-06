    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 48;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (kjmvupbl2i)
        ;%
            section.nData     = 130;
            section.data(130)  = dumData; %prealloc

                    ;% kjmvupbl2i.SignalHold_IC
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

                    ;% kjmvupbl2i.SignalHold_IC_bl0xhwyuht
                    section.data(2).logicalSrcIdx = 46;
                    section.data(2).dtTransOffset = 1;

                    ;% kjmvupbl2i.CompareToConstant_const
                    section.data(3).logicalSrcIdx = 47;
                    section.data(3).dtTransOffset = 2;

                    ;% kjmvupbl2i.CompareToConstant1_const
                    section.data(4).logicalSrcIdx = 48;
                    section.data(4).dtTransOffset = 3;

                    ;% kjmvupbl2i.CompareToConstant2_const
                    section.data(5).logicalSrcIdx = 49;
                    section.data(5).dtTransOffset = 4;

                    ;% kjmvupbl2i.CompareToConstant3_const
                    section.data(6).logicalSrcIdx = 50;
                    section.data(6).dtTransOffset = 5;

                    ;% kjmvupbl2i.CompareToConstant4_const
                    section.data(7).logicalSrcIdx = 51;
                    section.data(7).dtTransOffset = 6;

                    ;% kjmvupbl2i.u1_UpperSat
                    section.data(8).logicalSrcIdx = 52;
                    section.data(8).dtTransOffset = 7;

                    ;% kjmvupbl2i.u1_LowerSat
                    section.data(9).logicalSrcIdx = 53;
                    section.data(9).dtTransOffset = 8;

                    ;% kjmvupbl2i.u0_UpperSat
                    section.data(10).logicalSrcIdx = 54;
                    section.data(10).dtTransOffset = 9;

                    ;% kjmvupbl2i.u0_LowerSat
                    section.data(11).logicalSrcIdx = 55;
                    section.data(11).dtTransOffset = 10;

                    ;% kjmvupbl2i.Constant_Value
                    section.data(12).logicalSrcIdx = 56;
                    section.data(12).dtTransOffset = 11;

                    ;% kjmvupbl2i.Constant_Value_agm4xpnhd5
                    section.data(13).logicalSrcIdx = 57;
                    section.data(13).dtTransOffset = 12;

                    ;% kjmvupbl2i.Integrator1_IC
                    section.data(14).logicalSrcIdx = 58;
                    section.data(14).dtTransOffset = 13;

                    ;% kjmvupbl2i.Saturation_UpperSat
                    section.data(15).logicalSrcIdx = 59;
                    section.data(15).dtTransOffset = 14;

                    ;% kjmvupbl2i.Saturation_LowerSat
                    section.data(16).logicalSrcIdx = 60;
                    section.data(16).dtTransOffset = 15;

                    ;% kjmvupbl2i.EngSpd_Value
                    section.data(17).logicalSrcIdx = 61;
                    section.data(17).dtTransOffset = 16;

                    ;% kjmvupbl2i.Integrator1_IC_aqlk4zxkuo
                    section.data(18).logicalSrcIdx = 62;
                    section.data(18).dtTransOffset = 17;

                    ;% kjmvupbl2i.Constant3_Value
                    section.data(19).logicalSrcIdx = 63;
                    section.data(19).dtTransOffset = 18;

                    ;% kjmvupbl2i.TransferFcn5_A
                    section.data(20).logicalSrcIdx = 64;
                    section.data(20).dtTransOffset = 19;

                    ;% kjmvupbl2i.TransferFcn5_C
                    section.data(21).logicalSrcIdx = 65;
                    section.data(21).dtTransOffset = 20;

                    ;% kjmvupbl2i.Saturation_UpperSat_l3n5201rqk
                    section.data(22).logicalSrcIdx = 66;
                    section.data(22).dtTransOffset = 21;

                    ;% kjmvupbl2i.Saturation_LowerSat_daadgw5azp
                    section.data(23).logicalSrcIdx = 67;
                    section.data(23).dtTransOffset = 22;

                    ;% kjmvupbl2i.FirstOrderHold_IniOut
                    section.data(24).logicalSrcIdx = 68;
                    section.data(24).dtTransOffset = 23;

                    ;% kjmvupbl2i.FirstOrderHold_ErrTol
                    section.data(25).logicalSrcIdx = 69;
                    section.data(25).dtTransOffset = 24;

                    ;% kjmvupbl2i.Gain1_Gain
                    section.data(26).logicalSrcIdx = 70;
                    section.data(26).dtTransOffset = 25;

                    ;% kjmvupbl2i.Switch_Threshold
                    section.data(27).logicalSrcIdx = 71;
                    section.data(27).dtTransOffset = 26;

                    ;% kjmvupbl2i.uDLookupTable_tableData
                    section.data(28).logicalSrcIdx = 72;
                    section.data(28).dtTransOffset = 27;

                    ;% kjmvupbl2i.uDLookupTable_bp01Data
                    section.data(29).logicalSrcIdx = 73;
                    section.data(29).dtTransOffset = 1397;

                    ;% kjmvupbl2i.Saturation_UpperSat_ncjkk1jucd
                    section.data(30).logicalSrcIdx = 74;
                    section.data(30).dtTransOffset = 2767;

                    ;% kjmvupbl2i.Saturation_LowerSat_g5xnm5rrtb
                    section.data(31).logicalSrcIdx = 75;
                    section.data(31).dtTransOffset = 2768;

                    ;% kjmvupbl2i.DeadZone_Start
                    section.data(32).logicalSrcIdx = 76;
                    section.data(32).dtTransOffset = 2769;

                    ;% kjmvupbl2i.DeadZone_End
                    section.data(33).logicalSrcIdx = 77;
                    section.data(33).dtTransOffset = 2770;

                    ;% kjmvupbl2i.DeadZone2_Start
                    section.data(34).logicalSrcIdx = 78;
                    section.data(34).dtTransOffset = 2771;

                    ;% kjmvupbl2i.DeadZone2_End
                    section.data(35).logicalSrcIdx = 79;
                    section.data(35).dtTransOffset = 2772;

                    ;% kjmvupbl2i.EngTrq_Value
                    section.data(36).logicalSrcIdx = 80;
                    section.data(36).dtTransOffset = 2773;

                    ;% kjmvupbl2i.Integrator_IC
                    section.data(37).logicalSrcIdx = 81;
                    section.data(37).dtTransOffset = 2774;

                    ;% kjmvupbl2i.mtomile_Gain
                    section.data(38).logicalSrcIdx = 82;
                    section.data(38).dtTransOffset = 2775;

                    ;% kjmvupbl2i.Integrator1_IC_b5h1v25iea
                    section.data(39).logicalSrcIdx = 83;
                    section.data(39).dtTransOffset = 2776;

                    ;% kjmvupbl2i.m3toUSGal_Gain
                    section.data(40).logicalSrcIdx = 84;
                    section.data(40).dtTransOffset = 2777;

                    ;% kjmvupbl2i.Saturation1_UpperSat
                    section.data(41).logicalSrcIdx = 85;
                    section.data(41).dtTransOffset = 2778;

                    ;% kjmvupbl2i.Saturation1_LowerSat
                    section.data(42).logicalSrcIdx = 86;
                    section.data(42).dtTransOffset = 2779;

                    ;% kjmvupbl2i.Integrator_IC_m2ei5srufe
                    section.data(43).logicalSrcIdx = 87;
                    section.data(43).dtTransOffset = 2780;

                    ;% kjmvupbl2i.mtomi_Gain
                    section.data(44).logicalSrcIdx = 88;
                    section.data(44).dtTransOffset = 2781;

                    ;% kjmvupbl2i.Saturation_UpperSat_petchupvyj
                    section.data(45).logicalSrcIdx = 89;
                    section.data(45).dtTransOffset = 2782;

                    ;% kjmvupbl2i.Saturation_LowerSat_deqaxwlb4p
                    section.data(46).logicalSrcIdx = 90;
                    section.data(46).dtTransOffset = 2783;

                    ;% kjmvupbl2i.mtokm_Gain
                    section.data(47).logicalSrcIdx = 91;
                    section.data(47).dtTransOffset = 2784;

                    ;% kjmvupbl2i.Saturation1_UpperSat_jybwri54h2
                    section.data(48).logicalSrcIdx = 92;
                    section.data(48).dtTransOffset = 2785;

                    ;% kjmvupbl2i.Saturation1_LowerSat_indvuhds5q
                    section.data(49).logicalSrcIdx = 93;
                    section.data(49).dtTransOffset = 2786;

                    ;% kjmvupbl2i.Integrator1_IC_exhcff4x2k
                    section.data(50).logicalSrcIdx = 94;
                    section.data(50).dtTransOffset = 2787;

                    ;% kjmvupbl2i.Integrator2_IC
                    section.data(51).logicalSrcIdx = 95;
                    section.data(51).dtTransOffset = 2788;

                    ;% kjmvupbl2i.Integrator3_IC
                    section.data(52).logicalSrcIdx = 96;
                    section.data(52).dtTransOffset = 2789;

                    ;% kjmvupbl2i.Integrator4_IC
                    section.data(53).logicalSrcIdx = 97;
                    section.data(53).dtTransOffset = 2790;

                    ;% kjmvupbl2i.FuelVolFlw_Value
                    section.data(54).logicalSrcIdx = 98;
                    section.data(54).dtTransOffset = 2791;

                    ;% kjmvupbl2i.ClsdLpFuelMult_Value
                    section.data(55).logicalSrcIdx = 99;
                    section.data(55).dtTransOffset = 2792;

                    ;% kjmvupbl2i.m3pergal_Gain
                    section.data(56).logicalSrcIdx = 100;
                    section.data(56).dtTransOffset = 2793;

                    ;% kjmvupbl2i.mto100Km_Gain
                    section.data(57).logicalSrcIdx = 101;
                    section.data(57).dtTransOffset = 2794;

                    ;% kjmvupbl2i.Saturation_UpperSat_ffmhckns0u
                    section.data(58).logicalSrcIdx = 102;
                    section.data(58).dtTransOffset = 2795;

                    ;% kjmvupbl2i.Saturation_LowerSat_git52jcjbr
                    section.data(59).logicalSrcIdx = 103;
                    section.data(59).dtTransOffset = 2796;

                    ;% kjmvupbl2i.Constant_Value_hmxpxo4t1j
                    section.data(60).logicalSrcIdx = 104;
                    section.data(60).dtTransOffset = 2797;

                    ;% kjmvupbl2i.Constant_Value_io2mkec4u1
                    section.data(61).logicalSrcIdx = 105;
                    section.data(61).dtTransOffset = 2798;

                    ;% kjmvupbl2i.Constant1_Value
                    section.data(62).logicalSrcIdx = 106;
                    section.data(62).dtTransOffset = 2799;

                    ;% kjmvupbl2i.Constant2_Value
                    section.data(63).logicalSrcIdx = 107;
                    section.data(63).dtTransOffset = 2800;

                    ;% kjmvupbl2i.Constant_Value_cjhlneuw3m
                    section.data(64).logicalSrcIdx = 108;
                    section.data(64).dtTransOffset = 2801;

                    ;% kjmvupbl2i.Constant_Value_eh1gybqgws
                    section.data(65).logicalSrcIdx = 109;
                    section.data(65).dtTransOffset = 2802;

                    ;% kjmvupbl2i.Integrator2_IC_fjcqqry33i
                    section.data(66).logicalSrcIdx = 110;
                    section.data(66).dtTransOffset = 2803;

                    ;% kjmvupbl2i.UnitDelay_InitialCondition
                    section.data(67).logicalSrcIdx = 111;
                    section.data(67).dtTransOffset = 2804;

                    ;% kjmvupbl2i.HitCrossing_Offset
                    section.data(68).logicalSrcIdx = 112;
                    section.data(68).dtTransOffset = 2806;

                    ;% kjmvupbl2i.FirstOrderHold1_IniOut
                    section.data(69).logicalSrcIdx = 113;
                    section.data(69).dtTransOffset = 2807;

                    ;% kjmvupbl2i.FirstOrderHold1_ErrTol
                    section.data(70).logicalSrcIdx = 114;
                    section.data(70).dtTransOffset = 2808;

                    ;% kjmvupbl2i.DeadZone_Start_pdp2e4smtt
                    section.data(71).logicalSrcIdx = 115;
                    section.data(71).dtTransOffset = 2809;

                    ;% kjmvupbl2i.DeadZone_End_h4yw2iuj1m
                    section.data(72).logicalSrcIdx = 116;
                    section.data(72).dtTransOffset = 2810;

                    ;% kjmvupbl2i.Constant_Value_b34nxk3dgo
                    section.data(73).logicalSrcIdx = 117;
                    section.data(73).dtTransOffset = 2811;

                    ;% kjmvupbl2i.Constant1_Value_pax3psgy31
                    section.data(74).logicalSrcIdx = 118;
                    section.data(74).dtTransOffset = 2812;

                    ;% kjmvupbl2i.Constant2_Value_by3qj3o4r5
                    section.data(75).logicalSrcIdx = 119;
                    section.data(75).dtTransOffset = 2813;

                    ;% kjmvupbl2i.Constant3_Value_le3cdgojsj
                    section.data(76).logicalSrcIdx = 120;
                    section.data(76).dtTransOffset = 2814;

                    ;% kjmvupbl2i.Constant_Value_dwrtimrkpk
                    section.data(77).logicalSrcIdx = 121;
                    section.data(77).dtTransOffset = 2815;

                    ;% kjmvupbl2i.Constant1_Value_fmqelelhtu
                    section.data(78).logicalSrcIdx = 122;
                    section.data(78).dtTransOffset = 2816;

                    ;% kjmvupbl2i.Constant2_Value_co5abyzjen
                    section.data(79).logicalSrcIdx = 123;
                    section.data(79).dtTransOffset = 2817;

                    ;% kjmvupbl2i.Constant3_Value_naifcpvkcj
                    section.data(80).logicalSrcIdx = 124;
                    section.data(80).dtTransOffset = 2818;

                    ;% kjmvupbl2i.Constant_Value_dcic5o3pg3
                    section.data(81).logicalSrcIdx = 125;
                    section.data(81).dtTransOffset = 2819;

                    ;% kjmvupbl2i.Constant1_Value_dnfmb11brh
                    section.data(82).logicalSrcIdx = 126;
                    section.data(82).dtTransOffset = 2820;

                    ;% kjmvupbl2i.Constant2_Value_hik2ab434v
                    section.data(83).logicalSrcIdx = 127;
                    section.data(83).dtTransOffset = 2821;

                    ;% kjmvupbl2i.Constant3_Value_jo3m2g12mp
                    section.data(84).logicalSrcIdx = 128;
                    section.data(84).dtTransOffset = 2822;

                    ;% kjmvupbl2i.Constant_Value_mddw5eobxq
                    section.data(85).logicalSrcIdx = 129;
                    section.data(85).dtTransOffset = 2823;

                    ;% kjmvupbl2i.Constant1_Value_cfyr5n1bli
                    section.data(86).logicalSrcIdx = 130;
                    section.data(86).dtTransOffset = 2824;

                    ;% kjmvupbl2i.Constant2_Value_mfce3nzwnp
                    section.data(87).logicalSrcIdx = 131;
                    section.data(87).dtTransOffset = 2825;

                    ;% kjmvupbl2i.Constant3_Value_jf3fbvya1l
                    section.data(88).logicalSrcIdx = 132;
                    section.data(88).dtTransOffset = 2826;

                    ;% kjmvupbl2i.Constant_Value_onlw3pqasr
                    section.data(89).logicalSrcIdx = 133;
                    section.data(89).dtTransOffset = 2827;

                    ;% kjmvupbl2i.Constant1_Value_mromuqkuuw
                    section.data(90).logicalSrcIdx = 134;
                    section.data(90).dtTransOffset = 2828;

                    ;% kjmvupbl2i.Constant2_Value_ozpwuu3brx
                    section.data(91).logicalSrcIdx = 135;
                    section.data(91).dtTransOffset = 2829;

                    ;% kjmvupbl2i.Constant3_Value_obgnptdz2h
                    section.data(92).logicalSrcIdx = 136;
                    section.data(92).dtTransOffset = 2830;

                    ;% kjmvupbl2i.Constant_Value_ibzc4hj1ld
                    section.data(93).logicalSrcIdx = 137;
                    section.data(93).dtTransOffset = 2831;

                    ;% kjmvupbl2i.Constant1_Value_gtiaijeqmv
                    section.data(94).logicalSrcIdx = 138;
                    section.data(94).dtTransOffset = 2832;

                    ;% kjmvupbl2i.Constant2_Value_epzlk2keku
                    section.data(95).logicalSrcIdx = 139;
                    section.data(95).dtTransOffset = 2833;

                    ;% kjmvupbl2i.Constant3_Value_kcpbrp4amn
                    section.data(96).logicalSrcIdx = 140;
                    section.data(96).dtTransOffset = 2834;

                    ;% kjmvupbl2i.Constant_Value_ld5ybk2byx
                    section.data(97).logicalSrcIdx = 141;
                    section.data(97).dtTransOffset = 2835;

                    ;% kjmvupbl2i.Constant1_Value_iiav0d51jb
                    section.data(98).logicalSrcIdx = 142;
                    section.data(98).dtTransOffset = 2836;

                    ;% kjmvupbl2i.Constant2_Value_fblzzrbbio
                    section.data(99).logicalSrcIdx = 143;
                    section.data(99).dtTransOffset = 2837;

                    ;% kjmvupbl2i.Constant3_Value_nfapyqt2rs
                    section.data(100).logicalSrcIdx = 144;
                    section.data(100).dtTransOffset = 2838;

                    ;% kjmvupbl2i.Constant_Value_os1jn220hr
                    section.data(101).logicalSrcIdx = 145;
                    section.data(101).dtTransOffset = 2839;

                    ;% kjmvupbl2i.Constant1_Value_h1skcdg22w
                    section.data(102).logicalSrcIdx = 146;
                    section.data(102).dtTransOffset = 2840;

                    ;% kjmvupbl2i.Constant2_Value_m4pyuelgtu
                    section.data(103).logicalSrcIdx = 147;
                    section.data(103).dtTransOffset = 2841;

                    ;% kjmvupbl2i.Constant3_Value_f11k3loabn
                    section.data(104).logicalSrcIdx = 148;
                    section.data(104).dtTransOffset = 2842;

                    ;% kjmvupbl2i.TPCO_Value
                    section.data(105).logicalSrcIdx = 149;
                    section.data(105).dtTransOffset = 2843;

                    ;% kjmvupbl2i.TPCO2_Value
                    section.data(106).logicalSrcIdx = 150;
                    section.data(106).dtTransOffset = 2844;

                    ;% kjmvupbl2i.TPHC_Value
                    section.data(107).logicalSrcIdx = 151;
                    section.data(107).dtTransOffset = 2845;

                    ;% kjmvupbl2i.TPNOx_Value
                    section.data(108).logicalSrcIdx = 152;
                    section.data(108).dtTransOffset = 2846;

                    ;% kjmvupbl2i.Constant3_Value_hsmcqc2qzw
                    section.data(109).logicalSrcIdx = 153;
                    section.data(109).dtTransOffset = 2847;

                    ;% kjmvupbl2i.DeadZone3_Start
                    section.data(110).logicalSrcIdx = 154;
                    section.data(110).dtTransOffset = 2848;

                    ;% kjmvupbl2i.DeadZone3_End
                    section.data(111).logicalSrcIdx = 155;
                    section.data(111).dtTransOffset = 2849;

                    ;% kjmvupbl2i.ax_Value
                    section.data(112).logicalSrcIdx = 156;
                    section.data(112).dtTransOffset = 2850;

                    ;% kjmvupbl2i.ay_Value
                    section.data(113).logicalSrcIdx = 157;
                    section.data(113).dtTransOffset = 2851;

                    ;% kjmvupbl2i.az_Value
                    section.data(114).logicalSrcIdx = 158;
                    section.data(114).dtTransOffset = 2852;

                    ;% kjmvupbl2i.USEPAkwhUSgalequivalent_Value
                    section.data(115).logicalSrcIdx = 159;
                    section.data(115).dtTransOffset = 2853;

                    ;% kjmvupbl2i.sperh_Value
                    section.data(116).logicalSrcIdx = 160;
                    section.data(116).dtTransOffset = 2854;

                    ;% kjmvupbl2i.wperkw_Value
                    section.data(117).logicalSrcIdx = 161;
                    section.data(117).dtTransOffset = 2855;

                    ;% kjmvupbl2i.r_Value
                    section.data(118).logicalSrcIdx = 162;
                    section.data(118).dtTransOffset = 2856;

                    ;% kjmvupbl2i.Constant1_Value_m0radogykp
                    section.data(119).logicalSrcIdx = 163;
                    section.data(119).dtTransOffset = 2857;

                    ;% kjmvupbl2i.Gain_Gain
                    section.data(120).logicalSrcIdx = 164;
                    section.data(120).dtTransOffset = 2861;

                    ;% kjmvupbl2i.Gain1_Gain_b2x0xrdboa
                    section.data(121).logicalSrcIdx = 165;
                    section.data(121).dtTransOffset = 2862;

                    ;% kjmvupbl2i.Constant_Value_i0lrc5dd0p
                    section.data(122).logicalSrcIdx = 166;
                    section.data(122).dtTransOffset = 2863;

                    ;% kjmvupbl2i.Constant_Value_lmvdjicp50
                    section.data(123).logicalSrcIdx = 167;
                    section.data(123).dtTransOffset = 2864;

                    ;% kjmvupbl2i.Constant_Value_gn4owpvnhh
                    section.data(124).logicalSrcIdx = 168;
                    section.data(124).dtTransOffset = 2865;

                    ;% kjmvupbl2i.Constant1_Value_krev4j2l44
                    section.data(125).logicalSrcIdx = 169;
                    section.data(125).dtTransOffset = 2866;

                    ;% kjmvupbl2i.Constant2_Value_cv5k10omis
                    section.data(126).logicalSrcIdx = 170;
                    section.data(126).dtTransOffset = 2867;

                    ;% kjmvupbl2i.Constant8_Value
                    section.data(127).logicalSrcIdx = 171;
                    section.data(127).dtTransOffset = 2868;

                    ;% kjmvupbl2i.repeat_Value
                    section.data(128).logicalSrcIdx = 172;
                    section.data(128).dtTransOffset = 2869;

                    ;% kjmvupbl2i.tFinal_Value
                    section.data(129).logicalSrcIdx = 173;
                    section.data(129).dtTransOffset = 2870;

                    ;% kjmvupbl2i.RTP_52118A8B_vc_Value
                    section.data(130).logicalSrcIdx = 174;
                    section.data(130).dtTransOffset = 2871;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% kjmvupbl2i.Constant9_Value
                    section.data(1).logicalSrcIdx = 175;
                    section.data(1).dtTransOffset = 0;

                    ;% kjmvupbl2i.Constant6_Value
                    section.data(2).logicalSrcIdx = 176;
                    section.data(2).dtTransOffset = 1;

                    ;% kjmvupbl2i.Constant7_Value
                    section.data(3).logicalSrcIdx = 177;
                    section.data(3).dtTransOffset = 2;

                    ;% kjmvupbl2i.Constant12_Value
                    section.data(4).logicalSrcIdx = 178;
                    section.data(4).dtTransOffset = 3;

                    ;% kjmvupbl2i.Constant11_Value
                    section.data(5).logicalSrcIdx = 179;
                    section.data(5).dtTransOffset = 4;

                    ;% kjmvupbl2i.Constant10_Value
                    section.data(6).logicalSrcIdx = 180;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% kjmvupbl2i.GradeSource_CurrentSetting
                    section.data(1).logicalSrcIdx = 181;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%

                        ;% _CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 0;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(4) = section;
                        clear section


                        ;% _CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 1;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(5) = section;
                        clear section


                        ;% _CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 2;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(6) = section;
                        clear section


                        ;% _CtrlVcuEvSocBpt2f2EvVCU_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 3;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(7) = section;
                        clear section


                        ;% _DriverAeroRes2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 4;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(8) = section;
                        clear section


                        ;% _DriverDrivelineRes2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 5;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(9) = section;
                        clear section


                        ;% _DriverInitialGear2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 6;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(10) = section;
                        clear section


                        ;% _DriverPreviewDist2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 7;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(11) = section;
                        clear section


                        ;% _DriverRollRes2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 8;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(12) = section;
                        clear section


                        ;% _DriverShiftTime2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 9;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(13) = section;
                        clear section


                        ;% _DriverTimeConst2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 10;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(14) = section;
                        clear section


                        ;% _DriverTractiveForce2f2Driver_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 11;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(15) = section;
                        clear section


                        ;% _EnvAirTemp2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 12;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(16) = section;
                        clear section


                        ;% _EnvGrvty2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 13;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(17) = section;
                        clear section


                        ;% _EnvNomFrictionScaling2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 14;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(18) = section;
                        clear section


                        ;% _EnvNominalGrade2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 15;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(19) = section;
                        clear section


                        ;% _EnvWindVelX2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 16;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(20) = section;
                        clear section


                        ;% _EnvWindVelY2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 17;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(21) = section;
                        clear section


                        ;% _EnvWindVelZ2f2Environment_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 18;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(22) = section;
                        clear section


                        ;% _PlntBattSocInit2f2BatteryDCDC_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 19;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(23) = section;
                        clear section


                        ;% _PlntBattTempInitDegC2f2BatteryDCDC_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 20;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(24) = section;
                        clear section


                        ;% _PlntBrkFrntBias2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 21;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(25) = section;
                        clear section


                        ;% _PlntBrkKinFricCffFrnt2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 22;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(26) = section;
                        clear section


                        ;% _PlntBrkNumPadsFrnt2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 23;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(27) = section;
                        clear section


                        ;% _PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 24;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(28) = section;
                        clear section


                        ;% _PlntBrkPrsFctr2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 25;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(29) = section;
                        clear section


                        ;% _PlntBrkRearBias2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 26;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(30) = section;
                        clear section


                        ;% _PlntBrkWc2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 27;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(31) = section;
                        clear section


                        ;% _PlntDCDCVoltInit2f2BatteryDCDC_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 28;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(32) = section;
                        clear section


                        ;% _PlntDiffrntl2Eff2f2Drivetrain_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 29;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(33) = section;
                        clear section


                        ;% _PlntDiffrntl2Ratio2f2Drivetrain_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 30;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(34) = section;
                        clear section


                        ;% _PlntDiffrntlEff2f2Drivetrain_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 31;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(35) = section;
                        clear section


                        ;% _PlntDiffrntlRatio2f2Drivetrain_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 32;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(36) = section;
                        clear section


                        ;% _PlntEM1EffTbl2f2ElectricMachine1_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 33;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(37) = section;
                        clear section


                        ;% _PlntEM1Spd2f2ElectricMachine1_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 34;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(38) = section;
                        clear section


                        ;% _PlntEM1TrqEff2f2ElectricMachine1_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 35;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(39) = section;
                        clear section


                        ;% _PlntEM2EffTbl2f2ElectricMachine2_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 36;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(40) = section;
                        clear section


                        ;% _PlntEM2Spd2f2ElectricMachine2_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 37;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(41) = section;
                        clear section


                        ;% _PlntEM2TrqEff2f2ElectricMachine2_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 38;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(42) = section;
                        clear section


                        ;% _PlntVehDstCGFrntAxl2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 39;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(43) = section;
                        clear section


                        ;% _PlntVehDstCGRearAxl2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 40;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(44) = section;
                        clear section


                        ;% _PlntVehMass2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 41;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(45) = section;
                        clear section


                        ;% _PlntWhlLdRadius2f2PassVeh_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 42;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(46) = section;
                        clear section


                        ;% _Spark_MaxTrq2f2SparkEM_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 43;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(47) = section;
                        clear section


                        ;% _Spark_MaxTrq_Spd2f2SparkEM_sldd_
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 44;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        paramMap.sections(48) = section;
                        clear section



        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (iowqpk3eub2)
        ;%
            section.nData     = 112;
            section.data(112)  = dumData; %prealloc

                    ;% iowqpk3eub2.atfdsr0huc
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% iowqpk3eub2.cgjlckur0q
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% iowqpk3eub2.ciy0n0fvf4
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% iowqpk3eub2.m3s2vgesq4
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% iowqpk3eub2.npj2crdbpe
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% iowqpk3eub2.b1ipo3flxd
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% iowqpk3eub2.eabfogqpnn
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% iowqpk3eub2.n2qyp3jaox
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% iowqpk3eub2.fbcbuzgnbt
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 14;

                    ;% iowqpk3eub2.brfljizvcb
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 18;

                    ;% iowqpk3eub2.hk3t1uj3s1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 22;

                    ;% iowqpk3eub2.cgvpcvur0e
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 26;

                    ;% iowqpk3eub2.hlacplpmlq
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 30;

                    ;% iowqpk3eub2.fhodh2srma
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 34;

                    ;% iowqpk3eub2.hzjndpcd5s
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 38;

                    ;% iowqpk3eub2.cbv0fng454
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 41;

                    ;% iowqpk3eub2.fjnu3gvsoe
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 45;

                    ;% iowqpk3eub2.jckfwcjotl
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 46;

                    ;% iowqpk3eub2.m41crq5gno
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 50;

                    ;% iowqpk3eub2.bvt0cxt3h4
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 51;

                    ;% iowqpk3eub2.puhbleyldk
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 52;

                    ;% iowqpk3eub2.ir1e3eamgb
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 53;

                    ;% iowqpk3eub2.clajzw4qwk
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 54;

                    ;% iowqpk3eub2.jj4uuhdxay
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 58;

                    ;% iowqpk3eub2.guhcbwpvv2
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 59;

                    ;% iowqpk3eub2.hdpouphvxx
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 63;

                    ;% iowqpk3eub2.k042txegzi
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 65;

                    ;% iowqpk3eub2.ibos4vblha
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 69;

                    ;% iowqpk3eub2.bfwwnvikrt
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 73;

                    ;% iowqpk3eub2.m1nza5khum
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 74;

                    ;% iowqpk3eub2.jbgpjywn3z
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 158;

                    ;% iowqpk3eub2.ogs4ehkbam
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 186;

                    ;% iowqpk3eub2.efiylruo1t
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 187;

                    ;% iowqpk3eub2.dqh4oe22xa
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 188;

                    ;% iowqpk3eub2.jfa1nbks1u
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 189;

                    ;% iowqpk3eub2.o4djdimsdm
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 190;

                    ;% iowqpk3eub2.jpcr1f245w
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 191;

                    ;% iowqpk3eub2.axn1d2xjab
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 192;

                    ;% iowqpk3eub2.jqbzi0b53m
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 194;

                    ;% iowqpk3eub2.dttp424sgc
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 195;

                    ;% iowqpk3eub2.liyhqocsj3
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 196;

                    ;% iowqpk3eub2.ivcelveswb
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 198;

                    ;% iowqpk3eub2.cyvi2yk4zm
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 199;

                    ;% iowqpk3eub2.pupxf42qyi
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 201;

                    ;% iowqpk3eub2.c02ood1bjt
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 203;

                    ;% iowqpk3eub2.p0b3m4xtnw
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 204;

                    ;% iowqpk3eub2.mytvvfcg1y
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 206;

                    ;% iowqpk3eub2.k4zukswayf
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 207;

                    ;% iowqpk3eub2.khcqvoneta
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 208;

                    ;% iowqpk3eub2.ffjzw3xpup
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 209;

                    ;% iowqpk3eub2.pjeugxnijx
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 210;

                    ;% iowqpk3eub2.j5ydyic0d5
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 211;

                    ;% iowqpk3eub2.kvtxbs1osx
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 212;

                    ;% iowqpk3eub2.nk5i1tvfs4
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 213;

                    ;% iowqpk3eub2.hkfoqcrcaa
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 214;

                    ;% iowqpk3eub2.fygmwizxbe
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 215;

                    ;% iowqpk3eub2.if3ap21cin
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 216;

                    ;% iowqpk3eub2.hcj2ikcjyk
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 217;

                    ;% iowqpk3eub2.fgkckqf33e
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 218;

                    ;% iowqpk3eub2.bbwodlczuz
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 219;

                    ;% iowqpk3eub2.cfykfdt0uw
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 220;

                    ;% iowqpk3eub2.gk5c3nru3t
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 221;

                    ;% iowqpk3eub2.gtc1bz3bpt
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 222;

                    ;% iowqpk3eub2.ll5kvzbeqe
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 223;

                    ;% iowqpk3eub2.dxggtyvppm
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 224;

                    ;% iowqpk3eub2.iqd4x5zmdq
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 225;

                    ;% iowqpk3eub2.fslb3e0kt4
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 226;

                    ;% iowqpk3eub2.hvofgrdmb4
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 227;

                    ;% iowqpk3eub2.ckogufqgce
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 231;

                    ;% iowqpk3eub2.orjxb10cau
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 232;

                    ;% iowqpk3eub2.b02kbm44cq
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 233;

                    ;% iowqpk3eub2.btpqtt4ve2
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 234;

                    ;% iowqpk3eub2.bqypj3eyiq
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 235;

                    ;% iowqpk3eub2.ay4cfinsfw
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 237;

                    ;% iowqpk3eub2.dfmae2tshm
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 238;

                    ;% iowqpk3eub2.ozcfs2wm5f
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 239;

                    ;% iowqpk3eub2.g1n4ddzbcb
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 240;

                    ;% iowqpk3eub2.e1oqshled2
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 241;

                    ;% iowqpk3eub2.i0f0kaduop
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 243;

                    ;% iowqpk3eub2.oi1l1zfk0l
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 247;

                    ;% iowqpk3eub2.az43xb15iv
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 248;

                    ;% iowqpk3eub2.iefandv1mx
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 249;

                    ;% iowqpk3eub2.jywmdz2pm0
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 250;

                    ;% iowqpk3eub2.o2cjlwehyr
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 251;

                    ;% iowqpk3eub2.or4x0ngped
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 252;

                    ;% iowqpk3eub2.gfa1pnn0i5
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 253;

                    ;% iowqpk3eub2.j4h3u5o2s0
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 254;

                    ;% iowqpk3eub2.hvrj3ku4rl
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 255;

                    ;% iowqpk3eub2.niktayqu0g
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 256;

                    ;% iowqpk3eub2.n1qbwalijw
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 257;

                    ;% iowqpk3eub2.jlncf1nhxu
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 258;

                    ;% iowqpk3eub2.dtch5f4az1
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 259;

                    ;% iowqpk3eub2.oqfbznbud3
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 260;

                    ;% iowqpk3eub2.b25h3lrxlo
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 261;

                    ;% iowqpk3eub2.eycgm5czdn
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 263;

                    ;% iowqpk3eub2.hiqbgqctfu
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 265;

                    ;% iowqpk3eub2.bwgdzgdu1v
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 266;

                    ;% iowqpk3eub2.fhd2qe1xn4
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 267;

                    ;% iowqpk3eub2.cb3kw2uoce
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 271;

                    ;% iowqpk3eub2.c5agzst0mq
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 275;

                    ;% iowqpk3eub2.b0ggdb4gbt
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 279;

                    ;% iowqpk3eub2.oxtftcyamo
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 283;

                    ;% iowqpk3eub2.cvaoaiilfy
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 284;

                    ;% iowqpk3eub2.bol3toc3da
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 285;

                    ;% iowqpk3eub2.dccuh1poqm
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 286;

                    ;% iowqpk3eub2.hd5tn4m4oh
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 287;

                    ;% iowqpk3eub2.nkjka2mvua
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 288;

                    ;% iowqpk3eub2.fyv5hziyzu
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 289;

                    ;% iowqpk3eub2.nz1eo0mhjt
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 290;

                    ;% iowqpk3eub2.pvdiosiz3s
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 291;

                    ;% iowqpk3eub2.hpa0jnkmab
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 292;

                    ;% iowqpk3eub2.ivqnpc0uok
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 293;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% iowqpk3eub2.jtrhoigdxv
                    section.data(1).logicalSrcIdx = 112;
                    section.data(1).dtTransOffset = 0;

                    ;% iowqpk3eub2.fjkq3v532f
                    section.data(2).logicalSrcIdx = 113;
                    section.data(2).dtTransOffset = 1;

                    ;% iowqpk3eub2.ceqisvxe55
                    section.data(3).logicalSrcIdx = 114;
                    section.data(3).dtTransOffset = 2;

                    ;% iowqpk3eub2.np15oib1kn
                    section.data(4).logicalSrcIdx = 115;
                    section.data(4).dtTransOffset = 3;

                    ;% iowqpk3eub2.puwtafzry1
                    section.data(5).logicalSrcIdx = 116;
                    section.data(5).dtTransOffset = 4;

                    ;% iowqpk3eub2.jiym3rqvan
                    section.data(6).logicalSrcIdx = 117;
                    section.data(6).dtTransOffset = 5;

                    ;% iowqpk3eub2.gcn3sxipyq
                    section.data(7).logicalSrcIdx = 118;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% iowqpk3eub2.dwnfs4t0ur.motv0pybyv
                    section.data(1).logicalSrcIdx = 119;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% iowqpk3eub2.fuob0ddam2h.motv0pybyv
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 16;
        sectIdxOffset = 4;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (cz5yqt3r3xb)
        ;%
            section.nData     = 46;
            section.data(46)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.mkt5abmauk
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.cz5mx3nggl
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% cz5yqt3r3xb.lfrgrevnct
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% cz5yqt3r3xb.m3vfpsg3ir
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% cz5yqt3r3xb.cxyhghs0r4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% cz5yqt3r3xb.cxsxj110xc
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 10;

                    ;% cz5yqt3r3xb.jdazc15ain
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% cz5yqt3r3xb.lnpmbzyfub
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 14;

                    ;% cz5yqt3r3xb.erhws3aqax
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 15;

                    ;% cz5yqt3r3xb.pz2p5tww5r
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 16;

                    ;% cz5yqt3r3xb.gcbnlbndyh
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 18;

                    ;% cz5yqt3r3xb.acangtzbxh
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 20;

                    ;% cz5yqt3r3xb.ovftuesk53
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 22;

                    ;% cz5yqt3r3xb.dfwjuauqhh
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 24;

                    ;% cz5yqt3r3xb.dci24ewo3n
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 25;

                    ;% cz5yqt3r3xb.n20oxvozfr
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 27;

                    ;% cz5yqt3r3xb.akmdrfe3wk
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 29;

                    ;% cz5yqt3r3xb.o5xnow4itx
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 31;

                    ;% cz5yqt3r3xb.eltxhn2ccn
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 32;

                    ;% cz5yqt3r3xb.ho5bua3cli
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 33;

                    ;% cz5yqt3r3xb.oqnelch0g4
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 35;

                    ;% cz5yqt3r3xb.lgs1ws31ib
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 36;

                    ;% cz5yqt3r3xb.hgdclbpf45
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 38;

                    ;% cz5yqt3r3xb.dfvfksmo3u
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 39;

                    ;% cz5yqt3r3xb.j0t5dz02te
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 41;

                    ;% cz5yqt3r3xb.d0jgs1xeud
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 42;

                    ;% cz5yqt3r3xb.i5wargkafk
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 43;

                    ;% cz5yqt3r3xb.noizxcaj0u
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 44;

                    ;% cz5yqt3r3xb.ahz4qvibsf
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 45;

                    ;% cz5yqt3r3xb.gelfja001m
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 46;

                    ;% cz5yqt3r3xb.im2dnqr2y0
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 47;

                    ;% cz5yqt3r3xb.h2fppauqjk
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 48;

                    ;% cz5yqt3r3xb.arunw3enqo
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 49;

                    ;% cz5yqt3r3xb.e2o3ismpif
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 50;

                    ;% cz5yqt3r3xb.m32a3ep5gt
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 52;

                    ;% cz5yqt3r3xb.h0gkcev35m
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 53;

                    ;% cz5yqt3r3xb.i5jjfepadp
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 54;

                    ;% cz5yqt3r3xb.hqv0oirn0q
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 55;

                    ;% cz5yqt3r3xb.lzovmgc1ye
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 56;

                    ;% cz5yqt3r3xb.ggdayeevtv
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 60;

                    ;% cz5yqt3r3xb.ipqlah0gj1
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 64;

                    ;% cz5yqt3r3xb.eck5rxblzt
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 68;

                    ;% cz5yqt3r3xb.em1wbmdjow
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 69;

                    ;% cz5yqt3r3xb.jmm4c105ye
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 70;

                    ;% cz5yqt3r3xb.f05boyvyxi
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 71;

                    ;% cz5yqt3r3xb.dukvvezhh4
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 72;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 35;
            section.data(35)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.lnkfufvfoi
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.ar3upchjlo
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% cz5yqt3r3xb.fyp5vdhzam
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

                    ;% cz5yqt3r3xb.kesvfvbvkl
                    section.data(4).logicalSrcIdx = 49;
                    section.data(4).dtTransOffset = 3;

                    ;% cz5yqt3r3xb.jpcxrlfrcv
                    section.data(5).logicalSrcIdx = 50;
                    section.data(5).dtTransOffset = 4;

                    ;% cz5yqt3r3xb.obwvm01orf
                    section.data(6).logicalSrcIdx = 51;
                    section.data(6).dtTransOffset = 5;

                    ;% cz5yqt3r3xb.d2fpk5tr1x
                    section.data(7).logicalSrcIdx = 52;
                    section.data(7).dtTransOffset = 6;

                    ;% cz5yqt3r3xb.h5ryejvlpa
                    section.data(8).logicalSrcIdx = 53;
                    section.data(8).dtTransOffset = 7;

                    ;% cz5yqt3r3xb.lc5aujkip1
                    section.data(9).logicalSrcIdx = 54;
                    section.data(9).dtTransOffset = 8;

                    ;% cz5yqt3r3xb.ei3gqxprgb
                    section.data(10).logicalSrcIdx = 55;
                    section.data(10).dtTransOffset = 9;

                    ;% cz5yqt3r3xb.itezm0aayj
                    section.data(11).logicalSrcIdx = 56;
                    section.data(11).dtTransOffset = 10;

                    ;% cz5yqt3r3xb.dqdopzr2jv.AQHandles
                    section.data(12).logicalSrcIdx = 57;
                    section.data(12).dtTransOffset = 11;

                    ;% cz5yqt3r3xb.ate5v5wkj2.AQHandles
                    section.data(13).logicalSrcIdx = 58;
                    section.data(13).dtTransOffset = 12;

                    ;% cz5yqt3r3xb.cj0ldup5gu.AQHandles
                    section.data(14).logicalSrcIdx = 59;
                    section.data(14).dtTransOffset = 13;

                    ;% cz5yqt3r3xb.jgeac3tq21.AQHandles
                    section.data(15).logicalSrcIdx = 60;
                    section.data(15).dtTransOffset = 14;

                    ;% cz5yqt3r3xb.gynuv0krsy.AQHandles
                    section.data(16).logicalSrcIdx = 61;
                    section.data(16).dtTransOffset = 15;

                    ;% cz5yqt3r3xb.cismfzyk15.AQHandles
                    section.data(17).logicalSrcIdx = 62;
                    section.data(17).dtTransOffset = 16;

                    ;% cz5yqt3r3xb.irudyghn3o.AQHandles
                    section.data(18).logicalSrcIdx = 63;
                    section.data(18).dtTransOffset = 17;

                    ;% cz5yqt3r3xb.nikehp134v.AQHandles
                    section.data(19).logicalSrcIdx = 64;
                    section.data(19).dtTransOffset = 18;

                    ;% cz5yqt3r3xb.gxisg0jsgi.AQHandles
                    section.data(20).logicalSrcIdx = 65;
                    section.data(20).dtTransOffset = 19;

                    ;% cz5yqt3r3xb.kx02fuyglo.AQHandles
                    section.data(21).logicalSrcIdx = 66;
                    section.data(21).dtTransOffset = 20;

                    ;% cz5yqt3r3xb.ivzabugs2u.AQHandles
                    section.data(22).logicalSrcIdx = 67;
                    section.data(22).dtTransOffset = 21;

                    ;% cz5yqt3r3xb.cdaylxvgal.LoggedData
                    section.data(23).logicalSrcIdx = 68;
                    section.data(23).dtTransOffset = 22;

                    ;% cz5yqt3r3xb.ininr2hc2p.LoggedData
                    section.data(24).logicalSrcIdx = 69;
                    section.data(24).dtTransOffset = 28;

                    ;% cz5yqt3r3xb.fywuj43jfl.AQHandles
                    section.data(25).logicalSrcIdx = 70;
                    section.data(25).dtTransOffset = 31;

                    ;% cz5yqt3r3xb.crmx2s5hqc.AQHandles
                    section.data(26).logicalSrcIdx = 71;
                    section.data(26).dtTransOffset = 32;

                    ;% cz5yqt3r3xb.ctg1unrwpm.AQHandles
                    section.data(27).logicalSrcIdx = 72;
                    section.data(27).dtTransOffset = 33;

                    ;% cz5yqt3r3xb.j2bb0dzih4.AQHandles
                    section.data(28).logicalSrcIdx = 73;
                    section.data(28).dtTransOffset = 34;

                    ;% cz5yqt3r3xb.gjt3j5kgn2.AQHandles
                    section.data(29).logicalSrcIdx = 74;
                    section.data(29).dtTransOffset = 35;

                    ;% cz5yqt3r3xb.i01ezsocmb.AQHandles
                    section.data(30).logicalSrcIdx = 75;
                    section.data(30).dtTransOffset = 36;

                    ;% cz5yqt3r3xb.kzgixjdqqa.AQHandles
                    section.data(31).logicalSrcIdx = 76;
                    section.data(31).dtTransOffset = 37;

                    ;% cz5yqt3r3xb.ibizqnzh0w.AQHandles
                    section.data(32).logicalSrcIdx = 77;
                    section.data(32).dtTransOffset = 38;

                    ;% cz5yqt3r3xb.aj1d134nmk.AQHandles
                    section.data(33).logicalSrcIdx = 78;
                    section.data(33).dtTransOffset = 39;

                    ;% cz5yqt3r3xb.frybx0mj1e.AQHandles
                    section.data(34).logicalSrcIdx = 79;
                    section.data(34).dtTransOffset = 40;

                    ;% cz5yqt3r3xb.fbajak152x.LoggedData
                    section.data(35).logicalSrcIdx = 80;
                    section.data(35).dtTransOffset = 41;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.hndyq1p4da
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.mhe3tr5m1h
                    section.data(1).logicalSrcIdx = 82;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.metkb44aex
                    section.data(2).logicalSrcIdx = 83;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.dq4uzmtffx
                    section.data(1).logicalSrcIdx = 84;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.mvmiplzz0c
                    section.data(2).logicalSrcIdx = 85;
                    section.data(2).dtTransOffset = 18;

                    ;% cz5yqt3r3xb.kblv4axo3c
                    section.data(3).logicalSrcIdx = 86;
                    section.data(3).dtTransOffset = 19;

                    ;% cz5yqt3r3xb.m0ix3twyqi
                    section.data(4).logicalSrcIdx = 87;
                    section.data(4).dtTransOffset = 20;

                    ;% cz5yqt3r3xb.kqqvkns214
                    section.data(5).logicalSrcIdx = 88;
                    section.data(5).dtTransOffset = 21;

                    ;% cz5yqt3r3xb.hg1heoe0ab
                    section.data(6).logicalSrcIdx = 89;
                    section.data(6).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.eez5eb4v4d
                    section.data(1).logicalSrcIdx = 90;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.johw44ce4i
                    section.data(1).logicalSrcIdx = 91;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.o13svxvssq
                    section.data(2).logicalSrcIdx = 92;
                    section.data(2).dtTransOffset = 1;

                    ;% cz5yqt3r3xb.hnc4qrwkcy
                    section.data(3).logicalSrcIdx = 93;
                    section.data(3).dtTransOffset = 2;

                    ;% cz5yqt3r3xb.nremqoghxn
                    section.data(4).logicalSrcIdx = 94;
                    section.data(4).dtTransOffset = 3;

                    ;% cz5yqt3r3xb.azwx5q01st
                    section.data(5).logicalSrcIdx = 95;
                    section.data(5).dtTransOffset = 4;

                    ;% cz5yqt3r3xb.b0kxfxynn3
                    section.data(6).logicalSrcIdx = 96;
                    section.data(6).dtTransOffset = 5;

                    ;% cz5yqt3r3xb.j0engehfzs
                    section.data(7).logicalSrcIdx = 97;
                    section.data(7).dtTransOffset = 6;

                    ;% cz5yqt3r3xb.mm5oiqqh5r
                    section.data(8).logicalSrcIdx = 98;
                    section.data(8).dtTransOffset = 7;

                    ;% cz5yqt3r3xb.e2wr3vcmsf
                    section.data(9).logicalSrcIdx = 99;
                    section.data(9).dtTransOffset = 8;

                    ;% cz5yqt3r3xb.pumuolxchk
                    section.data(10).logicalSrcIdx = 100;
                    section.data(10).dtTransOffset = 9;

                    ;% cz5yqt3r3xb.cfbyafp2yp
                    section.data(11).logicalSrcIdx = 101;
                    section.data(11).dtTransOffset = 10;

                    ;% cz5yqt3r3xb.nu1w3dp3or
                    section.data(12).logicalSrcIdx = 102;
                    section.data(12).dtTransOffset = 11;

                    ;% cz5yqt3r3xb.k0uf3b30j1
                    section.data(13).logicalSrcIdx = 103;
                    section.data(13).dtTransOffset = 12;

                    ;% cz5yqt3r3xb.k24rp5jloy
                    section.data(14).logicalSrcIdx = 104;
                    section.data(14).dtTransOffset = 13;

                    ;% cz5yqt3r3xb.by3pjn5fot
                    section.data(15).logicalSrcIdx = 105;
                    section.data(15).dtTransOffset = 14;

                    ;% cz5yqt3r3xb.pgsfdyvzg3
                    section.data(16).logicalSrcIdx = 106;
                    section.data(16).dtTransOffset = 15;

                    ;% cz5yqt3r3xb.jepwxk2s4r
                    section.data(17).logicalSrcIdx = 107;
                    section.data(17).dtTransOffset = 16;

                    ;% cz5yqt3r3xb.pijwjimaqv
                    section.data(18).logicalSrcIdx = 108;
                    section.data(18).dtTransOffset = 17;

                    ;% cz5yqt3r3xb.kw10r0jllu
                    section.data(19).logicalSrcIdx = 109;
                    section.data(19).dtTransOffset = 18;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.ldpanoehpw
                    section.data(1).logicalSrcIdx = 110;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.iyzfufaeyj
                    section.data(2).logicalSrcIdx = 111;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.ondrgrykbz
                    section.data(1).logicalSrcIdx = 112;
                    section.data(1).dtTransOffset = 0;

                    ;% cz5yqt3r3xb.giq1ke1ckr
                    section.data(2).logicalSrcIdx = 113;
                    section.data(2).dtTransOffset = 1;

                    ;% cz5yqt3r3xb.i4yi1hc3oq
                    section.data(3).logicalSrcIdx = 114;
                    section.data(3).dtTransOffset = 2;

                    ;% cz5yqt3r3xb.hxfbtrll0m
                    section.data(4).logicalSrcIdx = 115;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.lofhsz2swn
                    section.data(1).logicalSrcIdx = 116;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.kqktv02dou
                    section.data(1).logicalSrcIdx = 117;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.jrvwlq3fuz
                    section.data(1).logicalSrcIdx = 118;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.dwnfs4t0ur.k44bc5mjbl
                    section.data(1).logicalSrcIdx = 119;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.dwnfs4t0ur.o5luu5smdl
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.fuob0ddam2h.k44bc5mjbl
                    section.data(1).logicalSrcIdx = 121;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cz5yqt3r3xb.fuob0ddam2h.o5luu5smdl
                    section.data(1).logicalSrcIdx = 122;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1248598894;
    targMap.checksum1 = 4235261646;
    targMap.checksum2 = 2211789845;
    targMap.checksum3 = 1470293678;

