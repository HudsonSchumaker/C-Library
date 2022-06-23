//  O3 Ozone Project Lab.
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.
//

#ifndef file_h
#define file_h

#include <stdio.h>
#include <stdlib.h>

// have to declare this definition to user the functions as "override" functions 
#define append_to_file(f, str) _Generic(f, char*:append_to_file_1 , FILE*: append_to_file_2)(f, str)

FILE* create_file(char *path);
void append_to_file_1(char *f, char *str);
void append_to_file_2(FILE *f, char *str);
void close_file(FILE *f);
int delete_file(FILE *f);

#endif /* file_h */
