//  O3 Ozone Project Lab
//  converter.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Integer to char array(string)
const char* int_to_string(int i) {
    char str[12];// fit all integer numbers.
    sprintf(str, "%d", i);
    char *buffer = malloc(12);
    strcpy(buffer, str);
    return buffer;
}

// Float to char array(string)
const char* float_to_string(float f) {
    int afterpoint = 4;
    int ipart = (int)f;               // extract integer part 
    float fpart = f - (float)ipart;   // extract float part 
    
    char istr[8];
    sprintf(istr, "%d", ipart);
    
    if (afterpoint != 0) { 
        fpart = fpart * pow(10, afterpoint); 
    }
    
    int fpart_no_dot = fpart;
    char fstr[8];
    sprintf(fstr, "%d", fpart_no_dot);
   
    char *buffer = malloc(16);
    strcpy(buffer, istr);
    strcat(buffer, ".");
    strcat(buffer, fstr);
    return buffer;
}

// Double to char array(string)
const char* double_to_string(double f) {
    int afterpoint = 6;
    int ipart = (int)f;                 // extract integer part 
    double dpart = f - (double)ipart;   // extract double part 
    
    char istr[8];
    sprintf(istr, "%d", ipart);
    
    if (afterpoint != 0) { 
        dpart = dpart * pow(10, afterpoint); 
    }
    
    int dpart_no_dot = dpart;
    char dstr[8];
    sprintf(dstr, "%d", dpart_no_dot);
   
    char *buffer = malloc(16);
    strcpy(buffer, istr);
    strcat(buffer, ".");
    strcat(buffer, dstr);
    return buffer;
}

