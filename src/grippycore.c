#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#include "grippycore.h"

bool print(char *str, int len) {
    if (len < 0) {
        return false;
    }
    if (write(STDOUT, str, len) == -1) {
        return false;
    }
    return true;
}

bool prierr(char *str, int len) {
    if (len < 0) {
        return false;
    }
    if (write(STDERR, str, len) == -1) {
        return false;
    }
    return true;
}

int currpid() {
    return getpid();
}


int add(int no1, int no2) {
    return no1 + no2;
}
int sub(int no1, int no2) {
    return no1 - no2;
}
int mult(int mno1, int mno2) {
    return mno1 * mno2;
}
int divide(int dno1, int dno2) {
        // disables division by zero
     if (dno2 == 0) { return -1; }
     if (dno1 == 0) { return -1; }

    return dno1 / dno2;
}

