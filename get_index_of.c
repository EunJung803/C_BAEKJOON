// 문제 : 문장에서 특정 부분만 잘라서 출력하는 함수를 만들어주세요.(print_sub_str)

#include <stdio.h>
#include <string.h>  

int get_index_of(char* input, char* c) {
  int count = 0;

  for(int i = 0; input[i] != '\0'; i++){
    if(input[i] == c[0]){

      for(int j = 0; j < strlen(c); j++){
        if(input[i+j] != c[j]){

          printf("-1\n");
          return -1;

        }
      }
      printf("%d\n", i);
      return i;
    }
  }
}


int main(void) {

  get_index_of("abcd", "b"); // 1
  get_index_of("abcd", "bc"); // 1
  get_index_of("abcd", "bcd"); // 1
  get_index_of("abcd", "bd"); // -1
  get_index_of("abcd", "abcd"); // 0
  get_index_of("abcd", "d"); // 3

  return 0;
}