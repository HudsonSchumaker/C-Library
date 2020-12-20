//  O3 Ozone Project Lab
//  converter.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Celsius to Fahrenheit
float celsius_to_fahrenheit(float c) {
    // (0°C × 9/5) + 32 = 32°F
    return (c *(9/5)) + 32.0;
}

// Fahrenheit to Celsius
float fahrenheit_to_celsius(float f) {
    // (32°F − 32) × 5/9 = 0°C
    return (f - 32.0) * (5/9);
}

// Celsius to Kelvin
float celsius_to_kelvin(float c) {
    // 0°C + 273.15 = 273,15K
    return c + 273.15;
}

// Kelvin to Celsius
float kelvin_to_celsius(float k) {
    // 0K − 273.15 = -273,1°C
    return k - 273.15;
}

// Kelvin to Fahrenheit
float kelvin_to_fahrenheit(float k) {
    // (0K − 273.15) × 9/5 + 32 = -459,7°F
    return ((k - 273.15) * (9/5)) + 32; 
}

// Fahrenheit to Kelvin
float fahrenheit_to_kelvin(float f) {
    // (32°F − 32) × 5/9 + 273.15 = 273,15K
    return ((f - 32) * (5/9)) + 273.15;
}

// Km to Miles
float km_to_miles(float km) {
    // m = km/1.609
    return km / 1.609;
}

// Miles to Km
float mile_to_km(float m) {
    // km = m * 1.609
    return m * 1.609;
}

// Knot to Km/h
float knot_to_km_h(float k) {
    return k * 1.852;
}

// Km/h to knot
float km_h_to_knot(float km) {
    return km / 1.852;
}
