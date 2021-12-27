#include <Audio.h>
class oscillator {
    public:
        AudioSynthWaveformModulated*  pulse_lfo;
        AudioSynthWaveformModulated*  saw;
        AudioSynthWaveformModulated*  sub;
        AudioSynthNoiseWhite*         noise;

        AudioMixer4*                  osc_mixer;
        
        AudioFilterStateVariable*     hpf;
        AudioFilterLadder*            lpf;
        
        AudioMixer4*                  lpf_mod_mixer;
        AudioEffectEnvelope*          lpf_envelope;
        AudioEffectEnvelope*          lfo_envelope;

        AudioEffectEnvelope*          envelope;
        
        AudioMixer4*                  pwm_mixer;

        
        int8_t  note;
        uint8_t velocity;
};