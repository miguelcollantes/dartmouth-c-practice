#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;

    printf("Please enter a number:\n");
    scanf_s("%d", &b);

    for (int i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", a, b, a * b);
        a++;
    }
    return 0;
}