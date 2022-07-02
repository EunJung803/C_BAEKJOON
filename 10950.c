#include <stdio.h>

int main (void) {
    int a, b, len;
    
    scanf("%d", &len);
    int sum[len];
    
    for(int i = 0; i < len; i++) {
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
    }
    
    for(int j = 0; j < sizeof(sum)/sizeof(int); j++) {
        printf("%d\n", sum[j]);
    }
    
}