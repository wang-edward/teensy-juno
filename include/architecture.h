#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo;            //xy=81.28330993652344,865
AudioSynthWaveformDc     pwm_dc;            //xy=94,936
AudioEffectEnvelope      lfo_envelope0;  //xy=312.2832946777344,340
AudioEffectEnvelope      lfo_envelope1;  //xy=332.2833557128906,505
AudioEffectEnvelope      lfo_envelope2;  //xy=344.2833557128906,689
AudioEffectEnvelope      lfo_envelope3;  //xy=344.2833557128906,842
AudioEffectEnvelope      lfo_envelope5;  //xy=355.2833557128906,1180
AudioEffectEnvelope      lfo_envelope7;  //xy=355.2833557128906,1517.0000610351562
AudioEffectEnvelope      lfo_envelope4;  //xy=359.2833557128906,1010
AudioEffectEnvelope      lfo_envelope6;  //xy=365.2833557128906,1349
AudioAmplifier           osc_lfo_amp0;    //xy=482.2833251953125,369.9999694824219
AudioAmplifier           osc_lfo_amp3; //xy=487.16668701171875,886.1666870117188
AudioMixer4              pwm_mixer1; //xy=495.36669921875,449.56671142578125
AudioMixer4              pwm_mixer2; //xy=497.36669921875,636.566650390625
AudioMixer4              pwm_mixer0;      //xy=499.2833251953125,254.99996948242188
AudioAmplifier           osc_lfo_amp5; //xy=503.16668701171875,1234.1666259765625
AudioMixer4              pwm_mixer3; //xy=508.36669921875,798.566650390625
AudioAmplifier           osc_lfo_amp1; //xy=513.1666870117188,559.166748046875
AudioAmplifier           osc_lfo_amp4; //xy=511.16668701171875,1062.1665649414062
AudioMixer4              pwm_mixer6; //xy=519.36669921875,1297.1666259765625
AudioMixer4              pwm_mixer5; //xy=520.36669921875,1140.1665649414062
AudioAmplifier           osc_lfo_amp2; //xy=522.1666870117188,738.1666870117188
AudioAmplifier           osc_lfo_amp6; //xy=524.1666870117188,1399.1666259765625
AudioMixer4              pwm_mixer4; //xy=528.36669921875,966.1666259765625
AudioMixer4              pwm_mixer7;  //xy=539.36669921875,1476.36669921875
AudioAmplifier           osc_lfo_amp7; //xy=556.166748046875,1580.1666870117188
AudioSynthWaveformModulated sub7;           //xy=712.2833251953125,1618
AudioSynthWaveformModulated sub4;           //xy=714.2833251953125,1120
AudioSynthWaveformModulated saw7;           //xy=713.2833251953125,1579
AudioSynthWaveformModulated saw4;           //xy=715.2833251953125,1081
AudioSynthWaveformModulated sub6;           //xy=714.2833251953125,1452
AudioSynthWaveformModulated saw6;           //xy=715.2833251953125,1413
AudioSynthWaveformModulated sub5;           //xy=718.2833251953125,1288
AudioSynthWaveformModulated sub3;           //xy=720.2833251953125,955
AudioSynthWaveformModulated saw5;           //xy=719.2833251953125,1249
AudioSynthNoiseWhite     noise7;         //xy=718.2833251953125,1657
AudioSynthNoiseWhite     noise4;         //xy=720.2833251953125,1159
AudioSynthWaveformModulated saw3;           //xy=721.2833251953125,916
AudioSynthNoiseWhite     noise6;         //xy=720.2833251953125,1491
AudioSynthWaveformModulated pulse_lfo7;     //xy=722.2833251953125,1538
AudioSynthWaveformModulated sub2;           //xy=725.2833251953125,789
AudioSynthWaveformModulated pulse_lfo4;     //xy=724.2833251953125,1040
AudioSynthWaveformModulated saw2;           //xy=726.2833251953125,750
AudioSynthNoiseWhite     noise5;         //xy=724.2833251953125,1327
AudioSynthWaveformModulated pulse_lfo6;     //xy=724.2833251953125,1372
AudioSynthWaveformModulated sub0;           //xy=728.2833251953125,445
AudioSynthNoiseWhite     noise3;         //xy=726.2833251953125,994
AudioSynthWaveformModulated saw0;           //xy=729.2833251953125,406
AudioSynthWaveformModulated sub1;           //xy=729.2833251953125,618
AudioSynthWaveformModulated saw1;           //xy=730.2833251953125,579
AudioSynthWaveformModulated pulse_lfo5;     //xy=728.2833251953125,1208
AudioSynthWaveformModulated pulse_lfo3;     //xy=730.2833251953125,875
AudioSynthNoiseWhite     noise2;         //xy=731.2833251953125,828
AudioSynthNoiseWhite     noise0;         //xy=735.2833251953125,485
AudioSynthNoiseWhite     noise1;         //xy=735.2833251953125,657
AudioSynthWaveformModulated pulse_lfo2;     //xy=735.2833251953125,709
AudioSynthWaveformModulated pulse_lfo0;     //xy=738.2833251953125,365
AudioSynthWaveformModulated pulse_lfo1;     //xy=739.2833251953125,538
AudioSynthWaveformDc     lpf_envelope_dc; //xy=834.2833251953125,155
AudioSynthWaveformDc     lpf_keyboard_dc; //xy=837.2833251953125,225
AudioSynthWaveformDc     lpf_mod_wheel_dc; //xy=850.2833251953125,262
AudioMixer4              osc_mixer7;     //xy=923.2833251953125,1608
AudioMixer4              osc_mixer4;     //xy=925.2833251953125,1110
AudioMixer4              osc_mixer6;     //xy=925.2833251953125,1442
AudioMixer4              osc_mixer5;     //xy=929.2833251953125,1278
AudioMixer4              osc_mixer3;     //xy=931.2833251953125,945
AudioMixer4              osc_mixer2;     //xy=936.2833251953125,779
AudioMixer4              osc_mixer0;     //xy=940.2833251953125,436
AudioMixer4              osc_mixer1;     //xy=940.2833251953125,608
AudioEffectEnvelope      lpf_envelope1;  //xy=1017.2833251953125,517
AudioEffectEnvelope      lpf_envelope3;  //xy=1016.2833862304688,848
AudioEffectEnvelope      lpf_envelope2;  //xy=1020.2833251953125,678
AudioEffectEnvelope      lpf_envelope5;  //xy=1019.2833251953125,1185
AudioEffectEnvelope      lpf_envelope4;  //xy=1023.2833251953125,1015
AudioEffectEnvelope      lpf_envelope6;  //xy=1026.2833251953125,1353
AudioEffectEnvelope      lpf_envelope7;  //xy=1029.2833251953125,1522
AudioEffectEnvelope      lpf_envelope0;  //xy=1063.2833251953125,224
AudioFilterStateVariable hpf7;           //xy=1066.2833251953125,1619
AudioFilterStateVariable hpf4;           //xy=1068.2833251953125,1121
AudioFilterStateVariable hpf6;           //xy=1068.2833251953125,1453
AudioFilterStateVariable hpf5;           //xy=1072.2833251953125,1289
AudioFilterStateVariable hpf3;           //xy=1074.2833251953125,956
AudioFilterStateVariable hpf2;           //xy=1079.2833251953125,790
AudioFilterStateVariable hpf0;           //xy=1083.2833251953125,447
AudioFilterStateVariable hpf1;           //xy=1083.2833251953125,619
AudioMixer4              lpf_mod_mixer0; //xy=1174.2833251953125,376
AudioMixer4              lpf_mod_mixer1; //xy=1201.2833251953125,558
AudioFilterLadder        lpf7;           //xy=1199.2833251953125,1639
AudioFilterLadder        lpf4;           //xy=1201.2833251953125,1141
AudioMixer4              lpf_mod_mixer2; //xy=1204.2833251953125,719
AudioFilterLadder        lpf6;           //xy=1201.2833251953125,1473
AudioMixer4              lpf_mod_mixer5; //xy=1203.2833251953125,1226
AudioMixer4              lpf_mod_mixer3; //xy=1206.2833251953125,899
AudioFilterLadder        lpf5;           //xy=1205.2833251953125,1309
AudioFilterLadder        lpf3;           //xy=1207.2833251953125,976
AudioMixer4              lpf_mod_mixer4; //xy=1207.2833251953125,1056
AudioFilterLadder        lpf2;           //xy=1212.2833251953125,810
AudioMixer4              lpf_mod_mixer6; //xy=1210.2833251953125,1394
AudioFilterLadder        lpf0;           //xy=1216.2833251953125,467
AudioFilterLadder        lpf1;           //xy=1216.2833251953125,639
AudioMixer4              lpf_mod_mixer7; //xy=1213.2833251953125,1563
AudioEffectEnvelope      envelope7;      //xy=1337.2833251953125,1639
AudioEffectEnvelope      envelope4;      //xy=1339.2833251953125,1141
AudioEffectEnvelope      envelope6;      //xy=1339.2833251953125,1473
AudioEffectEnvelope      envelope5;      //xy=1343.2833251953125,1309
AudioAmplifier           lpf_polarity;   //xy=1347.2833251953125,314
AudioEffectEnvelope      envelope3;      //xy=1345.2833251953125,976
AudioEffectEnvelope      envelope2;      //xy=1350.2833251953125,810
AudioEffectEnvelope      envelope0;      //xy=1354.2833251953125,467
AudioEffectEnvelope      envelope1;      //xy=1354.2833251953125,639
AudioMixer4              env_mixer0;     //xy=1595.2833251953125,741
AudioMixer4              env_mixer1;     //xy=1618.2833251953125,1419
AudioMixer4              mixer_left;     //xy=1848.2833251953125,1025
AudioMixer4              mixer_right;    //xy=1855.2833251953125,1261
AudioEffectFlange        flanger_left;   //xy=2028.2833251953125,1113
AudioEffectFlange        flanger_right;  //xy=2033.2833251953125,1238
AudioAnalyzePeak         peak;           //xy=2052.2833251953125,589
AudioFilterStateVariable antialias_left;        //xy=2265.166748046875,1111.1665649414062
AudioFilterStateVariable antialias_right;        //xy=2277.166748046875,1228.1665649414062
AudioOutputI2S           i2s1;           //xy=2450.2832794189453,1159.9998931884766
AudioConnection          patchCord1(lfo, lfo_envelope0);
AudioConnection          patchCord2(lfo, lfo_envelope2);
AudioConnection          patchCord3(lfo, lfo_envelope1);
AudioConnection          patchCord4(lfo, lfo_envelope3);
AudioConnection          patchCord5(lfo, lfo_envelope4);
AudioConnection          patchCord6(lfo, lfo_envelope5);
AudioConnection          patchCord7(lfo, lfo_envelope6);
AudioConnection          patchCord8(lfo, lfo_envelope7);
AudioConnection          patchCord9(pwm_dc, 0, pwm_mixer0, 1);
AudioConnection          patchCord10(pwm_dc, 0, pwm_mixer1, 1);
AudioConnection          patchCord11(pwm_dc, 0, pwm_mixer2, 1);
AudioConnection          patchCord12(pwm_dc, 0, pwm_mixer3, 1);
AudioConnection          patchCord13(pwm_dc, 0, pwm_mixer4, 1);
AudioConnection          patchCord14(pwm_dc, 0, pwm_mixer5, 1);
AudioConnection          patchCord15(pwm_dc, 0, pwm_mixer6, 1);
AudioConnection          patchCord16(pwm_dc, 0, pwm_mixer7, 1);
AudioConnection          patchCord17(lfo_envelope0, 0, lpf_mod_mixer0, 1);
AudioConnection          patchCord18(lfo_envelope0, osc_lfo_amp0);
AudioConnection          patchCord19(lfo_envelope0, 0, pwm_mixer0, 0);
AudioConnection          patchCord20(lfo_envelope1, 0, lpf_mod_mixer1, 1);
AudioConnection          patchCord21(lfo_envelope1, osc_lfo_amp1);
AudioConnection          patchCord22(lfo_envelope1, 0, pwm_mixer1, 0);
AudioConnection          patchCord23(lfo_envelope2, 0, lpf_mod_mixer2, 1);
AudioConnection          patchCord24(lfo_envelope2, osc_lfo_amp2);
AudioConnection          patchCord25(lfo_envelope2, 0, pwm_mixer2, 0);
AudioConnection          patchCord26(lfo_envelope3, 0, lpf_mod_mixer3, 1);
AudioConnection          patchCord27(lfo_envelope3, osc_lfo_amp3);
AudioConnection          patchCord28(lfo_envelope3, 0, pwm_mixer3, 0);
AudioConnection          patchCord29(lfo_envelope5, 0, lpf_mod_mixer5, 1);
AudioConnection          patchCord30(lfo_envelope5, osc_lfo_amp5);
AudioConnection          patchCord31(lfo_envelope5, 0, pwm_mixer5, 0);
AudioConnection          patchCord32(lfo_envelope7, 0, lpf_mod_mixer7, 1);
AudioConnection          patchCord33(lfo_envelope7, osc_lfo_amp7);
AudioConnection          patchCord34(lfo_envelope7, 0, pwm_mixer7, 0);
AudioConnection          patchCord35(lfo_envelope4, 0, lpf_mod_mixer4, 1);
AudioConnection          patchCord36(lfo_envelope4, osc_lfo_amp4);
AudioConnection          patchCord37(lfo_envelope4, 0, pwm_mixer4, 0);
AudioConnection          patchCord38(lfo_envelope6, 0, lpf_mod_mixer6, 1);
AudioConnection          patchCord39(lfo_envelope6, osc_lfo_amp6);
AudioConnection          patchCord40(lfo_envelope6, 0, pwm_mixer6, 0);
AudioConnection          patchCord41(osc_lfo_amp0, 0, pulse_lfo0, 0);
AudioConnection          patchCord42(osc_lfo_amp0, 0, sub0, 0);
AudioConnection          patchCord43(osc_lfo_amp0, 0, saw0, 0);
AudioConnection          patchCord44(osc_lfo_amp3, 0, pulse_lfo3, 0);
AudioConnection          patchCord45(osc_lfo_amp3, 0, saw3, 0);
AudioConnection          patchCord46(osc_lfo_amp3, 0, sub3, 0);
AudioConnection          patchCord47(pwm_mixer1, 0, pulse_lfo1, 1);
AudioConnection          patchCord48(pwm_mixer1, 0, sub1, 1);
AudioConnection          patchCord49(pwm_mixer2, 0, pulse_lfo2, 1);
AudioConnection          patchCord50(pwm_mixer2, 0, sub2, 1);
AudioConnection          patchCord51(pwm_mixer0, 0, sub0, 1);
AudioConnection          patchCord52(pwm_mixer0, 0, pulse_lfo0, 1);
AudioConnection          patchCord53(osc_lfo_amp5, 0, pulse_lfo5, 0);
AudioConnection          patchCord54(osc_lfo_amp5, 0, saw5, 0);
AudioConnection          patchCord55(osc_lfo_amp5, 0, sub5, 0);
AudioConnection          patchCord56(pwm_mixer3, 0, pulse_lfo3, 1);
AudioConnection          patchCord57(pwm_mixer3, 0, sub3, 1);
AudioConnection          patchCord58(osc_lfo_amp1, 0, pulse_lfo1, 0);
AudioConnection          patchCord59(osc_lfo_amp1, 0, saw1, 0);
AudioConnection          patchCord60(osc_lfo_amp1, 0, sub1, 0);
AudioConnection          patchCord61(osc_lfo_amp4, 0, pulse_lfo4, 0);
AudioConnection          patchCord62(osc_lfo_amp4, 0, saw4, 0);
AudioConnection          patchCord63(osc_lfo_amp4, 0, sub4, 0);
AudioConnection          patchCord64(pwm_mixer6, 0, pulse_lfo6, 1);
AudioConnection          patchCord65(pwm_mixer6, 0, sub6, 1);
AudioConnection          patchCord66(pwm_mixer5, 0, pulse_lfo5, 1);
AudioConnection          patchCord67(pwm_mixer5, 0, sub5, 1);
AudioConnection          patchCord68(osc_lfo_amp2, 0, pulse_lfo2, 0);
AudioConnection          patchCord69(osc_lfo_amp2, 0, saw2, 0);
AudioConnection          patchCord70(osc_lfo_amp2, 0, sub2, 0);
AudioConnection          patchCord71(osc_lfo_amp6, 0, pulse_lfo6, 0);
AudioConnection          patchCord72(osc_lfo_amp6, 0, saw6, 0);
AudioConnection          patchCord73(osc_lfo_amp6, 0, sub6, 0);
AudioConnection          patchCord74(pwm_mixer4, 0, pulse_lfo4, 1);
AudioConnection          patchCord75(pwm_mixer4, 0, sub4, 1);
AudioConnection          patchCord76(pwm_mixer7, 0, pulse_lfo7, 1);
AudioConnection          patchCord77(pwm_mixer7, 0, sub7, 1);
AudioConnection          patchCord78(osc_lfo_amp7, 0, pulse_lfo7, 0);
AudioConnection          patchCord79(osc_lfo_amp7, 0, saw7, 0);
AudioConnection          patchCord80(osc_lfo_amp7, 0, sub7, 0);
AudioConnection          patchCord81(sub7, 0, osc_mixer7, 2);
AudioConnection          patchCord82(sub4, 0, osc_mixer4, 2);
AudioConnection          patchCord83(saw7, 0, osc_mixer7, 1);
AudioConnection          patchCord84(saw4, 0, osc_mixer4, 1);
AudioConnection          patchCord85(sub6, 0, osc_mixer6, 2);
AudioConnection          patchCord86(saw6, 0, osc_mixer6, 1);
AudioConnection          patchCord87(sub5, 0, osc_mixer5, 2);
AudioConnection          patchCord88(sub3, 0, osc_mixer3, 2);
AudioConnection          patchCord89(saw5, 0, osc_mixer5, 1);
AudioConnection          patchCord90(noise7, 0, osc_mixer7, 3);
AudioConnection          patchCord91(noise4, 0, osc_mixer4, 3);
AudioConnection          patchCord92(saw3, 0, osc_mixer3, 1);
AudioConnection          patchCord93(noise6, 0, osc_mixer6, 3);
AudioConnection          patchCord94(pulse_lfo7, 0, osc_mixer7, 0);
AudioConnection          patchCord95(sub2, 0, osc_mixer2, 2);
AudioConnection          patchCord96(pulse_lfo4, 0, osc_mixer4, 0);
AudioConnection          patchCord97(saw2, 0, osc_mixer2, 1);
AudioConnection          patchCord98(noise5, 0, osc_mixer5, 3);
AudioConnection          patchCord99(pulse_lfo6, 0, osc_mixer6, 0);
AudioConnection          patchCord100(sub0, 0, osc_mixer0, 2);
AudioConnection          patchCord101(noise3, 0, osc_mixer3, 3);
AudioConnection          patchCord102(saw0, 0, osc_mixer0, 1);
AudioConnection          patchCord103(sub1, 0, osc_mixer1, 2);
AudioConnection          patchCord104(saw1, 0, osc_mixer1, 1);
AudioConnection          patchCord105(pulse_lfo5, 0, osc_mixer5, 0);
AudioConnection          patchCord106(pulse_lfo3, 0, osc_mixer3, 0);
AudioConnection          patchCord107(noise2, 0, osc_mixer2, 3);
AudioConnection          patchCord108(noise0, 0, osc_mixer0, 3);
AudioConnection          patchCord109(noise1, 0, osc_mixer1, 3);
AudioConnection          patchCord110(pulse_lfo2, 0, osc_mixer2, 0);
AudioConnection          patchCord111(pulse_lfo0, 0, osc_mixer0, 0);
AudioConnection          patchCord112(pulse_lfo1, 0, osc_mixer1, 0);
AudioConnection          patchCord113(lpf_envelope_dc, lpf_envelope0);
AudioConnection          patchCord114(lpf_envelope_dc, lpf_envelope1);
AudioConnection          patchCord115(lpf_envelope_dc, lpf_envelope2);
AudioConnection          patchCord116(lpf_envelope_dc, lpf_envelope3);
AudioConnection          patchCord117(lpf_envelope_dc, lpf_envelope4);
AudioConnection          patchCord118(lpf_envelope_dc, lpf_envelope5);
AudioConnection          patchCord119(lpf_envelope_dc, lpf_envelope6);
AudioConnection          patchCord120(lpf_envelope_dc, lpf_envelope7);
AudioConnection          patchCord121(lpf_keyboard_dc, 0, lpf_mod_mixer0, 2);
AudioConnection          patchCord122(lpf_keyboard_dc, 0, lpf_mod_mixer1, 2);
AudioConnection          patchCord123(lpf_keyboard_dc, 0, lpf_mod_mixer2, 2);
AudioConnection          patchCord124(lpf_keyboard_dc, 0, lpf_mod_mixer3, 2);
AudioConnection          patchCord125(lpf_keyboard_dc, 0, lpf_mod_mixer4, 2);
AudioConnection          patchCord126(lpf_keyboard_dc, 0, lpf_mod_mixer5, 2);
AudioConnection          patchCord127(lpf_keyboard_dc, 0, lpf_mod_mixer6, 2);
AudioConnection          patchCord128(lpf_keyboard_dc, 0, lpf_mod_mixer7, 2);
AudioConnection          patchCord129(lpf_mod_wheel_dc, 0, lpf_mod_mixer0, 3);
AudioConnection          patchCord130(lpf_mod_wheel_dc, 0, lpf_mod_mixer1, 3);
AudioConnection          patchCord131(lpf_mod_wheel_dc, 0, lpf_mod_mixer2, 3);
AudioConnection          patchCord132(lpf_mod_wheel_dc, 0, lpf_mod_mixer3, 3);
AudioConnection          patchCord133(lpf_mod_wheel_dc, 0, lpf_mod_mixer4, 3);
AudioConnection          patchCord134(lpf_mod_wheel_dc, 0, lpf_mod_mixer5, 3);
AudioConnection          patchCord135(lpf_mod_wheel_dc, 0, lpf_mod_mixer6, 3);
AudioConnection          patchCord136(lpf_mod_wheel_dc, 0, lpf_mod_mixer7, 3);
AudioConnection          patchCord137(osc_mixer7, 0, hpf7, 0);
AudioConnection          patchCord138(osc_mixer4, 0, hpf4, 0);
AudioConnection          patchCord139(osc_mixer6, 0, hpf6, 0);
AudioConnection          patchCord140(osc_mixer5, 0, hpf5, 0);
AudioConnection          patchCord141(osc_mixer3, 0, hpf3, 0);
AudioConnection          patchCord142(osc_mixer2, 0, hpf2, 0);
AudioConnection          patchCord143(osc_mixer0, 0, hpf0, 0);
AudioConnection          patchCord144(osc_mixer1, 0, hpf1, 0);
AudioConnection          patchCord145(lpf_envelope1, 0, lpf_mod_mixer1, 0);
AudioConnection          patchCord146(lpf_envelope3, 0, lpf_mod_mixer3, 0);
AudioConnection          patchCord147(lpf_envelope2, 0, lpf_mod_mixer2, 0);
AudioConnection          patchCord148(lpf_envelope5, 0, lpf_mod_mixer5, 0);
AudioConnection          patchCord149(lpf_envelope4, 0, lpf_mod_mixer4, 0);
AudioConnection          patchCord150(lpf_envelope6, 0, lpf_mod_mixer6, 0);
AudioConnection          patchCord151(lpf_envelope7, 0, lpf_mod_mixer7, 0);
AudioConnection          patchCord152(lpf_envelope0, 0, lpf_mod_mixer0, 0);
AudioConnection          patchCord153(hpf7, 2, lpf7, 0);
AudioConnection          patchCord154(hpf4, 2, lpf4, 0);
AudioConnection          patchCord155(hpf6, 2, lpf6, 0);
AudioConnection          patchCord156(hpf5, 2, lpf5, 0);
AudioConnection          patchCord157(hpf3, 2, lpf3, 0);
AudioConnection          patchCord158(hpf2, 2, lpf2, 0);
AudioConnection          patchCord159(hpf0, 2, lpf0, 0);
AudioConnection          patchCord160(hpf1, 2, lpf1, 0);
AudioConnection          patchCord161(lpf_mod_mixer0, 0, lpf0, 1);
AudioConnection          patchCord162(lpf_mod_mixer1, 0, lpf1, 1);
AudioConnection          patchCord163(lpf7, envelope7);
AudioConnection          patchCord164(lpf4, envelope4);
AudioConnection          patchCord165(lpf_mod_mixer2, 0, lpf2, 1);
AudioConnection          patchCord166(lpf6, envelope6);
AudioConnection          patchCord167(lpf_mod_mixer5, 0, lpf5, 1);
AudioConnection          patchCord168(lpf_mod_mixer3, 0, lpf3, 1);
AudioConnection          patchCord169(lpf5, envelope5);
AudioConnection          patchCord170(lpf3, envelope3);
AudioConnection          patchCord171(lpf_mod_mixer4, 0, lpf4, 1);
AudioConnection          patchCord172(lpf2, envelope2);
AudioConnection          patchCord173(lpf_mod_mixer6, 0, lpf6, 1);
AudioConnection          patchCord174(lpf0, envelope0);
AudioConnection          patchCord175(lpf1, envelope1);
AudioConnection          patchCord176(lpf_mod_mixer7, 0, lpf7, 1);
AudioConnection          patchCord177(envelope7, 0, env_mixer1, 3);
AudioConnection          patchCord178(envelope4, 0, env_mixer1, 0);
AudioConnection          patchCord179(envelope6, 0, env_mixer1, 2);
AudioConnection          patchCord180(envelope5, 0, env_mixer1, 1);
AudioConnection          patchCord181(envelope3, 0, env_mixer0, 3);
AudioConnection          patchCord182(envelope2, 0, env_mixer0, 2);
AudioConnection          patchCord183(envelope0, 0, env_mixer0, 0);
AudioConnection          patchCord184(envelope1, 0, env_mixer0, 1);
AudioConnection          patchCord185(env_mixer0, peak);
AudioConnection          patchCord186(env_mixer0, 0, mixer_left, 0);
AudioConnection          patchCord187(env_mixer0, 0, mixer_right, 0);
AudioConnection          patchCord188(env_mixer1, 0, mixer_left, 1);
AudioConnection          patchCord189(env_mixer1, 0, mixer_right, 1);
AudioConnection          patchCord190(mixer_left, flanger_left);
AudioConnection          patchCord191(mixer_right, flanger_right);
AudioConnection          patchCord192(flanger_left, 0, antialias_left, 0);
AudioConnection          patchCord193(flanger_right, 0, antialias_right, 0);
AudioConnection          patchCord194(antialias_left, 0, i2s1, 0);
AudioConnection          patchCord195(antialias_right, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2005.2833251953125,919
// GUItool: end automatically generated code
