/*

Dear Procrastinator,
You still have to wait for X days (Y minutes or Z seconds) before you can procrastinate!

*/

#include <stdio.h>

int main(void) {
    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", 2, 2 * 24 * 60, 2 * 24 * 60 * 60);
    return 0;
}