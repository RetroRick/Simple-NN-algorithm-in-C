//
// Created by ricar on 01/07/2020.
//

#include <stdio.h>
#include <assert.h>
#include "include/file_io.h"

//TODO("Complete write read files in binary and test it")

void open_file(FILE *ptr, char* path, char *instruction) {
    ptr = fopen(path, instruction);
    assert(ptr != NULL);
}

void print_file(FILE *ptr) {

}

void write_file(FILE *ptr, double* data_stream){
    fwrite(data_stream, sizeof(double*), sizeof(data_stream), ptr);
}

void extract_content_d(FILE *ptr, double* w) {
    fread(w, sizeof(double*), sizeof(w), ptr);
}