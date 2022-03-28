//  O3 Ozone Project Lab
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define append_to_file(f, str) _Generic(f, char*:append_to_file_1 , FILE*: append_to_file_2)(f, str)

FILE* create_file(char *path);
void append_to_file_1(char *f, char *str);
void append_to_file_2(FILE *f, char *str);
void close_file(FILE *f);
int delete_file(FILE *f);
