//
//  SoftSynth.cpp
//  
//
//  Created by Nathan Lintz on 2/22/14.
//
//

#include "Arduino.h"
#include "SoftSynth.h"

SoftSynth::SoftSynth(int *adcPins)
{
    _adcPins = adcPins;
    _waveIndex = 0;
    
    for (int i=0; i<8; i++)
    {
        pinMode(_adcPins[i], OUTPUT);
    }
}

// Private API

void SoftSynth::updateWaveIndex()
{
    _waveIndex = _waveIndex + 1;
}

void SoftSynth::writeByte(int x)
{
    for (int i=0; i<8; i++) {
        digitalWrite(_adcPins[i], x&1);
        x >>= 1;
    }
}

// Public API
void SoftSynth::generateWaveForm(int x)
{
    writeByte(x);
    updateWaveIndex();
}