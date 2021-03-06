//
//  SineWave.cpp
//  
//
//  Created by Nathan Lintz on 2/22/14.
//
//

#include "Arduino.h"
#include "SineWave.h"
#define WAVE_LENGTH 253

SineWave::SineWave()
{
    int *wave = (int *)malloc(sizeof(int) * WAVE_LENGTH);
    int waveArr[WAVE_LENGTH] = {127, 136, 145, 155, 164, 173, 182, 190, 198, 206, 213, 219, 226, 231, 236, 241, 245, 248, 250, 252, 253, 253, 253, 252, 250, 248, 245, 241, 237, 232, 226, 220, 213, 206, 198, 190, 182, 173, 164, 155, 146, 137, 127, 118, 108, 99, 90, 81, 72, 64, 56, 48, 41, 34, 28, 22, 17, 12, 9, 5, 3, 1, 0, 0, 0, 1, 2, 5, 8, 12, 16, 21, 27, 33, 39, 46, 54, 62, 70, 79, 88, 97, 106, 116, 125, 135, 144, 154, 163, 172, 180, 189, 197, 205, 212, 219, 225, 231, 236, 240, 244, 247, 250, 252, 253, 253, 253, 252, 251, 248, 245, 242, 237, 232, 227, 221, 214, 207, 199, 192, 183, 175, 166, 157, 147, 138, 128, 119, 109, 100, 91, 82, 73, 65, 57, 49, 42, 35, 28, 23, 18, 13, 9, 6, 3, 1, 0, 0, 0, 1, 2, 5, 7, 11, 15, 20, 26, 32, 38, 46, 53, 61, 69, 78, 87, 96, 105, 115, 124, 134, 143, 152, 162, 171, 179, 188, 196, 204, 211, 218, 224, 230, 235, 240, 244, 247, 250, 252, 253, 253, 253, 252, 251, 249, 246, 242, 238, 233, 228, 222, 215, 208, 200, 193, 184, 176, 167, 158, 148, 139, 130, 120, 111, 101, 92, 83, 74, 66, 58, 50, 43, 36, 29, 23, 18, 14, 10, 6, 3, 1, 0, 0, 0, 0, 2, 4, 7, 11, 15, 20, 25, 31, 38, 45, 52, 60, 68, 77, 86, 95, 104, 113, 123};
    
    for (int i=0; i<WAVE_LENGTH; i++)
    {
        wave[i] = waveArr[i];
    }
    _amplitudes = wave;
    waveLength = WAVE_LENGTH;

}

int SineWave::amplitude(int index)
{
    return _amplitudes[index];
}