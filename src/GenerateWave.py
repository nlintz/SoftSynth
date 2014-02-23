import os, sys
lib_path = os.path.abspath('../lib/ThinkDSP/code/')
sys.path.append(lib_path)

import thinkdsp
import thinkplot
import matplotlib.pyplot as pyplot
import json

def sineWave(freq=440, amp=.5, duration=1.0, framerate=44000):
	sin_sig = thinkdsp.SinSignal(freq, amp, offset=0)
	wave = sin_sig.make_wave(duration=duration, start=0, framerate=framerate)
	return wave

def waveData(wave, dcOffset):
	amplitudes = list(wave.ys)
	return map(lambda x: int(x+dcOffset), amplitudes)

def writeWaveToFile(data, filename=""):
	with open(filename+'.txt', 'w') as f:
		json.dump(data, f)

if __name__ == "__main__":
	freq = 523
	wave = sineWave(amp = 255/2, freq=freq, duration=3.0/freq)
	data = waveData(wave, 255/2)
	writeWaveToFile(data, "A")

