// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
// 이거 왜 틀리는지 이해할 수 없네

#include <stdio.h>

int main(void) {
  int arr[9];
  int max;
  int index;

  for(int i=0; i<9; i++) {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  
  for(int i=0; i<9; i++) {
    if(max < arr[i]) {
      max = arr[i];
      index = i+1;
    }
  }

  printf("%d\n", max);
  printf("%d\n", index);
  
  return 0;
}

// #include <stdio.h>

// int main() {
//     int num[9], max=0, count=0;
//     for(int i=0; i<9; i++) {
//         scanf("%d", &num[i]);
//         if (num[i] > max){
//             max = num[i];
//             count = i;
//         }
//     }
//     printf("%d\n", max);
//     printf("%d", count+1);
// }