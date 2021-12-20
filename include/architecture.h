#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     pwm_dc;         //xy=490.5,1739
AudioAmplifier           osc_lfo_amp;    //xy=586.5,2289
AudioMixer4              pwm_mixer;      //xy=586.5,2385
AudioSynthWaveformDc     lpf_envelope_dc; //xy=672.5,1560
AudioSynthWaveform       lfo;            //xy=689.5,1607
AudioSynthWaveformModulated sub7;           //xy=787.5,3007
AudioSynthWaveformModulated sub4;           //xy=789.5,2509
AudioSynthWaveformModulated saw7;           //xy=788.5,2968
AudioSynthWaveformModulated saw4;           //xy=790.5,2470
AudioSynthWaveformModulated sub6;           //xy=789.5,2841
AudioSynthWaveformModulated saw6;           //xy=790.5,2802
AudioSynthWaveformDc     lpf_mod_wheel_dc; //xy=796.5,1691
AudioSynthWaveformModulated sub5;           //xy=793.5,2677
AudioSynthWaveformModulated sub3;           //xy=795.5,2344
AudioSynthWaveformModulated saw5;           //xy=794.5,2638
AudioSynthNoiseWhite     noise7;         //xy=793.5,3046
AudioSynthNoiseWhite     noise4;         //xy=795.5,2548
AudioSynthWaveformModulated saw3;           //xy=796.5,2305
AudioSynthNoiseWhite     noise6;         //xy=795.5,2880
AudioSynthWaveformDc     lpf_keyboard_dc; //xy=800.5,1651
AudioSynthWaveformModulated pulse_lfo7;     //xy=797.5,2927
AudioSynthWaveformModulated sub2;           //xy=800.5,2178
AudioSynthWaveformModulated pulse_lfo4;     //xy=799.5,2429
AudioSynthWaveformModulated saw2;           //xy=801.5,2139
AudioSynthNoiseWhite     noise5;         //xy=799.5,2716
AudioSynthWaveformModulated pulse_lfo6;     //xy=799.5,2761
AudioSynthWaveformModulated sub0;           //xy=803.5,1834
AudioSynthNoiseWhite     noise3;         //xy=801.5,2383
AudioSynthWaveformModulated saw0;           //xy=804.5,1795
AudioSynthWaveformModulated sub1;           //xy=804.5,2007
AudioSynthWaveformModulated saw1;           //xy=805.5,1968
AudioSynthWaveformModulated pulse_lfo5;     //xy=803.5,2597
AudioSynthWaveformModulated pulse_lfo3;     //xy=805.5,2264
AudioEffectEnvelope      lfo_envelope;  //xy=808.5,1607
AudioSynthNoiseWhite     noise2;         //xy=806.5,2217
AudioSynthNoiseWhite     noise0;         //xy=810.5,1874
AudioSynthNoiseWhite     noise1;         //xy=810.5,2046
AudioSynthWaveformModulated pulse_lfo2;     //xy=810.5,2098
AudioSynthWaveformModulated pulse_lfo0;     //xy=813.5,1754
AudioEffectEnvelope      lpf_envelope;  //xy=814.4998779296875,1559
AudioSynthWaveformModulated pulse_lfo1;     //xy=814.5,1927
AudioMixer4              osc_mixer7;     //xy=998.5,2997
AudioMixer4              osc_mixer4;     //xy=1000.5,2499
AudioMixer4              osc_mixer6;     //xy=1000.5,2831
AudioMixer4              osc_mixer5;     //xy=1004.5,2667
AudioMixer4              osc_mixer3;     //xy=1006.5,2334
AudioMixer4              osc_mixer2;     //xy=1011.5,2168
AudioMixer4              osc_mixer0;     //xy=1015.5,1825
AudioMixer4              osc_mixer1;     //xy=1015.5,1997
AudioMixer4              lpf_mod_mixer; //xy=1071.5,1700
AudioFilterStateVariable hpf7;           //xy=1141.5,3008
AudioFilterStateVariable hpf4;           //xy=1143.5,2510
AudioFilterStateVariable hpf6;           //xy=1143.5,2842
AudioFilterStateVariable hpf5;           //xy=1147.5,2678
AudioFilterStateVariable hpf3;           //xy=1149.5,2345
AudioFilterStateVariable hpf2;           //xy=1154.5,2179
AudioFilterStateVariable hpf0;           //xy=1158.5,1836
AudioFilterStateVariable hpf1;           //xy=1158.5,2008
AudioFilterLadder        lpf7;           //xy=1274.5,3028
AudioFilterLadder        lpf4;           //xy=1276.5,2530
AudioFilterLadder        lpf6;           //xy=1276.5,2862
AudioFilterLadder        lpf5;           //xy=1280.5,2698
AudioFilterLadder        lpf3;           //xy=1282.5,2365
AudioFilterLadder        lpf2;           //xy=1287.5,2199
AudioFilterLadder        lpf0;           //xy=1291.5,1856
AudioFilterLadder        lpf1;           //xy=1291.5,2028
AudioEffectEnvelope      envelope7;      //xy=1412.5,3028
AudioEffectEnvelope      envelope4;      //xy=1414.5,2530
AudioEffectEnvelope      envelope6;      //xy=1414.5,2862
AudioEffectEnvelope      envelope5;      //xy=1418.5,2698
AudioEffectEnvelope      envelope3;      //xy=1420.5,2365
AudioEffectEnvelope      envelope2;      //xy=1425.5,2199
AudioEffectEnvelope      envelope0;      //xy=1429.5,1856
AudioEffectEnvelope      envelope1;      //xy=1429.5,2028
AudioMixer4              env_mixer0;     //xy=1670.5,2130
AudioMixer4              env_mixer1;     //xy=1693.5,2808
AudioMixer4              mixer_left;     //xy=1923.5,2414
AudioMixer4              mixer_right;    //xy=1930.5,2650
AudioEffectFlange        flanger_left;   //xy=2103.5,2502
AudioEffectFlange        flanger_right;  //xy=2108.5,2627
AudioAnalyzePeak         peak;           //xy=2127.5,1978
AudioOutputI2S           i2s1;           //xy=2299.5,2554
AudioConnection          patchCord1(pwm_dc, 0, pwm_mixer, 1);
AudioConnection          patchCord2(osc_lfo_amp, 0, pulse_lfo0, 0);
AudioConnection          patchCord3(osc_lfo_amp, 0, sub0, 0);
AudioConnection          patchCord4(osc_lfo_amp, 0, pulse_lfo1, 0);
AudioConnection          patchCord5(osc_lfo_amp, 0, sub1, 0);
AudioConnection          patchCord6(osc_lfo_amp, 0, pulse_lfo2, 0);
AudioConnection          patchCord7(osc_lfo_amp, 0, sub2, 0);
AudioConnection          patchCord8(osc_lfo_amp, 0, pulse_lfo3, 0);
AudioConnection          patchCord9(osc_lfo_amp, 0, sub3, 0);
AudioConnection          patchCord10(osc_lfo_amp, 0, pulse_lfo4, 0);
AudioConnection          patchCord11(osc_lfo_amp, 0, sub4, 0);
AudioConnection          patchCord12(osc_lfo_amp, 0, pulse_lfo5, 0);
AudioConnection          patchCord13(osc_lfo_amp, 0, sub5, 0);
AudioConnection          patchCord14(osc_lfo_amp, 0, pulse_lfo6, 0);
AudioConnection          patchCord15(osc_lfo_amp, 0, sub6, 0);
AudioConnection          patchCord16(osc_lfo_amp, 0, pulse_lfo7, 0);
AudioConnection          patchCord17(osc_lfo_amp, 0, sub7, 0);
AudioConnection          patchCord18(osc_lfo_amp, 0, saw0, 0);
AudioConnection          patchCord19(osc_lfo_amp, 0, saw1, 0);
AudioConnection          patchCord20(osc_lfo_amp, 0, saw2, 0);
AudioConnection          patchCord21(osc_lfo_amp, 0, saw3, 0);
AudioConnection          patchCord22(osc_lfo_amp, 0, saw4, 0);
AudioConnection          patchCord23(osc_lfo_amp, 0, saw5, 0);
AudioConnection          patchCord24(osc_lfo_amp, 0, saw6, 0);
AudioConnection          patchCord25(osc_lfo_amp, 0, saw7, 0);
AudioConnection          patchCord26(pwm_mixer, 0, pulse_lfo0, 1);
AudioConnection          patchCord27(pwm_mixer, 0, pulse_lfo1, 1);
AudioConnection          patchCord28(pwm_mixer, 0, pulse_lfo2, 1);
AudioConnection          patchCord29(pwm_mixer, 0, pulse_lfo3, 1);
AudioConnection          patchCord30(pwm_mixer, 0, pulse_lfo4, 1);
AudioConnection          patchCord31(pwm_mixer, 0, pulse_lfo5, 1);
AudioConnection          patchCord32(pwm_mixer, 0, pulse_lfo6, 1);
AudioConnection          patchCord33(pwm_mixer, 0, pulse_lfo7, 1);
AudioConnection          patchCord34(pwm_mixer, 0, sub0, 1);
AudioConnection          patchCord35(pwm_mixer, 0, sub1, 1);
AudioConnection          patchCord36(pwm_mixer, 0, sub2, 1);
AudioConnection          patchCord37(pwm_mixer, 0, sub3, 1);
AudioConnection          patchCord38(pwm_mixer, 0, sub4, 1);
AudioConnection          patchCord39(pwm_mixer, 0, sub5, 1);
AudioConnection          patchCord40(pwm_mixer, 0, sub6, 1);
AudioConnection          patchCord41(pwm_mixer, 0, sub7, 1);
AudioConnection          patchCord42(lpf_envelope_dc, lpf_envelope);
AudioConnection          patchCord43(lfo, lfo_envelope);
AudioConnection          patchCord44(sub7, 0, osc_mixer7, 2);
AudioConnection          patchCord45(sub4, 0, osc_mixer4, 2);
AudioConnection          patchCord46(saw7, 0, osc_mixer7, 1);
AudioConnection          patchCord47(saw4, 0, osc_mixer4, 1);
AudioConnection          patchCord48(sub6, 0, osc_mixer6, 2);
AudioConnection          patchCord49(saw6, 0, osc_mixer6, 1);
AudioConnection          patchCord50(lpf_mod_wheel_dc, 0, lpf_mod_mixer, 3);
AudioConnection          patchCord51(sub5, 0, osc_mixer5, 2);
AudioConnection          patchCord52(sub3, 0, osc_mixer3, 2);
AudioConnection          patchCord53(saw5, 0, osc_mixer5, 1);
AudioConnection          patchCord54(noise7, 0, osc_mixer7, 3);
AudioConnection          patchCord55(noise4, 0, osc_mixer4, 3);
AudioConnection          patchCord56(saw3, 0, osc_mixer3, 1);
AudioConnection          patchCord57(noise6, 0, osc_mixer6, 3);
AudioConnection          patchCord58(lpf_keyboard_dc, 0, lpf_mod_mixer, 2);
AudioConnection          patchCord59(pulse_lfo7, 0, osc_mixer7, 0);
AudioConnection          patchCord60(sub2, 0, osc_mixer2, 2);
AudioConnection          patchCord61(pulse_lfo4, 0, osc_mixer4, 0);
AudioConnection          patchCord62(saw2, 0, osc_mixer2, 1);
AudioConnection          patchCord63(noise5, 0, osc_mixer5, 3);
AudioConnection          patchCord64(pulse_lfo6, 0, osc_mixer6, 0);
AudioConnection          patchCord65(sub0, 0, osc_mixer0, 2);
AudioConnection          patchCord66(noise3, 0, osc_mixer3, 3);
AudioConnection          patchCord67(saw0, 0, osc_mixer0, 1);
AudioConnection          patchCord68(sub1, 0, osc_mixer1, 2);
AudioConnection          patchCord69(saw1, 0, osc_mixer1, 1);
AudioConnection          patchCord70(pulse_lfo5, 0, osc_mixer5, 0);
AudioConnection          patchCord71(pulse_lfo3, 0, osc_mixer3, 0);
AudioConnection          patchCord72(lfo_envelope, 0, lpf_mod_mixer, 1);
AudioConnection          patchCord73(lfo_envelope, osc_lfo_amp);
AudioConnection          patchCord74(lfo_envelope, 0, pwm_mixer, 0);
AudioConnection          patchCord75(noise2, 0, osc_mixer2, 3);
AudioConnection          patchCord76(noise0, 0, osc_mixer0, 3);
AudioConnection          patchCord77(noise1, 0, osc_mixer1, 3);
AudioConnection          patchCord78(pulse_lfo2, 0, osc_mixer2, 0);
AudioConnection          patchCord79(pulse_lfo0, 0, osc_mixer0, 0);
AudioConnection          patchCord80(lpf_envelope, 0, lpf_mod_mixer, 0);
AudioConnection          patchCord81(pulse_lfo1, 0, osc_mixer1, 0);
AudioConnection          patchCord82(osc_mixer7, 0, hpf7, 0);
AudioConnection          patchCord83(osc_mixer4, 0, hpf4, 0);
AudioConnection          patchCord84(osc_mixer6, 0, hpf6, 0);
AudioConnection          patchCord85(osc_mixer5, 0, hpf5, 0);
AudioConnection          patchCord86(osc_mixer3, 0, hpf3, 0);
AudioConnection          patchCord87(osc_mixer2, 0, hpf2, 0);
AudioConnection          patchCord88(osc_mixer0, 0, hpf0, 0);
AudioConnection          patchCord89(osc_mixer1, 0, hpf1, 0);
AudioConnection          patchCord90(lpf_mod_mixer, 0, lpf0, 1);
AudioConnection          patchCord91(lpf_mod_mixer, 0, lpf1, 1);
AudioConnection          patchCord92(lpf_mod_mixer, 0, lpf2, 1);
AudioConnection          patchCord93(lpf_mod_mixer, 0, lpf3, 1);
AudioConnection          patchCord94(lpf_mod_mixer, 0, lpf4, 1);
AudioConnection          patchCord95(lpf_mod_mixer, 0, lpf5, 1);
AudioConnection          patchCord96(lpf_mod_mixer, 0, lpf6, 1);
AudioConnection          patchCord97(lpf_mod_mixer, 0, lpf7, 1);
AudioConnection          patchCord98(hpf7, 2, lpf7, 0);
AudioConnection          patchCord99(hpf4, 2, lpf4, 0);
AudioConnection          patchCord100(hpf6, 2, lpf6, 0);
AudioConnection          patchCord101(hpf5, 2, lpf5, 0);
AudioConnection          patchCord102(hpf3, 2, lpf3, 0);
AudioConnection          patchCord103(hpf2, 2, lpf2, 0);
AudioConnection          patchCord104(hpf0, 2, lpf0, 0);
AudioConnection          patchCord105(hpf1, 2, lpf1, 0);
AudioConnection          patchCord106(lpf7, envelope7);
AudioConnection          patchCord107(lpf4, envelope4);
AudioConnection          patchCord108(lpf6, envelope6);
AudioConnection          patchCord109(lpf5, envelope5);
AudioConnection          patchCord110(lpf3, envelope3);
AudioConnection          patchCord111(lpf2, envelope2);
AudioConnection          patchCord112(lpf0, envelope0);
AudioConnection          patchCord113(lpf1, envelope1);
AudioConnection          patchCord114(envelope7, 0, env_mixer1, 3);
AudioConnection          patchCord115(envelope4, 0, env_mixer1, 0);
AudioConnection          patchCord116(envelope6, 0, env_mixer1, 2);
AudioConnection          patchCord117(envelope5, 0, env_mixer1, 1);
AudioConnection          patchCord118(envelope3, 0, env_mixer0, 3);
AudioConnection          patchCord119(envelope2, 0, env_mixer0, 2);
AudioConnection          patchCord120(envelope0, 0, env_mixer0, 0);
AudioConnection          patchCord121(envelope1, 0, env_mixer0, 1);
AudioConnection          patchCord122(env_mixer0, peak);
AudioConnection          patchCord123(env_mixer0, 0, mixer_left, 0);
AudioConnection          patchCord124(env_mixer0, 0, mixer_right, 0);
AudioConnection          patchCord125(env_mixer1, 0, mixer_left, 1);
AudioConnection          patchCord126(env_mixer1, 0, mixer_right, 1);
AudioConnection          patchCord127(mixer_left, flanger_left);
AudioConnection          patchCord128(mixer_right, flanger_right);
AudioConnection          patchCord129(flanger_left, 0, i2s1, 0);
AudioConnection          patchCord130(flanger_right, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2080.5,2308
// GUItool: end automatically generated code
