//
// Created by ricar on 01/07/2020.
//

#ifndef SIMPLENN_FILE_IO_H
#define SIMPLENN_FILE_IO_H

char *file_path;
FILE *file;

int open_file(FILE *ptr, char *instruction, char* path);
void print_file(FILE *ptr);
void write_file(FILE *ptr);
void extract_content_d(FILE *ptr, double w[]);

#endif //SIMPLENN_FILE_IO_H
