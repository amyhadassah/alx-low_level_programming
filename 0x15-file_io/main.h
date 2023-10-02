#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* for ssize_t, read, write, close */
#include <fcntl.h>  /* for open */
#include <stdlib.h> /* for size_t */
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
