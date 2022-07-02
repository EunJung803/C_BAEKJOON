#include <stdio.h>
#include <string.h>

int main(void) {
  int len;
  char answer_result[80];
  int score, count;

  scanf("%d", &len);

  for(int i=0; i<len; i++) {
    scanf("%s", &answer_result);
    // fgets(answer_result, sizeof(answer_result), stdin);

    score = 0;
    count = 1;

    // 점수 계산
    for(int n=0; n<strlen(answer_result); n++) {
      if(answer_result[n] == 'O') {
        score += count;
        count++;  // O은 계속해서 점수가 증가함
      }
      if(answer_result[n] == 'X') {
        count = 1; // X를 만나면 다시 더할 점수는 1로 초기화
      }
    }

    printf("%d\n", score);
  }
}