#include <stdio.h>
int main(void) {
    // not a fan of declaring i outside of for loop
    int i = 0;
    for (i = 0; i < 9; i++) {
        printf("Hello, world!\n");
    }
    // prefer this method personally
    for (int i = 0; i < 3; i++) {
        printf("C is fun!\n");
    }
    return 0;
}