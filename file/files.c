//  O3 Ozone Project Lab
//  files.c -  create methods
//             read methods
//             write methods
//             close methods
//             delete methods
//
//  Created by Hudson Schumaker on 14.08.20.
//  Copyright © 2020 SchumakerTeam. All rights reserved.
//

#include <stdio.h>
#define READ_WRITE "w+"

int create_file(char *path) {
    register int res = 1;
    FILE *fp;
    fp = fopen(path, READ_WRITE);
    res = fclose(fp);
    return res;
}
