#include <SineWave.h>
#include <SoftSynth.h>

int adcPins[] = {13, 12, 11, 10, 9, 8, 7, 6};
SineWave sw;
SoftSynth softSynth(adcPins);

int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 2;
int buttonPin2 = 3;

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(buttonPin2, INPUT_PULLUP);  

  pinMode(ledPin, OUTPUT);
}

int stride = 2;
int counter = 0;

void loop() {
  int button1 = digitalRead(buttonPin1);
  if (button1) return;
  
  counter += stride;
  
  
  if (counter > sw.waveLength) {
    counter = 0;
  }
  softSynth.generateWaveForm(sw.amplitude(counter));
}
