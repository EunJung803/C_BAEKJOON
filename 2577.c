#include <stdio.h>
#include <string.h>

int main(void) {
  int a, b, c;
  int result;
  int count;
  char result_num[100];
  char save_answer[10];

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  result = a * b * c;

  int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // printf("%d",result);  // 17037300
  sprintf(result_num, "%d", result);   //형변환 (int -> char)

  for(int i=0; i<10; i++) {
    count = 0;

    for(int j=0; j<strlen(result_num); j++) {
      // printf("num = %d\n", num[i]);
      // printf("re_num = %d\n", result_num[j]);

      if(num[i] == (result_num[j]-'0')) { //int형과 char형 비교를 위해 -'0' 진행
        count++;
      }
    }
    
    save_answer[i] = count;
  }

  for(int i=0; i<10; i++) {
    printf("%d\n", save_answer[i]);
  }
  
}