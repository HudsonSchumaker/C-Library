//  O3 Ozone Project Lab
//  converter.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h> 

// Celsius to Fahrenheit
float celsius_to_fahrenheit(register float c) {
    // (0°C × 9/5) + 32 = 32°F
    return (c *(9/5)) + 32.0;
}

// Fahrenheit to Celsius
float fahrenheit_to_celsius(register float f) {
    // (32°F − 32) × 5/9 = 0°C
    return (f - 32.0) * (5/9);
}

// Celsius to Kelvin
float celsius_to_kelvin(register float c) {
    // 0°C + 273.15 = 273,15K
    return c + 273.15;
}

// Kelvin to Celsius
float kelvin_to_celsius(register float k) {
    // 0K − 273.15 = -273,1°C
    return k - 273.15;
}

// Kelvin to Fahrenheit
float kelvin_to_fahrenheit(register float k) {
    // (0K − 273.15) × 9/5 + 32 = -459,7°F
    return ((k - 273.15) * (9/5)) + 32; 
}

// Fahrenheit to Kelvin
float fahrenheit_to_kelvin(register float f) {
    // (32°F − 32) × 5/9 + 273.15 = 273,15K
    return ((f - 32) * (5/9)) + 273.15;
}

// Km to Miles
float km_to_miles(register float km) {
    return km / 1.609;
}

// Miles to Km
float mile_to_km(register float m) {
    return m * 1.609;
}

// Knot to Km/h
float knot_to_km_h(register float k) {
    return k * 1.852;
}

// Km/h to Knot
float km_h_to_knot(register float km) {
    return km / 1.852;
}

// Pound per square inch (psi) to bar
float psi_to_bar(register float psi) {
    return psi / 14.504;
}

// Liters to gallons
float liter_to_gallon(register float l) {
    return l / 3.785;
}

// Gallons to liters
float gallon_to_liter(register float g) {
    return g * 3.785;
}

// Kilogram to pounds
float kilogram_to_pound(register float k) {
    return k * 2.205;
}

// Pound to kilogram
float pound_to_kilogram(register float p) {
    return p / 2.205;
}

// Watts to HP (mechanical horsepower)
float watts_to_hp(register float w) {
    return w / 746;
}

// HP (mechanical horsepower) to Watts
float hp_to_watts(register float hp) {
    return hp * 746;
}
