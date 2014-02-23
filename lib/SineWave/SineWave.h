//
//  SineWave.h
//  
//
//  Created by Nathan Lintz on 2/22/14.
//
//
#ifndef SineWave_h
#define SineWave_h

class SineWave {
public:
    SineWave();
    int amplitude(int index);
    int waveLength;
    
private:
    int *_amplitudes;
};

#endif