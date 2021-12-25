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
        AudioEffectEnvelope*          envelope;
        
        int8_t  note;
        uint8_t velocity;
};