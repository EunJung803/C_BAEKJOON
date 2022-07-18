#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool str_part_equals(char* str1, int start, int end, char* str2) {
  int j = 0;
  for ( int i = start; i < end; i++ ) {
    if ( str1[i] != str2[j] ) {
      return false;
    }

    j++;
  }

  return true;
}

int main(void) {
  printf("str_part_equals(\"abcd\", 0, 2, \"ab\") : %d\n", str_part_equals("abcd", 0, 2, "ab"));
  // 출력 => str_equals("abcd", 0, 2, "ab") : 1

  printf("str_part_equals(\"abcd\", 1, 2, \"b\") : %d\n", str_part_equals("abcd", 1, 2, "b"));
  // 출력 => str_equals("abcd", 1, 2, "b") : 1

  printf("str_part_equals(\"abcd\", 2, 2, \"\") : %d\n", str_part_equals("abcd", 2, 2, ""));
  // 출력 => str_equals("abcd", 2, 2, "") : 1

  printf("str_part_equals(\"abcd\", 2, 4, \"cb\") : %d\n", str_part_equals("abcd", 2, 4, "cb"));
  // 출력 => str_equals("abcd", 2, 4, "cb") : 0

  printf("str_part_equals(\"abcd\", 2, 4, \"cd\") : %d\n", str_part_equals("abcd", 2, 4, "cd"));
  // 출력 => str_equals("abcd", 2, 4, "cb") : 1

  return 0;
}