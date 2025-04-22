#ifndef GRIPPYCORE_H
#define GRIPPYCORE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <fcntl.h>

#include "grippyfile.h"
#include "types.console.h"

#define GRIPPY_VERSION "1.0.0"
#define GRIPPY_VERSION_MAJOR 1



bool print(char *str, int len); // True indicates success, false means fail.
bool prierr(char *str, int len); // same with print();

int currpid(); // Get the current process ID.

int add(int no1, int no2);
int sub(int no1, int no2);
int mult(int mno1, int mno2);
int divide(int dno1, int dno2); 

#endif // GRIPPYCORE_H