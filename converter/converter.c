//  O3 Ozone Project Lab
//  converter.c
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

const char* int_to_string(int i) {
    char str[12];// fit all int numbers.
    sprintf(str, "%d", i);
    //char* clean = right_trim(str);
    char *buffer = malloc(12);
    strcpy(buffer, str);
    return buffer;
}
// byte to string
// short to string
// long to string
// float to string
// double to string
