#include <stdio.h>

int main(void) {
    int b = 10;
    int a = 10+ ++b;

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}