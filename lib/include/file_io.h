//
// Created by ricar on 01/07/2020.
//

#ifndef SIMPLENN_FILE_IO_H
#define SIMPLENN_FILE_IO_H

char *file_path;
FILE *file;

void open_file(FILE *ptr, char* path, char *instruction);
void print_file(FILE *ptr);
void write_file(FILE *ptr, double* data_stream);
void extract_content_d(FILE *ptr, double* w);

#endif //SIMPLENN_FILE_IO_H
