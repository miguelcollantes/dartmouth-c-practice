/*
0x8 = 0
1x8 = 8
...
10x8 = 80
*/

#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 8;
    for (int i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", a, b, a * b);
        a++;
    }
    return 0;
}