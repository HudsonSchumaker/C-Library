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
    float fpart = f - (float)ipart;   // extract floating part 
    
    char istr[12];
    sprintf(istr, "%d", ipart);
    
    if (afterpoint != 0) { 
        fpart = fpart * pow(10, afterpoint); 
    }
    
    int fpart_no_dot = fpart;
    char fstr[12];
    sprintf(fstr, "%d", fpart_no_dot);
   
    char *buffer = malloc(24);
    strcpy(buffer, istr);
    strcat(buffer, ".");
    strcat(buffer, fstr);
    return buffer;
}
// double to string

