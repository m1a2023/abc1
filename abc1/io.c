#include <stdio.h>

int initialize( void ) {
    int number;
    printf(
        "Enter your value: "
    );
    scanf_f("%d", &number);
    return number;
}

void show_bit(int number) {
    printf("%d", number);
}