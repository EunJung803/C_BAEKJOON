#include <stdio.h>

int main(void) {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int arr[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열 확인용 출력
    // for(int i=0; i<n; i++) {
    //     printf("%d ", arr[i]);
    // }

    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            
        }
    }
}