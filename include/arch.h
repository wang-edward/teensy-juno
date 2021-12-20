#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     pwmDc;          //xy=316.33331298828125,490
AudioSynthWaveform       lfo;            //xy=390.33331298828125,300
AudioAmplifier           oscLfoAmp;      //xy=412.33331298828125,1040
AudioMixer4              pwmMixer;       //xy=412.33331298828125,1136
AudioSynthWaveformModulated sub7;           //xy=613.3333129882812,1758
AudioSynthWaveformModulated sub4;           //xy=615.3333129882812,1260
AudioSynthWaveformModulated saw7;           //xy=614.3333129882812,1719
AudioSynthWaveformModulated saw4;           //xy=616.3333129882812,1221
AudioSynthWaveformModulated sub6;           //xy=615.3333129882812,1592
AudioSynthWaveformModulated saw6;           //xy=616.3333129882812,1553
AudioSynthWaveformModulated sub5;           //xy=619.3333129882812,1428
AudioSynthWaveformModulated sub3;           //xy=621.3333129882812,1095
AudioSynthWaveformModulated saw5;           //xy=620.3333129882812,1389
AudioSynthNoiseWhite     noise7;         //xy=619.3333129882812,1797
AudioSynthNoiseWhite     noise4;         //xy=621.3333129882812,1299
AudioSynthWaveformModulated saw3;           //xy=622.3333129882812,1056
AudioSynthNoiseWhite     noise6;         //xy=621.3333129882812,1631
AudioSynthWaveformModulated pulseLFO7;      //xy=623.3333129882812,1678
AudioSynthWaveformModulated sub2;           //xy=626.3333129882812,929
AudioSynthWaveformModulated pulseLFO4;      //xy=625.3333129882812,1180
AudioSynthWaveformModulated saw2;           //xy=627.3333129882812,890
AudioSynthNoiseWhite     noise5;         //xy=625.3333129882812,1467
AudioSynthWaveformModulated pulseLFO6;      //xy=625.3333129882812,1512
AudioSynthWaveformModulated sub0;           //xy=629.3333129882812,585
AudioSynthNoiseWhite     noise3;         //xy=627.3333129882812,1134
AudioSynthWaveformModulated saw0;           //xy=630.3333129882812,546
AudioSynthWaveformModulated sub1;           //xy=630.3333129882812,758
AudioSynthWaveformModulated saw1;           //xy=631.3333129882812,719
AudioSynthWaveformModulated pulseLFO5;      //xy=629.3333129882812,1348
AudioSynthWaveformModulated pulseLFO3;      //xy=631.3333129882812,1015
AudioSynthNoiseWhite     noise2;         //xy=632.3333129882812,968
AudioSynthNoiseWhite     noise0;         //xy=636.3333129882812,625
AudioSynthNoiseWhite     noise1;         //xy=636.3333129882812,797
AudioSynthWaveformModulated pulseLFO2;      //xy=636.3333129882812,849
AudioSynthWaveformModulated pulseLFO0;      //xy=639.3333129882812,505
AudioEffectEnvelope      lfoEnv0;        //xy=641.333251953125,353
AudioSynthWaveformModulated pulseLFO1;      //xy=640.3333129882812,678
AudioSynthWaveformDc     lpfEnvDc;       //xy=735.3333129882812,295
AudioSynthWaveformDc     lpfKeyboardDc;  //xy=774.3333129882812,448
AudioSynthWaveformDc     lpfModWheelDc;  //xy=783.3333129882812,497
AudioMixer4              oscMixer7;      //xy=824.3333129882812,1748
AudioMixer4              oscMixer4;      //xy=826.3333129882812,1250
AudioMixer4              oscMixer6;      //xy=826.3333129882812,1582
AudioMixer4              oscMixer5;      //xy=830.3333129882812,1418
AudioMixer4              oscMixer3;      //xy=832.3333129882812,1085
AudioMixer4              oscMixer2;      //xy=837.3333129882812,919
AudioMixer4              oscMixer0;      //xy=841.3333129882812,576
AudioMixer4              oscMixer1;      //xy=841.3333129882812,748
AudioEffectEnvelope      lpfEnv1;        //xy=918.3333129882812,657
AudioEffectEnvelope      lpfEnv2;        //xy=921.3333129882812,818
AudioEffectEnvelope      lpfEnv5;        //xy=920.3333129882812,1325
AudioEffectEnvelope      lfoEnv2;        //xy=923.3333129882812,853
AudioEffectEnvelope      lpfEnv3;        //xy=923.3333129882812,998
AudioEffectEnvelope      lpfEnv4;        //xy=924.3333129882812,1155
AudioEffectEnvelope      lfoEnv4;        //xy=925.3333129882812,1189
AudioEffectEnvelope      lfoEnv3;        //xy=927.3333129882812,1033
AudioEffectEnvelope      lfoEnv5;        //xy=926.3333129882812,1363
AudioEffectEnvelope      lpfEnv6;        //xy=927.3333129882812,1493
AudioEffectEnvelope      lfoEnv1;        //xy=931.3333129882812,697
AudioEffectEnvelope      lfoEnv7;        //xy=929.3333129882812,1698
AudioEffectEnvelope      lfoEnv6;        //xy=930.3333129882812,1532
AudioEffectEnvelope      lpfEnv7;        //xy=930.3333129882812,1662
AudioEffectEnvelope      lpfEnv0;        //xy=964.3333129882812,364
AudioFilterStateVariable hpf7;           //xy=967.3333129882812,1759
AudioFilterStateVariable hpf4;           //xy=969.3333129882812,1261
AudioFilterStateVariable hpf6;           //xy=969.3333129882812,1593
AudioFilterStateVariable hpf5;           //xy=973.3333129882812,1429
AudioFilterStateVariable hpf3;           //xy=975.3333129882812,1096
AudioFilterStateVariable hpf2;           //xy=980.3333129882812,930
AudioFilterStateVariable hpf0;           //xy=984.3333129882812,587
AudioFilterStateVariable hpf1;           //xy=984.3333129882812,759
AudioMixer4              lpfModMixer0;   //xy=1075.3333129882812,516
AudioMixer4              lpfModMixer1;   //xy=1102.3333129882812,698
AudioFilterStateVariable lpf7;           //xy=1100.3333129882812,1779
AudioFilterStateVariable lpf4;           //xy=1102.3333129882812,1281
AudioMixer4              lpfModMixer2;   //xy=1105.3333129882812,859
AudioFilterStateVariable lpf6;           //xy=1102.3333129882812,1613
AudioMixer4              lpfModMixer5;   //xy=1104.3333129882812,1366
AudioMixer4              lpfModMixer3;   //xy=1107.3333129882812,1039
AudioFilterStateVariable lpf5;           //xy=1106.3333129882812,1449
AudioFilterStateVariable lpf3;           //xy=1108.3333129882812,1116
AudioMixer4              lpfModMixer4;   //xy=1108.3333129882812,1196
AudioFilterStateVariable lpf2;           //xy=1113.3333129882812,950
AudioMixer4              lpfModMixer6;   //xy=1111.3333129882812,1534
AudioFilterStateVariable lpf0;           //xy=1117.3333129882812,607
AudioFilterStateVariable lpf1;           //xy=1117.3333129882812,779
AudioMixer4              lpfModMixer7;   //xy=1114.3333129882812,1703
AudioEffectEnvelope      env7;           //xy=1238.3333129882812,1779
AudioEffectEnvelope      env4;           //xy=1240.3333129882812,1281
AudioEffectEnvelope      env6;           //xy=1240.3333129882812,1613
AudioEffectEnvelope      env5;           //xy=1244.3333129882812,1449
AudioAmplifier           lpfPolarity;    //xy=1248.3333129882812,454
AudioEffectEnvelope      env3;           //xy=1246.3333129882812,1116
AudioEffectEnvelope      env2;           //xy=1251.3333129882812,950
AudioEffectEnvelope      env0;           //xy=1255.3333129882812,607
AudioEffectEnvelope      env1;           //xy=1255.3333129882812,779
AudioMixer4              EnvMixer0;      //xy=1496.3333129882812,881
AudioMixer4              EnvMixer1;      //xy=1519.3333129882812,1559
AudioMixer4              mixerL;         //xy=1749.3333129882812,1165
AudioMixer4              mixerR;         //xy=1756.3333129882812,1401
AudioEffectFlange        flangerL;       //xy=1929.3333129882812,1253
AudioEffectFlange        flangerR;       //xy=1934.3333129882812,1378
AudioAnalyzePeak         peak;           //xy=1953.3333129882812,729
AudioOutputI2S           i2s1;           //xy=2125.3333129882812,1305
AudioConnection          patchCord1(pwmDc, 0, pwmMixer, 1);
AudioConnection          patchCord2(lfo, lfoEnv0);
AudioConnection          patchCord3(lfo, lfoEnv2);
AudioConnection          patchCord4(lfo, lfoEnv1);
AudioConnection          patchCord5(lfo, lfoEnv3);
AudioConnection          patchCord6(lfo, lfoEnv4);
AudioConnection          patchCord7(lfo, lfoEnv5);
AudioConnection          patchCord8(lfo, lfoEnv6);
AudioConnection          patchCord9(lfo, lfoEnv7);
AudioConnection          patchCord10(oscLfoAmp, 0, pulseLFO0, 0);
AudioConnection          patchCord11(oscLfoAmp, 0, sub0, 0);
AudioConnection          patchCord12(oscLfoAmp, 0, pulseLFO1, 0);
AudioConnection          patchCord13(oscLfoAmp, 0, sub1, 0);
AudioConnection          patchCord14(oscLfoAmp, 0, pulseLFO2, 0);
AudioConnection          patchCord15(oscLfoAmp, 0, sub2, 0);
AudioConnection          patchCord16(oscLfoAmp, 0, pulseLFO3, 0);
AudioConnection          patchCord17(oscLfoAmp, 0, sub3, 0);
AudioConnection          patchCord18(oscLfoAmp, 0, pulseLFO4, 0);
AudioConnection          patchCord19(oscLfoAmp, 0, sub4, 0);
AudioConnection          patchCord20(oscLfoAmp, 0, pulseLFO5, 0);
AudioConnection          patchCord21(oscLfoAmp, 0, sub5, 0);
AudioConnection          patchCord22(oscLfoAmp, 0, pulseLFO6, 0);
AudioConnection          patchCord23(oscLfoAmp, 0, sub6, 0);
AudioConnection          patchCord24(oscLfoAmp, 0, pulseLFO7, 0);
AudioConnection          patchCord25(oscLfoAmp, 0, sub7, 0);
AudioConnection          patchCord26(oscLfoAmp, 0, saw0, 0);
AudioConnection          patchCord27(oscLfoAmp, 0, saw1, 0);
AudioConnection          patchCord28(oscLfoAmp, 0, saw2, 0);
AudioConnection          patchCord29(oscLfoAmp, 0, saw3, 0);
AudioConnection          patchCord30(oscLfoAmp, 0, saw4, 0);
AudioConnection          patchCord31(oscLfoAmp, 0, saw5, 0);
AudioConnection          patchCord32(oscLfoAmp, 0, saw6, 0);
AudioConnection          patchCord33(oscLfoAmp, 0, saw7, 0);
AudioConnection          patchCord34(pwmMixer, 0, pulseLFO0, 1);
AudioConnection          patchCord35(pwmMixer, 0, pulseLFO1, 1);
AudioConnection          patchCord36(pwmMixer, 0, pulseLFO2, 1);
AudioConnection          patchCord37(pwmMixer, 0, pulseLFO3, 1);
AudioConnection          patchCord38(pwmMixer, 0, pulseLFO4, 1);
AudioConnection          patchCord39(pwmMixer, 0, pulseLFO5, 1);
AudioConnection          patchCord40(pwmMixer, 0, pulseLFO6, 1);
AudioConnection          patchCord41(pwmMixer, 0, pulseLFO7, 1);
AudioConnection          patchCord42(pwmMixer, 0, sub0, 1);
AudioConnection          patchCord43(pwmMixer, 0, sub1, 1);
AudioConnection          patchCord44(pwmMixer, 0, sub2, 1);
AudioConnection          patchCord45(pwmMixer, 0, sub3, 1);
AudioConnection          patchCord46(pwmMixer, 0, sub4, 1);
AudioConnection          patchCord47(pwmMixer, 0, sub5, 1);
AudioConnection          patchCord48(pwmMixer, 0, sub6, 1);
AudioConnection          patchCord49(pwmMixer, 0, sub7, 1);
AudioConnection          patchCord50(sub7, 0, oscMixer7, 2);
AudioConnection          patchCord51(sub4, 0, oscMixer4, 2);
AudioConnection          patchCord52(saw7, 0, oscMixer7, 1);
AudioConnection          patchCord53(saw4, 0, oscMixer4, 1);
AudioConnection          patchCord54(sub6, 0, oscMixer6, 2);
AudioConnection          patchCord55(saw6, 0, oscMixer6, 1);
AudioConnection          patchCord56(sub5, 0, oscMixer5, 2);
AudioConnection          patchCord57(sub3, 0, oscMixer3, 2);
AudioConnection          patchCord58(saw5, 0, oscMixer5, 1);
AudioConnection          patchCord59(noise7, 0, oscMixer7, 3);
AudioConnection          patchCord60(noise4, 0, oscMixer4, 3);
AudioConnection          patchCord61(saw3, 0, oscMixer3, 1);
AudioConnection          patchCord62(noise6, 0, oscMixer6, 3);
AudioConnection          patchCord63(pulseLFO7, 0, oscMixer7, 0);
AudioConnection          patchCord64(sub2, 0, oscMixer2, 2);
AudioConnection          patchCord65(pulseLFO4, 0, oscMixer4, 0);
AudioConnection          patchCord66(saw2, 0, oscMixer2, 1);
AudioConnection          patchCord67(noise5, 0, oscMixer5, 3);
AudioConnection          patchCord68(pulseLFO6, 0, oscMixer6, 0);
AudioConnection          patchCord69(sub0, 0, oscMixer0, 2);
AudioConnection          patchCord70(noise3, 0, oscMixer3, 3);
AudioConnection          patchCord71(saw0, 0, oscMixer0, 1);
AudioConnection          patchCord72(sub1, 0, oscMixer1, 2);
AudioConnection          patchCord73(saw1, 0, oscMixer1, 1);
AudioConnection          patchCord74(pulseLFO5, 0, oscMixer5, 0);
AudioConnection          patchCord75(pulseLFO3, 0, oscMixer3, 0);
AudioConnection          patchCord76(noise2, 0, oscMixer2, 3);
AudioConnection          patchCord77(noise0, 0, oscMixer0, 3);
AudioConnection          patchCord78(noise1, 0, oscMixer1, 3);
AudioConnection          patchCord79(pulseLFO2, 0, oscMixer2, 0);
AudioConnection          patchCord80(pulseLFO0, 0, oscMixer0, 0);
AudioConnection          patchCord81(lfoEnv0, 0, lpfModMixer0, 1);
AudioConnection          patchCord82(lfoEnv0, oscLfoAmp);
AudioConnection          patchCord83(lfoEnv0, 0, pwmMixer, 0);
AudioConnection          patchCord84(pulseLFO1, 0, oscMixer1, 0);
AudioConnection          patchCord85(lpfEnvDc, lpfEnv0);
AudioConnection          patchCord86(lpfEnvDc, lpfEnv1);
AudioConnection          patchCord87(lpfEnvDc, lpfEnv2);
AudioConnection          patchCord88(lpfEnvDc, lpfEnv3);
AudioConnection          patchCord89(lpfEnvDc, lpfEnv4);
AudioConnection          patchCord90(lpfEnvDc, lpfEnv5);
AudioConnection          patchCord91(lpfEnvDc, lpfEnv6);
AudioConnection          patchCord92(lpfEnvDc, lpfEnv7);
AudioConnection          patchCord93(lpfKeyboardDc, 0, lpfModMixer0, 2);
AudioConnection          patchCord94(lpfKeyboardDc, 0, lpfModMixer1, 2);
AudioConnection          patchCord95(lpfKeyboardDc, 0, lpfModMixer2, 2);
AudioConnection          patchCord96(lpfKeyboardDc, 0, lpfModMixer3, 2);
AudioConnection          patchCord97(lpfKeyboardDc, 0, lpfModMixer4, 2);
AudioConnection          patchCord98(lpfKeyboardDc, 0, lpfModMixer5, 2);
AudioConnection          patchCord99(lpfKeyboardDc, 0, lpfModMixer6, 2);
AudioConnection          patchCord100(lpfKeyboardDc, 0, lpfModMixer7, 2);
AudioConnection          patchCord101(lpfModWheelDc, 0, lpfModMixer0, 3);
AudioConnection          patchCord102(lpfModWheelDc, 0, lpfModMixer1, 3);
AudioConnection          patchCord103(lpfModWheelDc, 0, lpfModMixer2, 3);
AudioConnection          patchCord104(lpfModWheelDc, 0, lpfModMixer3, 3);
AudioConnection          patchCord105(lpfModWheelDc, 0, lpfModMixer4, 3);
AudioConnection          patchCord106(lpfModWheelDc, 0, lpfModMixer5, 3);
AudioConnection          patchCord107(lpfModWheelDc, 0, lpfModMixer6, 3);
AudioConnection          patchCord108(lpfModWheelDc, 0, lpfModMixer7, 3);
AudioConnection          patchCord109(oscMixer7, 0, hpf7, 0);
AudioConnection          patchCord110(oscMixer4, 0, hpf4, 0);
AudioConnection          patchCord111(oscMixer6, 0, hpf6, 0);
AudioConnection          patchCord112(oscMixer5, 0, hpf5, 0);
AudioConnection          patchCord113(oscMixer3, 0, hpf3, 0);
AudioConnection          patchCord114(oscMixer2, 0, hpf2, 0);
AudioConnection          patchCord115(oscMixer0, 0, hpf0, 0);
AudioConnection          patchCord116(oscMixer1, 0, hpf1, 0);
AudioConnection          patchCord117(lpfEnv1, 0, lpfModMixer1, 0);
AudioConnection          patchCord118(lpfEnv2, 0, lpfModMixer2, 0);
AudioConnection          patchCord119(lpfEnv5, 0, lpfModMixer5, 0);
AudioConnection          patchCord120(lfoEnv2, 0, lpfModMixer2, 1);
AudioConnection          patchCord121(lpfEnv3, 0, lpfModMixer3, 0);
AudioConnection          patchCord122(lpfEnv4, 0, lpfModMixer4, 0);
AudioConnection          patchCord123(lfoEnv4, 0, lpfModMixer4, 1);
AudioConnection          patchCord124(lfoEnv3, 0, lpfModMixer3, 1);
AudioConnection          patchCord125(lfoEnv5, 0, lpfModMixer5, 1);
AudioConnection          patchCord126(lpfEnv6, 0, lpfModMixer6, 0);
AudioConnection          patchCord127(lfoEnv1, 0, lpfModMixer1, 1);
AudioConnection          patchCord128(lfoEnv7, 0, lpfModMixer7, 1);
AudioConnection          patchCord129(lfoEnv6, 0, lpfModMixer6, 1);
AudioConnection          patchCord130(lpfEnv7, 0, lpfModMixer7, 0);
AudioConnection          patchCord131(lpfEnv0, 0, lpfModMixer0, 0);
AudioConnection          patchCord132(hpf7, 2, lpf7, 0);
AudioConnection          patchCord133(hpf4, 2, lpf4, 0);
AudioConnection          patchCord134(hpf6, 2, lpf6, 0);
AudioConnection          patchCord135(hpf5, 2, lpf5, 0);
AudioConnection          patchCord136(hpf3, 2, lpf3, 0);
AudioConnection          patchCord137(hpf2, 2, lpf2, 0);
AudioConnection          patchCord138(hpf0, 2, lpf0, 0);
AudioConnection          patchCord139(hpf1, 2, lpf1, 0);
AudioConnection          patchCord140(lpfModMixer0, 0, lpf0, 1);
AudioConnection          patchCord141(lpfModMixer1, 0, lpf1, 1);
AudioConnection          patchCord142(lpf7, 0, env7, 0);
AudioConnection          patchCord143(lpf4, 0, env4, 0);
AudioConnection          patchCord144(lpfModMixer2, 0, lpf2, 1);
AudioConnection          patchCord145(lpf6, 0, env6, 0);
AudioConnection          patchCord146(lpfModMixer5, 0, lpf5, 1);
AudioConnection          patchCord147(lpfModMixer3, 0, lpf3, 1);
AudioConnection          patchCord148(lpf5, 0, env5, 0);
AudioConnection          patchCord149(lpf3, 0, env3, 0);
AudioConnection          patchCord150(lpfModMixer4, 0, lpf4, 1);
AudioConnection          patchCord151(lpf2, 0, env2, 0);
AudioConnection          patchCord152(lpfModMixer6, 0, lpf6, 1);
AudioConnection          patchCord153(lpf0, 0, env0, 0);
AudioConnection          patchCord154(lpf1, 0, env1, 0);
AudioConnection          patchCord155(lpfModMixer7, 0, lpf7, 1);
AudioConnection          patchCord156(env7, 0, EnvMixer1, 3);
AudioConnection          patchCord157(env4, 0, EnvMixer1, 0);
AudioConnection          patchCord158(env6, 0, EnvMixer1, 2);
AudioConnection          patchCord159(env5, 0, EnvMixer1, 1);
AudioConnection          patchCord160(env3, 0, EnvMixer0, 3);
AudioConnection          patchCord161(env2, 0, EnvMixer0, 2);
AudioConnection          patchCord162(env0, 0, EnvMixer0, 0);
AudioConnection          patchCord163(env1, 0, EnvMixer0, 1);
AudioConnection          patchCord164(EnvMixer0, peak);
AudioConnection          patchCord165(EnvMixer0, 0, mixerL, 0);
AudioConnection          patchCord166(EnvMixer0, 0, mixerR, 0);
AudioConnection          patchCord167(EnvMixer1, 0, mixerL, 1);
AudioConnection          patchCord168(EnvMixer1, 0, mixerR, 1);
AudioConnection          patchCord169(mixerL, flangerL);
AudioConnection          patchCord170(mixerR, flangerR);
AudioConnection          patchCord171(flangerL, 0, i2s1, 0);
AudioConnection          patchCord172(flangerR, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1906.3333129882812,1059
// GUItool: end automatically generated code