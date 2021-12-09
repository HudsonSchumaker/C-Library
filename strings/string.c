//  O3 Ozone Project Lab
//  string.c - print methods
//             string methods
//             int to string
//             float to string
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void print_string(char *str) {
   printf("%s", str);
   fflush(stdout);
}

void print_string_ln(char *str) {
   printf("%s\n", str);
   fflush(stdout);
}

void print_int(register int i) {
   printf("%d", i);
   fflush(stdout);
}

void print_int_ln(register int i) {
   printf("%d\n", i);
   fflush(stdout);
}

void printf_float(register float f) {
   printf("%lf", f);
   fflush(stdout);
}

void print_float_ln(register float f) {
   printf("%lf\n", f);
   fflush(stdout);
}

void print_double(register double d) {
   printf("%f", d);
   fflush(stdout);
}

void print_double_ln(register double d) {
   printf("%f\n", d);
   fflush(stdout);
}

// UPPERCASE
const char* upper_case(char *str) {
    int i = 0;
    long len = strlen(str);
    char strUpper[len];

    while(str[i]) {
       strUpper[i] = toupper(str[i]);
       i++;
    }
    char *buffer = malloc(len);
    strcpy(buffer, strUpper);
    return buffer;
}

// lowercase
const char* lower_case(char *str) {
    int i = 0;
    long len = strlen(str);
    char strLower[len];

    while(str[i]) {
       strLower[i] = tolower(str[i]);
       i++;
    }
    char *buffer = malloc(len);
    strcpy(buffer, strLower);
    return buffer;
}

// camelCase
const char* camel_case(char *str) {
    long len = strlen(str);
    char strCapitalLetters[len];
    strCapitalLetters[0] = tolower(str[0]);

    int i = 1;
    while (str[i]) {
        if (str[i-1] == ' ' || str[i-1] == '_' || str[i-1] == '-') {
            strCapitalLetters[i] = toupper(str[i]);
        } else {
            strCapitalLetters[i] = tolower(str[i]);
        }
        i++;
    }

    int writer = 0, reader = 0;
    char strCamel[len];
    while (strCapitalLetters[reader]) {
        if (strCapitalLetters[reader] != ' ' && strCapitalLetters[reader] != '_' && strCapitalLetters[reader] != '-') {
            strCamel[writer++] = strCapitalLetters[reader];
        }
        reader++;
    }
    strCamel[writer] = 0;
    char *buffer = malloc(len);
    strcpy(buffer, strCamel);
    return buffer;
}

// PascalCase
const char* pascal_case(char *str) {
    long ini_len = strlen(str);
    char strCapitalLetters[ini_len];
    strCapitalLetters[0] = toupper(str[0]);

    int i = 1;
    while (str[i]) {
        if (str[i-1] == ' ' || str[i-1] == '_' || str[i-1] == '-') {
            strCapitalLetters[i] = toupper(str[i]);
        } else {
            strCapitalLetters[i] = tolower(str[i]);
        }
        i++;
    }

    i = 0;
    long remove = 0;
    while (strCapitalLetters[i]) {
        if (strCapitalLetters[i] == ' ' || strCapitalLetters[i] == '_' || strCapitalLetters[i] == '-') {
            remove++;
        }
        i++;
    }

    long len = ini_len - remove;
    char strPascal[len];
    int writer = 0, reader = 0;
    while (strCapitalLetters[reader]) {
        if (strCapitalLetters[reader] != ' ' && strCapitalLetters[reader] != '_' && strCapitalLetters[reader] != '-') {
            if (writer < len) {
                strPascal[writer++] = strCapitalLetters[reader];
            }
        }
        reader++;
    }

    strPascal[writer] = 0;
    char *buffer = malloc(len);
    strcpy(buffer, strPascal);
    return buffer;
}

// Capital Case
const char* capital_case(char *str) {
    long len = strlen(str);
    char strCapitalLetters[len];
    strCapitalLetters[0] = toupper(str[0]);

    int i = 1;
    do {
        if (str[i-1] == ' ' || str[i-1] == '_' || str[i-1] == '-') {
            strCapitalLetters[i] = toupper(str[i]);
        } else {
            strCapitalLetters[i] = tolower(str[i]);
        }
        i++;
    } while (i < len+1);

    long new_len = strlen(strCapitalLetters);
    char *buffer = malloc(new_len);
    strcpy(buffer, strCapitalLetters);
    return buffer;
}

// snake_case
const char* snake_case(char *str) {
    int i = 0;
    long len = strlen(str);
    char strSnake[len];

    while(str[i]) {
        if (str[i] == ' ' || str[i] == '-') {
            strSnake[i] = '_';
        } else {
            strSnake[i] = str[i];
        }
        i++;
    }
    char *buffer = malloc(len);
    strcpy(buffer, strSnake);
    return buffer;
}

// kebab-case
const char* kebab_case(char *str) {
    int i = 0;
    long len = strlen(str);
    char strKebab[len];
    while(str[i]) {
        if (str[i] == ' ' || str[i] == '_') {
            strKebab[i] = '-';
        } else {
            strKebab[i] = str[i];
        }
        i++;
    }
    char *buffer = malloc(len);
    strcpy(buffer, strKebab);
    return buffer;
}

// reverse
const char* reverse_case(char *str) {
    long len = strlen(str);
    char reverse[len];
    int strIndex = 0;
    int revIndex = len - 1;
    while(strIndex >= 0) {
        reverse[revIndex] = str[strIndex];
        strIndex--;
        revIndex++;
    }
    reverse[revIndex] = '\0';
    char *buffer = malloc(len);
    strcpy(buffer, reverse);
    return buffer;
}

// l-trim
const char* left_trim(char *str) {
   while(isspace(*str)) str++;
   long len = strlen(str);

   char *buffer = malloc(len);
   strcpy(buffer, str);
   return buffer;
}

// r-trim
const char* right_trim(char *str) {
    long len = strlen(str);
    char* back = str + len;
    while(isspace(*--back));
    *(back+1) = '\0';

    char *buffer = malloc(len);
    strcpy(buffer, str);
    return buffer;
}

// trim
const char* trim(char *str) {
    while(isspace(*str)) str++;
    long len = strlen(str);
    char* back = str + len;
    while(isspace(*--back));
    *(back+1) = '\0';

    long len_trim = strlen(str);
    char *buffer = malloc(len_trim);
    strcpy(buffer, str);
    return buffer;
}

// concat two strings (chars arrays)
const char* string_concat(char *s1, char *s2) {
    long len = strlen(s1) + strlen(s2);
    char buf[len];

    snprintf(buf, sizeof buf, "%s%s", s1, s2);

    char *buffer = malloc(len);
    strcpy(buffer, buf);
    return buffer;
}

// Integer to char array(string)
const char* int_to_string(int i) {
    char str[12]; // fit all integer numbers.
    sprintf(str, "%d", i);
    char *buffer = malloc(12);
    strcpy(buffer, str);
    return buffer;
}

// Float to char array(string)
const char* float_to_string(float f) {
    char b[12];
    sprintf(b, "%g", f);
    char *buffer = malloc(12);
    strcpy(buffer, b);
    return buffer;
}

// Double to char array(string)
const char* double_to_string(double d) {
    char b[50];
    snprintf(b, 50, "%f", d);
    char *buffer = malloc(12);
    strcpy(buffer, b);
    return buffer;
}
