#include <stdlib.h>
#include "endian.h"

typedef void (BIT)(int *num);

const char size32bit = sizeof(int) * 8 - 1;
const char size64bit = size32bit * 2 + 1;

void bit32(const int *number) {
    printf(
        "int: \nBig Endian: "
    )
    for (char i = size32bit; i >= 0; i--) {
        show_bit((*number >> i) & 1)
    }
    
    printf(
        "\nLittle End: NaN\n"
    );
    
}

void fbit32(const int *number) {
    printf(
        "float: \nBig Endian: "
    );
    char *bits = malloc(sizeof(char) * 32);
    char sign = *number > 0 ? 0 : 1;
    *bits = sign;
    S
    int pend = 
}

void dbit64(const int *number) {
    
}

BIT *bit32_64[] = { &bit, &fbit32, &dbit64 };