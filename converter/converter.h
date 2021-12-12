//  O3 Ozone Project Lab
//  converter.h
//  Created by Hudson Schumaker
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#ifndef CONVERTER_H
#define CONVERTER_H

float celsius_to_fahrenheit(register float c);
float fahrenheit_to_celsius(register float f);
float celsius_to_kelvin(register float c);
float kelvin_to_celsius(register float k);
float kelvin_to_fahrenheit(register float k); 
float fahrenheit_to_kelvin(register float f); 
float metres_to_kilometres(register float m);
float kilometres_to_metres(register float k);
float km_to_miles(register float km);
float mile_to_km(register float m); 
float knot_to_km_h(register float k); 
float km_h_to_knot(register float km); 
float psi_to_bar(register float psi);
float liter_to_gallon(register float l);
float gallon_to_liter(register float g);
float kilogram_to_pound(register float k);
float pound_to_kilogram(register float p); 
float watts_to_hp(register float w); 
float hp_to_watts(register float hp); 

#endif
