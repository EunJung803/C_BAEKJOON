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

bool ends_with(char* str, char* keyword) {
  int len_of_str = get_str_len(str);
  int len_of_keyword = get_str_len(keyword);

  if ( len_of_keyword > len_of_str ) {
    return false;
  }

  int start = len_of_str - len_of_keyword;
  int end = len_of_str;

  for ( int i = start; i < end; i++ ) {
    if ( str[i] != keyword[i - start] ) {
      return false;
    }
  }

  return true;
}

int main(void) {
  
  bool rs;
  
  rs = ends_with("abc", "bc");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 0

  rs = ends_with("kbs", "bs");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}