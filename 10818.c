#include <stdio.h>

int main(void) {
    int len;
    scanf("%d", &len);

    int array[len];

    for(int i=0; i<len; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];

    for(int j=0; j<len; j++) {
        
        if(array[j] < min) {
            min = array[j];
        }
        if(array[j] > max) {
            max = array[j];
        }
    }

    printf("%d %d", min, max);

    return 0;

}