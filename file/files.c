/**
* @file files.c
* @brief Implementation of file handling functions in C.
* @author Hudson Schumaker
* @version 1.0.0
* @copyright Copyright (c) 2024, Dodoi-Lab
*/
#define APPEND "a"
#define READ "r"
#define WRITE "w"
#define READ_WRITE "r+"
#define TRUNC_READ_WRITE "w+"
#define APP_READ_WRITE "a+"

FILE* create_file(char* path) {
    FILE* fp;
    fp = fopen(path, TRUNC_READ_WRITE);
    return fp;
}

void append_to_file_1(char* f, char* str) {
    FILE* fp;
    fp = fopen(f, APPEND);
    fprintf(fp, str);
    close_file(fp);
}

void append_to_file_2(FILE* f, char* str) {
    fprintf(f, str);
}

void close_file(FILE* f) {
    fclose(f);
}

int delete_file(FILE* f) {
   return remove(f);
}
