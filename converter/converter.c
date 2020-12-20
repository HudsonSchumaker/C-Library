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
