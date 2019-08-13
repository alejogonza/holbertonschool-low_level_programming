#ifndef HOLBERTON_H
#define HOLBERTON_H

# include <stdint.h>

#include <stdlib.h>

#include <stdio.h>

#include <fcntl.h>

#include <string.h>

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
