#include <stdio.h>

int main(void) {
  int len;
  printf("개수 : ");
  scanf("%d", &len);
  
  int arr[len];

  printf("숫자 %d개를 띄어쓰기 하여 입력해주세요\n입력 : ", len);
  for(int i=0; i<len; i++) {
      scanf("%d", &arr[i]);
  }

  printf("결과 : ");
  for(int i=0; i<len; i++) {
      printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}