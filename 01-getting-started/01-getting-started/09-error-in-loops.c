/*

DESIRED OUTPUT

+-----------------------+
| o | X | o | X | o | X |
| X | o | X | o | X | o |
| o | X | o | X | o | X |
| X | o | X | o | X | o |
| o | X | o | X | o | X |
| X | o | X | o | X | o |
+-----------------------+

*/

#include <stdio.h>

int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++) // i would prefer to curly brace this loop
        printf("-");
    printf("+\n");




    for (i = 0; i < 3; i++) {
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }

    printf("+");
    for (i = 0; i < 23; i++) // same as before, prefer curly brace
        printf("-");
    printf("+");

    return(0);
}