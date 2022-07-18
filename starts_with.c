/*
* starts_with 함수 구현(할일 리스트)[완료](완료순서 : 8)
- 문법에러 고치기(함수 뼈대만 구현)[완료](완료순서 : 1)
- starts_with("abc", "ab"); 했을 때 true가 리턴 되도록[완료](완료순서 : 2)
  - get_str_len 함수 구현[완료](완료순서 : 5)
    - 함수 사용부분 구현[완료](완료순서 : 2)
    - 문법에러 고치기(함수 뼈대만 구현)[완료](완료순서 : 3)
    - 올바르게 작동하도록 작업[완료](완료순서 : 4)
  - 올바르게 작동하도록 작업[완료](완료순서 : 6)
- 검색 키워드의 길이가 더 길때는, 입구컷[완료](완료순서 : 7)
*/

#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

int get_str_len(char* str) {
  for ( int i = 0; true; i++ ) {
    if ( str[i] == '\0' ) {
      return i;
    }
  }
}

bool starts_with(char* str, char* str2) {
  int str_len = get_str_len(str);
  int str2_len = get_str_len(str2);

  if ( str_len < str2_len ) {
    return false;
  }

  for ( int i = 0; i < str2_len; i++ ) {
    if ( str[i] != str2[i] ) {
      return false;
    }
  }

  return true;
}

int main(void) {
  
  bool rs;
  
  rs = starts_with("abc", "ab");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = starts_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = starts_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}