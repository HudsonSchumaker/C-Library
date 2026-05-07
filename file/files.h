/**
* @file files.h 
* @brief Header file for file handling functions in C.
* @author Hudson Schumaker
* @version 1.0.0
* @copyright Copyright (c) 2024, Dodoi-Lab
*/
#pragma once
#include <stdio.h>
#include <stdlib.h>

// have to declare this definition to user the functions as "override" functions 
#define append_to_file(f, str) _Generic(f, char*:append_to_file_1 , FILE*: append_to_file_2)(f, str)

FILE* create_file(char* path);
void append_to_file_1(char* f, char* str);
void append_to_file_2(FILE* f, char* str);
void close_file(FILE* f);
int delete_file(FILE* f);
