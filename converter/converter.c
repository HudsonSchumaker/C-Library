//  O3 Ozone Project Lab
//  converter.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved. 
// 

#include "converter.h"

// Celsius to Fahrenheit
float celsius_to_fahrenheit(register float c) {
    // (0°C × 9/5) + 32 = 32°F
    return (c * 9.0f/5.0f) + 32.0f;
}

// Fahrenheit to Celsius
float fahrenheit_to_celsius(register float f) {
    // (32°F − 32) × 5/9 = 0°C
    return (f - 32.0f) * 5.0f/9.0f;
}

// Celsius to Kelvin
float celsius_to_kelvin(register float c) {
    // 0°C + 273.15 = 273,15K
    return c + 273.15f;
}

// Kelvin to Celsius
float kelvin_to_celsius(register float k) {
    // 0K − 273.15 = -273,1°C
    return k - 273.15f;
}

// Kelvin to Fahrenheit
float kelvin_to_fahrenheit(register float k) {
    // (0K − 273.15) × 9/5 + 32 = -459,7°F
    return (k - 273.15f) * 9.0f/5.0f + 32;
}

// Fahrenheit to Kelvin
float fahrenheit_to_kelvin(register float f) {
    // (32°F − 32) × 5/9 + 273.15 = 273,15K
    return (f - 32.0f) * 5.0f/9.0f + 273.15f;
}

// Metres to Kilometres
float metres_to_kilometres(register float m) {
    return m / 1000.0f;
}

// Kilometres to Metres
float kilometres_to_metres(register float k) {
    return k * 1000.0f;
}

// Km to Miles
float km_to_mile(register float km) {
    return km / 1.609f;
}

// Miles to Km
float mile_to_km_h(register float m) {
    return m * 1.609f;
}

// Knot to Km/h
float knot_to_km_h(register float k) {
    return k * 1.852f;
}

// Km/h to Knot
float km_h_to_knot(register float km) {
    return km / 1.852f;
}

// Miles to Knots
float miles_to_knot(register float m) {
    return m /  1.151f;
}
    
// Pound per square inch (psi) to bar
float psi_to_bar(register float p) {
    return p / 14.504f;
}

float bar_to_psi(register float b) {
    return b * 14.504f;
}

// Liters to gallons
float liter_to_gallon(register float l) {
    return l / 3.785f;
}

// Gallons to liters
float gallon_to_liter(register float g) {
    return g * 3.785f;
}

// Kilogram to pounds
float kilogram_to_pound(register float k) {
    return k * 2.205f;
}

// Pound to kilogram
float pound_to_kilogram(register float p) {
    return p / 2.205f;
}

// Watts to HP (mechanical horsepower)
float watts_to_hp(register float w) {
    return w / 746.0f;
}

// HP (mechanical horsepower) to Watts
float hp_to_watts(register float h) {
    return h * 746.0f;
}

