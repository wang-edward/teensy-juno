#include <Audio.h>
#include <SD.h>
#include <SPI.h>
#include <SerialFlash.h>
#include <Wire.h>

// GUItool: begin automatically generated code
AudioSynthWaveform lfo;                   // xy=161,903
AudioSynthWaveformDc pwm_dc;              // xy=174,974
AudioEffectEnvelope lfo_envelope0;        // xy=392,378
AudioEffectEnvelope lfo_envelope1;        // xy=412,543
AudioEffectEnvelope lfo_envelope2;        // xy=424,727
AudioEffectEnvelope lfo_envelope3;        // xy=424,880
AudioEffectEnvelope lfo_envelope5;        // xy=435,1218
AudioEffectEnvelope lfo_envelope7;        // xy=435,1555
AudioEffectEnvelope lfo_envelope4;        // xy=439,1048
AudioEffectEnvelope lfo_envelope6;        // xy=445,1387
AudioAmplifier osc_lfo_amp0;              // xy=562,407
AudioAmplifier osc_lfo_amp3;              // xy=567,924
AudioMixer4 pwm_mixer1;                   // xy=575,487
AudioMixer4 pwm_mixer2;                   // xy=577,674
AudioMixer4 pwm_mixer0;                   // xy=579,292
AudioAmplifier osc_lfo_amp5;              // xy=583,1272
AudioMixer4 pwm_mixer3;                   // xy=588,836
AudioAmplifier osc_lfo_amp1;              // xy=593,597
AudioAmplifier osc_lfo_amp4;              // xy=591,1100
AudioMixer4 pwm_mixer6;                   // xy=599,1335
AudioMixer4 pwm_mixer5;                   // xy=600,1178
AudioAmplifier osc_lfo_amp2;              // xy=602,776
AudioAmplifier osc_lfo_amp6;              // xy=604,1437
AudioMixer4 pwm_mixer4;                   // xy=608,1004
AudioMixer4 pwm_mixer7;                   // xy=619,1514
AudioAmplifier osc_lfo_amp7;              // xy=636,1618
AudioSynthWaveformModulated sub7;         // xy=792,1656
AudioSynthWaveformModulated sub4;         // xy=794,1158
AudioSynthWaveformModulated saw7;         // xy=793,1617
AudioSynthWaveformModulated saw4;         // xy=795,1119
AudioSynthWaveformModulated sub6;         // xy=794,1490
AudioSynthWaveformModulated saw6;         // xy=795,1451
AudioSynthWaveformModulated sub5;         // xy=798,1326
AudioSynthWaveformModulated sub3;         // xy=800,993
AudioSynthWaveformModulated saw5;         // xy=799,1287
AudioSynthNoiseWhite noise7;              // xy=798,1695
AudioSynthNoiseWhite noise4;              // xy=800,1197
AudioSynthWaveformModulated saw3;         // xy=801,954
AudioSynthNoiseWhite noise6;              // xy=800,1529
AudioSynthWaveformModulated pulse_lfo7;   // xy=802,1576
AudioSynthWaveformModulated sub2;         // xy=805,827
AudioSynthWaveformModulated pulse_lfo4;   // xy=804,1078
AudioSynthWaveformModulated saw2;         // xy=806,788
AudioSynthNoiseWhite noise5;              // xy=804,1365
AudioSynthWaveformModulated pulse_lfo6;   // xy=804,1410
AudioSynthWaveformModulated sub0;         // xy=808,483
AudioSynthNoiseWhite noise3;              // xy=806,1032
AudioSynthWaveformModulated saw0;         // xy=809,444
AudioSynthWaveformModulated sub1;         // xy=809,656
AudioSynthWaveformModulated saw1;         // xy=810,617
AudioSynthWaveformModulated pulse_lfo5;   // xy=808,1246
AudioSynthWaveformModulated pulse_lfo3;   // xy=810,913
AudioSynthNoiseWhite noise2;              // xy=811,866
AudioSynthNoiseWhite noise0;              // xy=815,523
AudioSynthNoiseWhite noise1;              // xy=815,695
AudioSynthWaveformModulated pulse_lfo2;   // xy=815,747
AudioSynthWaveformModulated pulse_lfo0;   // xy=818,403
AudioSynthWaveformModulated pulse_lfo1;   // xy=819,576
AudioSynthWaveformDc lpf_envelope_dc;     // xy=914,193
AudioSynthWaveformDc lpf_keyboard_dc;     // xy=917,263
AudioSynthWaveformDc lpf_mod_wheel_dc;    // xy=930,300
AudioMixer4 osc_mixer7;                   // xy=1003,1646
AudioMixer4 osc_mixer4;                   // xy=1005,1148
AudioMixer4 osc_mixer6;                   // xy=1005,1480
AudioMixer4 osc_mixer5;                   // xy=1009,1316
AudioMixer4 osc_mixer3;                   // xy=1011,983
AudioMixer4 osc_mixer2;                   // xy=1016,817
AudioMixer4 osc_mixer0;                   // xy=1020,474
AudioMixer4 osc_mixer1;                   // xy=1020,646
AudioEffectEnvelope lpf_envelope1;        // xy=1097,555
AudioEffectEnvelope lpf_envelope3;        // xy=1096,886
AudioEffectEnvelope lpf_envelope2;        // xy=1100,716
AudioEffectEnvelope lpf_envelope5;        // xy=1099,1223
AudioEffectEnvelope lpf_envelope4;        // xy=1103,1053
AudioEffectEnvelope lpf_envelope6;        // xy=1106,1391
AudioEffectEnvelope lpf_envelope7;        // xy=1109,1560
AudioEffectEnvelope lpf_envelope0;        // xy=1143,262
AudioFilterStateVariable hpf7;            // xy=1146,1657
AudioFilterStateVariable hpf4;            // xy=1148,1159
AudioFilterStateVariable hpf6;            // xy=1148,1491
AudioFilterStateVariable hpf5;            // xy=1152,1327
AudioFilterStateVariable hpf3;            // xy=1154,994
AudioFilterStateVariable hpf2;            // xy=1159,828
AudioFilterStateVariable hpf0;            // xy=1163,485
AudioFilterStateVariable hpf1;            // xy=1163,657
AudioMixer4 lpf_mod_mixer0;               // xy=1254,414
AudioMixer4 lpf_mod_mixer1;               // xy=1281,596
AudioFilterLadder lpf7;                   // xy=1279,1677
AudioFilterLadder lpf4;                   // xy=1281,1179
AudioMixer4 lpf_mod_mixer2;               // xy=1284,757
AudioFilterLadder lpf6;                   // xy=1281,1511
AudioMixer4 lpf_mod_mixer5;               // xy=1283,1264
AudioMixer4 lpf_mod_mixer3;               // xy=1286,937
AudioFilterLadder lpf5;                   // xy=1285,1347
AudioFilterLadder lpf3;                   // xy=1287,1014
AudioMixer4 lpf_mod_mixer4;               // xy=1287,1094
AudioFilterLadder lpf2;                   // xy=1292,848
AudioMixer4 lpf_mod_mixer6;               // xy=1290,1432
AudioFilterLadder lpf0;                   // xy=1296,505
AudioFilterLadder lpf1;                   // xy=1296,677
AudioMixer4 lpf_mod_mixer7;               // xy=1293,1601
AudioEffectEnvelope envelope7;            // xy=1417,1677
AudioEffectEnvelope envelope4;            // xy=1419,1179
AudioEffectEnvelope envelope6;            // xy=1419,1511
AudioEffectEnvelope envelope5;            // xy=1423,1347
AudioAmplifier lpf_polarity;              // xy=1427,352
AudioEffectEnvelope envelope3;            // xy=1425,1014
AudioEffectEnvelope envelope2;            // xy=1430,848
AudioEffectEnvelope envelope0;            // xy=1434,505
AudioEffectEnvelope envelope1;            // xy=1434,677
AudioMixer4 envelope_mixer0;              // xy=1675,779
AudioMixer4 envelope_mixer1;              // xy=1698,1457
AudioMixer4 mixer_left;                   // xy=1928,1063
AudioMixer4 mixer_right;                  // xy=1935,1299
AudioEffectFlange flanger_left;           // xy=2108,1151
AudioEffectFlange flanger_right;          // xy=2113,1276
AudioAnalyzePeak peak;                    // xy=2132,627
AudioFilterStateVariable antialias_left;  // xy=2345,1149
AudioFilterStateVariable antialias_right; // xy=2357,1266
AudioOutputI2S i2s1;                      // xy=2530,1197
AudioConnection patchCord1(lfo, lfo_envelope0);
AudioConnection patchCord2(lfo, lfo_envelope2);
AudioConnection patchCord3(lfo, lfo_envelope1);
AudioConnection patchCord4(lfo, lfo_envelope3);
AudioConnection patchCord5(lfo, lfo_envelope4);
AudioConnection patchCord6(lfo, lfo_envelope5);
AudioConnection patchCord7(lfo, lfo_envelope6);
AudioConnection patchCord8(lfo, lfo_envelope7);
AudioConnection patchCord9(pwm_dc, 0, pwm_mixer0, 1);
AudioConnection patchCord10(pwm_dc, 0, pwm_mixer1, 1);
AudioConnection patchCord11(pwm_dc, 0, pwm_mixer2, 1);
AudioConnection patchCord12(pwm_dc, 0, pwm_mixer3, 1);
AudioConnection patchCord13(pwm_dc, 0, pwm_mixer4, 1);
AudioConnection patchCord14(pwm_dc, 0, pwm_mixer5, 1);
AudioConnection patchCord15(pwm_dc, 0, pwm_mixer6, 1);
AudioConnection patchCord16(pwm_dc, 0, pwm_mixer7, 1);
AudioConnection patchCord17(lfo_envelope0, 0, lpf_mod_mixer0, 1);
AudioConnection patchCord18(lfo_envelope0, osc_lfo_amp0);
AudioConnection patchCord19(lfo_envelope0, 0, pwm_mixer0, 0);
AudioConnection patchCord20(lfo_envelope1, 0, lpf_mod_mixer1, 1);
AudioConnection patchCord21(lfo_envelope1, osc_lfo_amp1);
AudioConnection patchCord22(lfo_envelope1, 0, pwm_mixer1, 0);
AudioConnection patchCord23(lfo_envelope2, 0, lpf_mod_mixer2, 1);
AudioConnection patchCord24(lfo_envelope2, osc_lfo_amp2);
AudioConnection patchCord25(lfo_envelope2, 0, pwm_mixer2, 0);
AudioConnection patchCord26(lfo_envelope3, 0, lpf_mod_mixer3, 1);
AudioConnection patchCord27(lfo_envelope3, osc_lfo_amp3);
AudioConnection patchCord28(lfo_envelope3, 0, pwm_mixer3, 0);
AudioConnection patchCord29(lfo_envelope5, 0, lpf_mod_mixer5, 1);
AudioConnection patchCord30(lfo_envelope5, osc_lfo_amp5);
AudioConnection patchCord31(lfo_envelope5, 0, pwm_mixer5, 0);
AudioConnection patchCord32(lfo_envelope7, 0, lpf_mod_mixer7, 1);
AudioConnection patchCord33(lfo_envelope7, osc_lfo_amp7);
AudioConnection patchCord34(lfo_envelope7, 0, pwm_mixer7, 0);
AudioConnection patchCord35(lfo_envelope4, 0, lpf_mod_mixer4, 1);
AudioConnection patchCord36(lfo_envelope4, osc_lfo_amp4);
AudioConnection patchCord37(lfo_envelope4, 0, pwm_mixer4, 0);
AudioConnection patchCord38(lfo_envelope6, 0, lpf_mod_mixer6, 1);
AudioConnection patchCord39(lfo_envelope6, osc_lfo_amp6);
AudioConnection patchCord40(lfo_envelope6, 0, pwm_mixer6, 0);
AudioConnection patchCord41(osc_lfo_amp0, 0, pulse_lfo0, 0);
AudioConnection patchCord42(osc_lfo_amp0, 0, sub0, 0);
AudioConnection patchCord43(osc_lfo_amp0, 0, saw0, 0);
AudioConnection patchCord44(osc_lfo_amp3, 0, pulse_lfo3, 0);
AudioConnection patchCord45(osc_lfo_amp3, 0, saw3, 0);
AudioConnection patchCord46(osc_lfo_amp3, 0, sub3, 0);
AudioConnection patchCord47(pwm_mixer1, 0, pulse_lfo1, 1);
AudioConnection patchCord48(pwm_mixer1, 0, sub1, 1);
AudioConnection patchCord49(pwm_mixer2, 0, pulse_lfo2, 1);
AudioConnection patchCord50(pwm_mixer2, 0, sub2, 1);
AudioConnection patchCord51(pwm_mixer0, 0, sub0, 1);
AudioConnection patchCord52(pwm_mixer0, 0, pulse_lfo0, 1);
AudioConnection patchCord53(osc_lfo_amp5, 0, pulse_lfo5, 0);
AudioConnection patchCord54(osc_lfo_amp5, 0, saw5, 0);
AudioConnection patchCord55(osc_lfo_amp5, 0, sub5, 0);
AudioConnection patchCord56(pwm_mixer3, 0, pulse_lfo3, 1);
AudioConnection patchCord57(pwm_mixer3, 0, sub3, 1);
AudioConnection patchCord58(osc_lfo_amp1, 0, pulse_lfo1, 0);
AudioConnection patchCord59(osc_lfo_amp1, 0, saw1, 0);
AudioConnection patchCord60(osc_lfo_amp1, 0, sub1, 0);
AudioConnection patchCord61(osc_lfo_amp4, 0, pulse_lfo4, 0);
AudioConnection patchCord62(osc_lfo_amp4, 0, saw4, 0);
AudioConnection patchCord63(osc_lfo_amp4, 0, sub4, 0);
AudioConnection patchCord64(pwm_mixer6, 0, pulse_lfo6, 1);
AudioConnection patchCord65(pwm_mixer6, 0, sub6, 1);
AudioConnection patchCord66(pwm_mixer5, 0, pulse_lfo5, 1);
AudioConnection patchCord67(pwm_mixer5, 0, sub5, 1);
AudioConnection patchCord68(osc_lfo_amp2, 0, pulse_lfo2, 0);
AudioConnection patchCord69(osc_lfo_amp2, 0, saw2, 0);
AudioConnection patchCord70(osc_lfo_amp2, 0, sub2, 0);
AudioConnection patchCord71(osc_lfo_amp6, 0, pulse_lfo6, 0);
AudioConnection patchCord72(osc_lfo_amp6, 0, saw6, 0);
AudioConnection patchCord73(osc_lfo_amp6, 0, sub6, 0);
AudioConnection patchCord74(pwm_mixer4, 0, pulse_lfo4, 1);
AudioConnection patchCord75(pwm_mixer4, 0, sub4, 1);
AudioConnection patchCord76(pwm_mixer7, 0, pulse_lfo7, 1);
AudioConnection patchCord77(pwm_mixer7, 0, sub7, 1);
AudioConnection patchCord78(osc_lfo_amp7, 0, pulse_lfo7, 0);
AudioConnection patchCord79(osc_lfo_amp7, 0, saw7, 0);
AudioConnection patchCord80(osc_lfo_amp7, 0, sub7, 0);
AudioConnection patchCord81(sub7, 0, osc_mixer7, 2);
AudioConnection patchCord82(sub4, 0, osc_mixer4, 2);
AudioConnection patchCord83(saw7, 0, osc_mixer7, 1);
AudioConnection patchCord84(saw4, 0, osc_mixer4, 1);
AudioConnection patchCord85(sub6, 0, osc_mixer6, 2);
AudioConnection patchCord86(saw6, 0, osc_mixer6, 1);
AudioConnection patchCord87(sub5, 0, osc_mixer5, 2);
AudioConnection patchCord88(sub3, 0, osc_mixer3, 2);
AudioConnection patchCord89(saw5, 0, osc_mixer5, 1);
AudioConnection patchCord90(noise7, 0, osc_mixer7, 3);
AudioConnection patchCord91(noise4, 0, osc_mixer4, 3);
AudioConnection patchCord92(saw3, 0, osc_mixer3, 1);
AudioConnection patchCord93(noise6, 0, osc_mixer6, 3);
AudioConnection patchCord94(pulse_lfo7, 0, osc_mixer7, 0);
AudioConnection patchCord95(sub2, 0, osc_mixer2, 2);
AudioConnection patchCord96(pulse_lfo4, 0, osc_mixer4, 0);
AudioConnection patchCord97(saw2, 0, osc_mixer2, 1);
AudioConnection patchCord98(noise5, 0, osc_mixer5, 3);
AudioConnection patchCord99(pulse_lfo6, 0, osc_mixer6, 0);
AudioConnection patchCord100(sub0, 0, osc_mixer0, 2);
AudioConnection patchCord101(noise3, 0, osc_mixer3, 3);
AudioConnection patchCord102(saw0, 0, osc_mixer0, 1);
AudioConnection patchCord103(sub1, 0, osc_mixer1, 2);
AudioConnection patchCord104(saw1, 0, osc_mixer1, 1);
AudioConnection patchCord105(pulse_lfo5, 0, osc_mixer5, 0);
AudioConnection patchCord106(pulse_lfo3, 0, osc_mixer3, 0);
AudioConnection patchCord107(noise2, 0, osc_mixer2, 3);
AudioConnection patchCord108(noise0, 0, osc_mixer0, 3);
AudioConnection patchCord109(noise1, 0, osc_mixer1, 3);
AudioConnection patchCord110(pulse_lfo2, 0, osc_mixer2, 0);
AudioConnection patchCord111(pulse_lfo0, 0, osc_mixer0, 0);
AudioConnection patchCord112(pulse_lfo1, 0, osc_mixer1, 0);
AudioConnection patchCord113(lpf_envelope_dc, lpf_envelope0);
AudioConnection patchCord114(lpf_envelope_dc, lpf_envelope1);
AudioConnection patchCord115(lpf_envelope_dc, lpf_envelope2);
AudioConnection patchCord116(lpf_envelope_dc, lpf_envelope3);
AudioConnection patchCord117(lpf_envelope_dc, lpf_envelope4);
AudioConnection patchCord118(lpf_envelope_dc, lpf_envelope5);
AudioConnection patchCord119(lpf_envelope_dc, lpf_envelope6);
AudioConnection patchCord120(lpf_envelope_dc, lpf_envelope7);
AudioConnection patchCord121(lpf_keyboard_dc, 0, lpf_mod_mixer0, 2);
AudioConnection patchCord122(lpf_keyboard_dc, 0, lpf_mod_mixer1, 2);
AudioConnection patchCord123(lpf_keyboard_dc, 0, lpf_mod_mixer2, 2);
AudioConnection patchCord124(lpf_keyboard_dc, 0, lpf_mod_mixer3, 2);
AudioConnection patchCord125(lpf_keyboard_dc, 0, lpf_mod_mixer4, 2);
AudioConnection patchCord126(lpf_keyboard_dc, 0, lpf_mod_mixer5, 2);
AudioConnection patchCord127(lpf_keyboard_dc, 0, lpf_mod_mixer6, 2);
AudioConnection patchCord128(lpf_keyboard_dc, 0, lpf_mod_mixer7, 2);
AudioConnection patchCord129(lpf_mod_wheel_dc, 0, lpf_mod_mixer0, 3);
AudioConnection patchCord130(lpf_mod_wheel_dc, 0, lpf_mod_mixer1, 3);
AudioConnection patchCord131(lpf_mod_wheel_dc, 0, lpf_mod_mixer2, 3);
AudioConnection patchCord132(lpf_mod_wheel_dc, 0, lpf_mod_mixer3, 3);
AudioConnection patchCord133(lpf_mod_wheel_dc, 0, lpf_mod_mixer4, 3);
AudioConnection patchCord134(lpf_mod_wheel_dc, 0, lpf_mod_mixer5, 3);
AudioConnection patchCord135(lpf_mod_wheel_dc, 0, lpf_mod_mixer6, 3);
AudioConnection patchCord136(lpf_mod_wheel_dc, 0, lpf_mod_mixer7, 3);
AudioConnection patchCord137(osc_mixer7, 0, hpf7, 0);
AudioConnection patchCord138(osc_mixer4, 0, hpf4, 0);
AudioConnection patchCord139(osc_mixer6, 0, hpf6, 0);
AudioConnection patchCord140(osc_mixer5, 0, hpf5, 0);
AudioConnection patchCord141(osc_mixer3, 0, hpf3, 0);
AudioConnection patchCord142(osc_mixer2, 0, hpf2, 0);
AudioConnection patchCord143(osc_mixer0, 0, hpf0, 0);
AudioConnection patchCord144(osc_mixer1, 0, hpf1, 0);
AudioConnection patchCord145(lpf_envelope1, 0, lpf_mod_mixer1, 0);
AudioConnection patchCord146(lpf_envelope3, 0, lpf_mod_mixer3, 0);
AudioConnection patchCord147(lpf_envelope2, 0, lpf_mod_mixer2, 0);
AudioConnection patchCord148(lpf_envelope5, 0, lpf_mod_mixer5, 0);
AudioConnection patchCord149(lpf_envelope4, 0, lpf_mod_mixer4, 0);
AudioConnection patchCord150(lpf_envelope6, 0, lpf_mod_mixer6, 0);
AudioConnection patchCord151(lpf_envelope7, 0, lpf_mod_mixer7, 0);
AudioConnection patchCord152(lpf_envelope0, 0, lpf_mod_mixer0, 0);
AudioConnection patchCord153(hpf7, 2, lpf7, 0);
AudioConnection patchCord154(hpf4, 2, lpf4, 0);
AudioConnection patchCord155(hpf6, 2, lpf6, 0);
AudioConnection patchCord156(hpf5, 2, lpf5, 0);
AudioConnection patchCord157(hpf3, 2, lpf3, 0);
AudioConnection patchCord158(hpf2, 2, lpf2, 0);
AudioConnection patchCord159(hpf0, 2, lpf0, 0);
AudioConnection patchCord160(hpf1, 2, lpf1, 0);
AudioConnection patchCord161(lpf_mod_mixer0, 0, lpf0, 1);
AudioConnection patchCord162(lpf_mod_mixer1, 0, lpf1, 1);
AudioConnection patchCord163(lpf7, envelope7);
AudioConnection patchCord164(lpf4, envelope4);
AudioConnection patchCord165(lpf_mod_mixer2, 0, lpf2, 1);
AudioConnection patchCord166(lpf6, envelope6);
AudioConnection patchCord167(lpf_mod_mixer5, 0, lpf5, 1);
AudioConnection patchCord168(lpf_mod_mixer3, 0, lpf3, 1);
AudioConnection patchCord169(lpf5, envelope5);
AudioConnection patchCord170(lpf3, envelope3);
AudioConnection patchCord171(lpf_mod_mixer4, 0, lpf4, 1);
AudioConnection patchCord172(lpf2, envelope2);
AudioConnection patchCord173(lpf_mod_mixer6, 0, lpf6, 1);
AudioConnection patchCord174(lpf0, envelope0);
AudioConnection patchCord175(lpf1, envelope1);
AudioConnection patchCord176(lpf_mod_mixer7, 0, lpf7, 1);
AudioConnection patchCord177(envelope7, 0, envelope_mixer1, 3);
AudioConnection patchCord178(envelope4, 0, envelope_mixer1, 0);
AudioConnection patchCord179(envelope6, 0, envelope_mixer1, 2);
AudioConnection patchCord180(envelope5, 0, envelope_mixer1, 1);
AudioConnection patchCord181(envelope3, 0, envelope_mixer0, 3);
AudioConnection patchCord182(envelope2, 0, envelope_mixer0, 2);
AudioConnection patchCord183(envelope0, 0, envelope_mixer0, 0);
AudioConnection patchCord184(envelope1, 0, envelope_mixer0, 1);
AudioConnection patchCord185(envelope_mixer0, peak);
AudioConnection patchCord186(envelope_mixer0, 0, mixer_left, 0);
AudioConnection patchCord187(envelope_mixer0, 0, mixer_right, 0);
AudioConnection patchCord188(envelope_mixer1, 0, mixer_left, 1);
AudioConnection patchCord189(envelope_mixer1, 0, mixer_right, 1);
AudioConnection patchCord190(mixer_left, flanger_left);
AudioConnection patchCord191(mixer_right, flanger_right);
AudioConnection patchCord192(flanger_left, 0, antialias_left, 0);
AudioConnection patchCord193(flanger_right, 0, antialias_right, 0);
AudioConnection patchCord194(antialias_left, 0, i2s1, 0);
AudioConnection patchCord195(antialias_right, 0, i2s1, 1);
AudioControlSGTL5000 sgtl5000_1; // xy=2085,957
// GUItool: end automatically generated code
