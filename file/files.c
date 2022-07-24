//  O3 Ozone Project Lab
//  files.c -  create methods
//             read methods
//             write methods
//             close methods
//             delete methods
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved. 
//

#define APPEND "a"
#define READ "r"
#define WRITE "w"
#define READ_WRITE "r+"
#define TRUNC_READ_WRITE "w+"
#define APP_READ_WRITE "a+"


FILE* create_file(char *path) {
    FILE *fp;
    fp = fopen(path, TRUNC_READ_WRITE);
    return fp;
}

void append_to_file_1(char *f, char *str) {
    FILE *fp;
    fp = fopen(f, APPEND);
    fprintf(fp, str);
    close_file(fp);
}

void append_to_file_2(FILE *f, char *str) {
    fprintf(f, str);
}

void close_file(FILE *f) {
    fclose(f);
}

int delete_file(FILE *f) {
   return remove(f);
}
