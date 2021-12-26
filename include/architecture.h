#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo;            //xy=355.2833251953125,226.99999237060547
AudioAmplifier           osc_lfo_amp;    //xy=377.2833251953125,966.9999923706055
AudioMixer4              pwm_mixer;      //xy=377.2833251953125,1062.9999923706055
AudioSynthWaveformModulated sub7;           //xy=578.2833251953125,1684.9999923706055
AudioSynthWaveformModulated sub4;           //xy=580.2833251953125,1186.9999923706055
AudioSynthWaveformModulated saw7;           //xy=579.2833251953125,1645.9999923706055
AudioSynthWaveformModulated saw4;           //xy=581.2833251953125,1147.9999923706055
AudioSynthWaveformModulated sub6;           //xy=580.2833251953125,1518.9999923706055
AudioSynthWaveformModulated saw6;           //xy=581.2833251953125,1479.9999923706055
AudioSynthWaveformModulated sub5;           //xy=584.2833251953125,1354.9999923706055
AudioSynthWaveformModulated sub3;           //xy=586.2833251953125,1021.9999923706055
AudioSynthWaveformModulated saw5;           //xy=585.2833251953125,1315.9999923706055
AudioSynthNoiseWhite     noise7;         //xy=584.2833251953125,1723.9999923706055
AudioSynthNoiseWhite     noise4;         //xy=586.2833251953125,1225.9999923706055
AudioSynthWaveformModulated saw3;           //xy=587.2833251953125,982.9999923706055
AudioSynthNoiseWhite     noise6;         //xy=586.2833251953125,1557.9999923706055
AudioSynthWaveformModulated pulse_lfo7;     //xy=588.2833251953125,1604.9999923706055
AudioSynthWaveformModulated sub2;           //xy=591.2833251953125,855.9999923706055
AudioSynthWaveformModulated pulse_lfo4;     //xy=590.2833251953125,1106.9999923706055
AudioSynthWaveformModulated saw2;           //xy=592.2833251953125,816.9999923706055
AudioSynthNoiseWhite     noise5;         //xy=590.2833251953125,1393.9999923706055
AudioSynthWaveformModulated pulse_lfo6;     //xy=590.2833251953125,1438.9999923706055
AudioSynthWaveformModulated sub0;           //xy=594.2833251953125,511.99999237060547
AudioSynthNoiseWhite     noise3;         //xy=592.2833251953125,1060.9999923706055
AudioSynthWaveformModulated saw0;           //xy=595.2833251953125,472.99999237060547
AudioSynthWaveformModulated sub1;           //xy=595.2833251953125,684.9999923706055
AudioSynthWaveformModulated saw1;           //xy=596.2833251953125,645.9999923706055
AudioSynthWaveformModulated pulse_lfo5;     //xy=594.2833251953125,1274.9999923706055
AudioSynthWaveformModulated pulse_lfo3;     //xy=596.2833251953125,941.9999923706055
AudioSynthNoiseWhite     noise2;         //xy=597.2833251953125,894.9999923706055
AudioSynthNoiseWhite     noise0;         //xy=601.2833251953125,551.9999923706055
AudioSynthNoiseWhite     noise1;         //xy=601.2833251953125,723.9999923706055
AudioSynthWaveformModulated pulse_lfo2;     //xy=601.2833251953125,775.9999923706055
AudioSynthWaveformModulated pulse_lfo0;     //xy=604.2833251953125,431.99999237060547
AudioEffectEnvelope      lfo_envelope0;  //xy=606.2833251953125,279.99999237060547
AudioSynthWaveformModulated pulse_lfo1;     //xy=605.2833251953125,604.9999923706055
AudioSynthWaveformDc     lpf_envelope_dc; //xy=700.2833251953125,221.99999237060547
AudioSynthWaveformDc     lpf_keyboard_dc; //xy=739.2833251953125,374.99999237060547
AudioSynthWaveformDc     lpf_mod_wheel_dc; //xy=748.2833251953125,423.99999237060547
AudioMixer4              osc_mixer7;     //xy=789.2833251953125,1674.9999923706055
AudioMixer4              osc_mixer4;     //xy=791.2833251953125,1176.9999923706055
AudioMixer4              osc_mixer6;     //xy=791.2833251953125,1508.9999923706055
AudioMixer4              osc_mixer5;     //xy=795.2833251953125,1344.9999923706055
AudioMixer4              osc_mixer3;     //xy=797.2833251953125,1011.9999923706055
AudioMixer4              osc_mixer2;     //xy=802.2833251953125,845.9999923706055
AudioMixer4              osc_mixer0;     //xy=806.2833251953125,502.99999237060547
AudioMixer4              osc_mixer1;     //xy=806.2833251953125,674.9999923706055
AudioEffectEnvelope      lpf_envelope1;  //xy=883.2833251953125,583.9999923706055
AudioEffectEnvelope      lpf_envelope2;  //xy=886.2833251953125,744.9999923706055
AudioEffectEnvelope      lpf_envelope5;  //xy=885.2833251953125,1251.9999923706055
AudioEffectEnvelope      lfo_envelope2;  //xy=888.2833251953125,779.9999923706055
AudioEffectEnvelope      lpf_envelope3;  //xy=888.2833251953125,924.9999923706055
AudioEffectEnvelope      lpf_envelope4;  //xy=889.2833251953125,1081.9999923706055
AudioEffectEnvelope      lfo_envelope4;  //xy=890.2833251953125,1115.9999923706055
AudioEffectEnvelope      lfo_envelope3;  //xy=892.2833251953125,959.9999923706055
AudioEffectEnvelope      lfo_envelope5;  //xy=891.2833251953125,1289.9999923706055
AudioEffectEnvelope      lpf_envelope6;  //xy=892.2833251953125,1419.9999923706055
AudioEffectEnvelope      lfo_envelope1;  //xy=896.2833251953125,623.9999923706055
AudioEffectEnvelope      lfo_envelope7;  //xy=894.2833251953125,1624.9999923706055
AudioEffectEnvelope      lfo_envelope6;  //xy=895.2833251953125,1458.9999923706055
AudioEffectEnvelope      lpf_envelope7;  //xy=895.2833251953125,1588.9999923706055
AudioEffectEnvelope      lpf_envelope0;  //xy=929.2833251953125,290.99999237060547
AudioFilterStateVariable hpf7;           //xy=932.2833251953125,1685.9999923706055
AudioFilterStateVariable hpf4;           //xy=934.2833251953125,1187.9999923706055
AudioFilterStateVariable hpf6;           //xy=934.2833251953125,1519.9999923706055
AudioFilterStateVariable hpf5;           //xy=938.2833251953125,1355.9999923706055
AudioFilterStateVariable hpf3;           //xy=940.2833251953125,1022.9999923706055
AudioFilterStateVariable hpf2;           //xy=945.2833251953125,856.9999923706055
AudioFilterStateVariable hpf0;           //xy=949.2833251953125,513.9999923706055
AudioFilterStateVariable hpf1;           //xy=949.2833251953125,685.9999923706055
AudioMixer4              lpf_mod_mixer0; //xy=1040.2833251953125,442.99999237060547
AudioMixer4              lpf_mod_mixer1; //xy=1067.2833251953125,624.9999923706055
AudioFilterLadder        lpf7;           //xy=1065.2833251953125,1705.9999923706055
AudioFilterLadder        lpf4;           //xy=1067.2833251953125,1207.9999923706055
AudioMixer4              lpf_mod_mixer2; //xy=1070.2833251953125,785.9999923706055
AudioFilterLadder        lpf6;           //xy=1067.2833251953125,1539.9999923706055
AudioMixer4              lpf_mod_mixer5; //xy=1069.2833251953125,1292.9999923706055
AudioMixer4              lpf_mod_mixer3; //xy=1072.2833251953125,965.9999923706055
AudioFilterLadder        lpf5;           //xy=1071.2833251953125,1375.9999923706055
AudioFilterLadder        lpf3;           //xy=1073.2833251953125,1042.9999923706055
AudioMixer4              lpf_mod_mixer4; //xy=1073.2833251953125,1122.9999923706055
AudioFilterLadder        lpf2;           //xy=1078.2833251953125,876.9999923706055
AudioMixer4              lpf_mod_mixer6; //xy=1076.2833251953125,1460.9999923706055
AudioFilterLadder        lpf0;           //xy=1082.2833251953125,533.9999923706055
AudioFilterLadder        lpf1;           //xy=1082.2833251953125,705.9999923706055
AudioMixer4              lpf_mod_mixer7; //xy=1079.2833251953125,1629.9999923706055
AudioEffectEnvelope      envelope7;      //xy=1203.2833251953125,1705.9999923706055
AudioEffectEnvelope      envelope4;      //xy=1205.2833251953125,1207.9999923706055
AudioEffectEnvelope      envelope6;      //xy=1205.2833251953125,1539.9999923706055
AudioEffectEnvelope      envelope5;      //xy=1209.2833251953125,1375.9999923706055
AudioAmplifier           lpf_polarity;   //xy=1213.2833251953125,380.99999237060547
AudioEffectEnvelope      envelope3;      //xy=1211.2833251953125,1042.9999923706055
AudioEffectEnvelope      envelope2;      //xy=1216.2833251953125,876.9999923706055
AudioEffectEnvelope      envelope0;      //xy=1220.2833251953125,533.9999923706055
AudioEffectEnvelope      envelope1;      //xy=1220.2833251953125,705.9999923706055
AudioMixer4              env_mixer0;     //xy=1461.2833251953125,807.9999923706055
AudioMixer4              env_mixer1;     //xy=1484.2833251953125,1485.9999923706055
AudioMixer4              mixer_left;     //xy=1714.2833251953125,1091.9999923706055
AudioMixer4              mixer_right;    //xy=1721.2833251953125,1327.9999923706055
AudioEffectFlange        flanger_left;   //xy=1894.2833251953125,1179.9999923706055
AudioEffectFlange        flanger_right;  //xy=1899.2833251953125,1304.9999923706055
AudioAnalyzePeak         peak;           //xy=1918.2833251953125,655.9999923706055
AudioOutputI2S           i2s1;           //xy=2090.2833251953125,1231.9999923706055
AudioConnection          patchCord1(lfo, lfo_envelope0);
AudioConnection          patchCord2(lfo, lfo_envelope2);
AudioConnection          patchCord3(lfo, lfo_envelope1);
AudioConnection          patchCord4(lfo, lfo_envelope3);
AudioConnection          patchCord5(lfo, lfo_envelope4);
AudioConnection          patchCord6(lfo, lfo_envelope5);
AudioConnection          patchCord7(lfo, lfo_envelope6);
AudioConnection          patchCord8(lfo, lfo_envelope7);
AudioConnection          patchCord9(osc_lfo_amp, 0, pulse_lfo0, 0);
AudioConnection          patchCord10(osc_lfo_amp, 0, sub0, 0);
AudioConnection          patchCord11(osc_lfo_amp, 0, pulse_lfo1, 0);
AudioConnection          patchCord12(osc_lfo_amp, 0, sub1, 0);
AudioConnection          patchCord13(osc_lfo_amp, 0, pulse_lfo2, 0);
AudioConnection          patchCord14(osc_lfo_amp, 0, sub2, 0);
AudioConnection          patchCord15(osc_lfo_amp, 0, pulse_lfo3, 0);
AudioConnection          patchCord16(osc_lfo_amp, 0, sub3, 0);
AudioConnection          patchCord17(osc_lfo_amp, 0, pulse_lfo4, 0);
AudioConnection          patchCord18(osc_lfo_amp, 0, sub4, 0);
AudioConnection          patchCord19(osc_lfo_amp, 0, pulse_lfo5, 0);
AudioConnection          patchCord20(osc_lfo_amp, 0, sub5, 0);
AudioConnection          patchCord21(osc_lfo_amp, 0, pulse_lfo6, 0);
AudioConnection          patchCord22(osc_lfo_amp, 0, sub6, 0);
AudioConnection          patchCord23(osc_lfo_amp, 0, pulse_lfo7, 0);
AudioConnection          patchCord24(osc_lfo_amp, 0, sub7, 0);
AudioConnection          patchCord25(osc_lfo_amp, 0, saw0, 0);
AudioConnection          patchCord26(osc_lfo_amp, 0, saw1, 0);
AudioConnection          patchCord27(osc_lfo_amp, 0, saw2, 0);
AudioConnection          patchCord28(osc_lfo_amp, 0, saw3, 0);
AudioConnection          patchCord29(osc_lfo_amp, 0, saw4, 0);
AudioConnection          patchCord30(osc_lfo_amp, 0, saw5, 0);
AudioConnection          patchCord31(osc_lfo_amp, 0, saw6, 0);
AudioConnection          patchCord32(osc_lfo_amp, 0, saw7, 0);
AudioConnection          patchCord33(pwm_mixer, 0, pulse_lfo0, 1);
AudioConnection          patchCord34(pwm_mixer, 0, pulse_lfo1, 1);
AudioConnection          patchCord35(pwm_mixer, 0, pulse_lfo2, 1);
AudioConnection          patchCord36(pwm_mixer, 0, pulse_lfo3, 1);
AudioConnection          patchCord37(pwm_mixer, 0, pulse_lfo4, 1);
AudioConnection          patchCord38(pwm_mixer, 0, pulse_lfo5, 1);
AudioConnection          patchCord39(pwm_mixer, 0, pulse_lfo6, 1);
AudioConnection          patchCord40(pwm_mixer, 0, pulse_lfo7, 1);
AudioConnection          patchCord41(pwm_mixer, 0, sub0, 1);
AudioConnection          patchCord42(pwm_mixer, 0, sub1, 1);
AudioConnection          patchCord43(pwm_mixer, 0, sub2, 1);
AudioConnection          patchCord44(pwm_mixer, 0, sub3, 1);
AudioConnection          patchCord45(pwm_mixer, 0, sub4, 1);
AudioConnection          patchCord46(pwm_mixer, 0, sub5, 1);
AudioConnection          patchCord47(pwm_mixer, 0, sub6, 1);
AudioConnection          patchCord48(pwm_mixer, 0, sub7, 1);
AudioConnection          patchCord49(sub7, 0, osc_mixer7, 2);
AudioConnection          patchCord50(sub4, 0, osc_mixer4, 2);
AudioConnection          patchCord51(saw7, 0, osc_mixer7, 1);
AudioConnection          patchCord52(saw4, 0, osc_mixer4, 1);
AudioConnection          patchCord53(sub6, 0, osc_mixer6, 2);
AudioConnection          patchCord54(saw6, 0, osc_mixer6, 1);
AudioConnection          patchCord55(sub5, 0, osc_mixer5, 2);
AudioConnection          patchCord56(sub3, 0, osc_mixer3, 2);
AudioConnection          patchCord57(saw5, 0, osc_mixer5, 1);
AudioConnection          patchCord58(noise7, 0, osc_mixer7, 3);
AudioConnection          patchCord59(noise4, 0, osc_mixer4, 3);
AudioConnection          patchCord60(saw3, 0, osc_mixer3, 1);
AudioConnection          patchCord61(noise6, 0, osc_mixer6, 3);
AudioConnection          patchCord62(pulse_lfo7, 0, osc_mixer7, 0);
AudioConnection          patchCord63(sub2, 0, osc_mixer2, 2);
AudioConnection          patchCord64(pulse_lfo4, 0, osc_mixer4, 0);
AudioConnection          patchCord65(saw2, 0, osc_mixer2, 1);
AudioConnection          patchCord66(noise5, 0, osc_mixer5, 3);
AudioConnection          patchCord67(pulse_lfo6, 0, osc_mixer6, 0);
AudioConnection          patchCord68(sub0, 0, osc_mixer0, 2);
AudioConnection          patchCord69(noise3, 0, osc_mixer3, 3);
AudioConnection          patchCord70(saw0, 0, osc_mixer0, 1);
AudioConnection          patchCord71(sub1, 0, osc_mixer1, 2);
AudioConnection          patchCord72(saw1, 0, osc_mixer1, 1);
AudioConnection          patchCord73(pulse_lfo5, 0, osc_mixer5, 0);
AudioConnection          patchCord74(pulse_lfo3, 0, osc_mixer3, 0);
AudioConnection          patchCord75(noise2, 0, osc_mixer2, 3);
AudioConnection          patchCord76(noise0, 0, osc_mixer0, 3);
AudioConnection          patchCord77(noise1, 0, osc_mixer1, 3);
AudioConnection          patchCord78(pulse_lfo2, 0, osc_mixer2, 0);
AudioConnection          patchCord79(pulse_lfo0, 0, osc_mixer0, 0);
AudioConnection          patchCord80(lfo_envelope0, 0, lpf_mod_mixer0, 1);
AudioConnection          patchCord81(lfo_envelope0, osc_lfo_amp);
AudioConnection          patchCord82(lfo_envelope0, 0, pwm_mixer, 0);
AudioConnection          patchCord83(pulse_lfo1, 0, osc_mixer1, 0);
AudioConnection          patchCord84(lpf_envelope_dc, lpf_envelope0);
AudioConnection          patchCord85(lpf_envelope_dc, lpf_envelope1);
AudioConnection          patchCord86(lpf_envelope_dc, lpf_envelope2);
AudioConnection          patchCord87(lpf_envelope_dc, lpf_envelope3);
AudioConnection          patchCord88(lpf_envelope_dc, lpf_envelope4);
AudioConnection          patchCord89(lpf_envelope_dc, lpf_envelope5);
AudioConnection          patchCord90(lpf_envelope_dc, lpf_envelope6);
AudioConnection          patchCord91(lpf_envelope_dc, lpf_envelope7);
AudioConnection          patchCord92(lpf_keyboard_dc, 0, lpf_mod_mixer0, 2);
AudioConnection          patchCord93(lpf_keyboard_dc, 0, lpf_mod_mixer1, 2);
AudioConnection          patchCord94(lpf_keyboard_dc, 0, lpf_mod_mixer2, 2);
AudioConnection          patchCord95(lpf_keyboard_dc, 0, lpf_mod_mixer3, 2);
AudioConnection          patchCord96(lpf_keyboard_dc, 0, lpf_mod_mixer4, 2);
AudioConnection          patchCord97(lpf_keyboard_dc, 0, lpf_mod_mixer5, 2);
AudioConnection          patchCord98(lpf_keyboard_dc, 0, lpf_mod_mixer6, 2);
AudioConnection          patchCord99(lpf_keyboard_dc, 0, lpf_mod_mixer7, 2);
AudioConnection          patchCord100(lpf_mod_wheel_dc, 0, lpf_mod_mixer0, 3);
AudioConnection          patchCord101(lpf_mod_wheel_dc, 0, lpf_mod_mixer1, 3);
AudioConnection          patchCord102(lpf_mod_wheel_dc, 0, lpf_mod_mixer2, 3);
AudioConnection          patchCord103(lpf_mod_wheel_dc, 0, lpf_mod_mixer3, 3);
AudioConnection          patchCord104(lpf_mod_wheel_dc, 0, lpf_mod_mixer4, 3);
AudioConnection          patchCord105(lpf_mod_wheel_dc, 0, lpf_mod_mixer5, 3);
AudioConnection          patchCord106(lpf_mod_wheel_dc, 0, lpf_mod_mixer6, 3);
AudioConnection          patchCord107(lpf_mod_wheel_dc, 0, lpf_mod_mixer7, 3);
AudioConnection          patchCord108(osc_mixer7, 0, hpf7, 0);
AudioConnection          patchCord109(osc_mixer4, 0, hpf4, 0);
AudioConnection          patchCord110(osc_mixer6, 0, hpf6, 0);
AudioConnection          patchCord111(osc_mixer5, 0, hpf5, 0);
AudioConnection          patchCord112(osc_mixer3, 0, hpf3, 0);
AudioConnection          patchCord113(osc_mixer2, 0, hpf2, 0);
AudioConnection          patchCord114(osc_mixer0, 0, hpf0, 0);
AudioConnection          patchCord115(osc_mixer1, 0, hpf1, 0);
AudioConnection          patchCord116(lpf_envelope1, 0, lpf_mod_mixer1, 0);
AudioConnection          patchCord117(lpf_envelope2, 0, lpf_mod_mixer2, 0);
AudioConnection          patchCord118(lpf_envelope5, 0, lpf_mod_mixer5, 0);
AudioConnection          patchCord119(lfo_envelope2, 0, lpf_mod_mixer2, 1);
AudioConnection          patchCord120(lpf_envelope3, 0, lpf_mod_mixer3, 0);
AudioConnection          patchCord121(lpf_envelope4, 0, lpf_mod_mixer4, 0);
AudioConnection          patchCord122(lfo_envelope4, 0, lpf_mod_mixer4, 1);
AudioConnection          patchCord123(lfo_envelope3, 0, lpf_mod_mixer3, 1);
AudioConnection          patchCord124(lfo_envelope5, 0, lpf_mod_mixer5, 1);
AudioConnection          patchCord125(lpf_envelope6, 0, lpf_mod_mixer6, 0);
AudioConnection          patchCord126(lfo_envelope1, 0, lpf_mod_mixer1, 1);
AudioConnection          patchCord127(lfo_envelope7, 0, lpf_mod_mixer7, 1);
AudioConnection          patchCord128(lfo_envelope6, 0, lpf_mod_mixer6, 1);
AudioConnection          patchCord129(lpf_envelope7, 0, lpf_mod_mixer7, 0);
AudioConnection          patchCord130(lpf_envelope0, 0, lpf_mod_mixer0, 0);
AudioConnection          patchCord131(hpf7, 2, lpf7, 0);
AudioConnection          patchCord132(hpf4, 2, lpf4, 0);
AudioConnection          patchCord133(hpf6, 2, lpf6, 0);
AudioConnection          patchCord134(hpf5, 2, lpf5, 0);
AudioConnection          patchCord135(hpf3, 2, lpf3, 0);
AudioConnection          patchCord136(hpf2, 2, lpf2, 0);
AudioConnection          patchCord137(hpf0, 2, lpf0, 0);
AudioConnection          patchCord138(hpf1, 2, lpf1, 0);
AudioConnection          patchCord139(lpf_mod_mixer0, 0, lpf0, 1);
AudioConnection          patchCord140(lpf_mod_mixer1, 0, lpf1, 1);
AudioConnection          patchCord141(lpf7, envelope7);
AudioConnection          patchCord142(lpf4, envelope4);
AudioConnection          patchCord143(lpf_mod_mixer2, 0, lpf2, 1);
AudioConnection          patchCord144(lpf6, envelope6);
AudioConnection          patchCord145(lpf_mod_mixer5, 0, lpf5, 1);
AudioConnection          patchCord146(lpf_mod_mixer3, 0, lpf3, 1);
AudioConnection          patchCord147(lpf5, envelope5);
AudioConnection          patchCord148(lpf3, envelope3);
AudioConnection          patchCord149(lpf_mod_mixer4, 0, lpf4, 1);
AudioConnection          patchCord150(lpf2, envelope2);
AudioConnection          patchCord151(lpf_mod_mixer6, 0, lpf6, 1);
AudioConnection          patchCord152(lpf0, envelope0);
AudioConnection          patchCord153(lpf1, envelope1);
AudioConnection          patchCord154(lpf_mod_mixer7, 0, lpf7, 1);
AudioConnection          patchCord155(envelope7, 0, env_mixer1, 3);
AudioConnection          patchCord156(envelope4, 0, env_mixer1, 0);
AudioConnection          patchCord157(envelope6, 0, env_mixer1, 2);
AudioConnection          patchCord158(envelope5, 0, env_mixer1, 1);
AudioConnection          patchCord159(envelope3, 0, env_mixer0, 3);
AudioConnection          patchCord160(envelope2, 0, env_mixer0, 2);
AudioConnection          patchCord161(envelope0, 0, env_mixer0, 0);
AudioConnection          patchCord162(envelope1, 0, env_mixer0, 1);
AudioConnection          patchCord163(env_mixer0, peak);
AudioConnection          patchCord164(env_mixer0, 0, mixer_left, 0);
AudioConnection          patchCord165(env_mixer0, 0, mixer_right, 0);
AudioConnection          patchCord166(env_mixer1, 0, mixer_left, 1);
AudioConnection          patchCord167(env_mixer1, 0, mixer_right, 1);
AudioConnection          patchCord168(mixer_left, flanger_left);
AudioConnection          patchCord169(mixer_right, flanger_right);
AudioConnection          patchCord170(flanger_left, 0, i2s1, 0);
AudioConnection          patchCord171(flanger_right, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1871.2833251953125,985.9999923706055
// GUItool: end automatically generated code
