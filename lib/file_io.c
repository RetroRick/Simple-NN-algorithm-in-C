//
// Created by ricar on 01/07/2020.
//

#include <stdio.h>
#include "include/file_io.h"

int open_file(FILE *ptr, char *instruction, char *path) {
    ptr = fopen(path, instruction);
    if (ptr == NULL) {
        printf("Error no such file or directory\n");
        return 1;
    } else {
        {
            printf("File exists in %s\n", path);
            return 0;
        }
    }
}

void print_file(FILE *ptr) {

}

void write_file(FILE *ptr) {

}

void extract_content_d(FILE *ptr, double w[]) {

}