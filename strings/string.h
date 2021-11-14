//  O3 Ozone Project Lab
//  string.h
//  Created by Hudson Schumaker
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#ifndef CONVERTER_H
#define CONVERTER_H

void print_string(char *str);
void print_string_ln(char *str);
void print_int(register int i);
void print_int_ln(register int i);
void printf_float(register float f);
void print_float_ln(register float f);
void print_double(register double d);
void print_double_ln(register double d);
const char* upper_case(char *str);
const char* lower_case(char *str);
const char* camel_case(char *str);
const char* pascal_case(char *str);
const char* capital_case(char *str);
const char* snake_case(char *str);
const char* kebab_case(char *str);
const char* reverse_case(char *str);
const char* left_trim(char *str);
const char* trim(char *str);
const char* int_to_string(int i);
const char* float_to_string(float f);
const char* float_to_string(float f);

#endif
