/******************************************************************************
 * RheoRailRoad - A Digital Rheostat Controller
 * 
 * (c) 2020 - StanleySolutions
 * 
 * This control system is designed to control a stepper motor to operate
 * a vintage Lionel No. 81 Rheostat to provide digital speed control in an
 * interface that will allow for remote and autonomous control.
 *****************************************************************************/

#include <Arduino.h>
#include <Stepper.h>

// Define Stepper Motor Steps - 64 Steps per Rotation, 1/64 Gear Reduction
#define STEPS 4096

// Stepper motor control pins
#define IN1   D1   // IN1 is connected to NodeMCU pin D1 (GPIO5)
#define IN2   D2   // IN2 is connected to NodeMCU pin D2 (GPIO4)
#define IN3   D3   // IN3 is connected to NodeMCU pin D3 (GPIO0)
#define IN4   D4   // IN4 is connected to NodeMCU pin D4 (GPIO2)
 
// Prepare an Instance of Stepper Class
Stepper stepper_motor(STEPS, IN4, IN2, IN3, IN1);

void setup() {
  // System Initialization
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  stepper_motor.setSpeed(100);  // set stepper motor speed to 100 rpm
}

void loop() {
  // put your main code here, to run repeatedly:
}