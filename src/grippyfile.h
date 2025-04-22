#ifndef GRIPPYFILE_H
#define GRIPPYFILE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <fcntl.h>

#include "types.console.h"
#include "grippycore.h"

#define GRIPPY_VERSION "1.0.0"
#define GRIPPY_VERSION_MAJOR 1

bool fileopen(char *filename, int mode);
bool fileclose(int fd);
bool fileread(int fd, char *buffer, int size);
bool filewrite(int fd, char *buffer, int size);
bool filedelete(char *filename);

#endif // GRIPPYFILE_H