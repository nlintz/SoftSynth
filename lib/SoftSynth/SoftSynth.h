//
//  SoftSynth.h
//  
//
//  Created by Nathan Lintz on 2/22/14.
//
//

#ifndef SoftSynth_h
#define SoftSynth_h

class SoftSynth
{
public:
    SoftSynth(int *adcPins);
    void generateWaveForm(int x);
    
private:
    int *_adcPins;
    int _waveIndex;
    int _stride;
    int _sineWave;
    
    void updateWaveIndex();
    void writeByte(int x);
    
};

#endif