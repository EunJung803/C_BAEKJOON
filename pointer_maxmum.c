// 문제 : main 함수 안에있는 int 변수의 값들 중 최대값을 출력해주세요.
// 조건 : 변수 a0만 사용 가능

#include <stdio.h>

int main(void) {
  int a9, a8, a7, a6, a5, a4, a3, a2, a1, a0;

  a0 = -10;
  a1 = 10;
  a2 = 100;
  a3 = 210;
  a4 = 322210;
  a5 = 1440;
  a6 = 1130;
  a7 = 33210;
  a8 = 1210;
  a9 = 33210;

  // 반복문과 변수 a0 사용 가능

  int max_number = a0;

  // 수정가능지역 시작
  
  for(int i=0; i<10; i++) {
    int num = *(&a0 + i);
    if(max_number < num) {
      max_number = num;
    }
  }
  // 수정가능지역 끝

  // 정답 코드
  // int max_number = a0;

  // for ( int i = 0; i < 10; i++ ) {
  //   int current_num = *(&a0 + i);
  //   printf("a[%d] : %d\n", i, current_num);

  //   if ( current_num > max_number ) {
  //     max_number = current_num;
  //   }
  // }

  printf("최대값은 %d 입니다.\n", max_number);

  return 0;
}