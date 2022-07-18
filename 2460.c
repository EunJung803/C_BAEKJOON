#include <stdio.h>

int main(void) {
    int in, out;    // in = 탄사람, out = 내린사람
    int sum = 0;
    int max = 0;

    for(int i=0; i<10; i++) {
        scanf("%d %d", &out, &in);
        sum = sum - out + in;
        if(max < sum) {
            max = sum;
        }
    }

    printf("%d\n", max);

    return 0;
}