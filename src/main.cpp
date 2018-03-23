#include <Arduino.h>
#include <Keyboard.h>
#include <Mouse.h>
#include <RF24.h>

#include <Joystick.h>

Joystick_ joystick;

void setup() {
	joystick.begin();
	Mouse.begin();
	Keyboard.begin();
}

void loop() {
}