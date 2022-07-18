// 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)

#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

int get_str_len(char* str) {
  for ( int i = 0; true; i++ ) {
    if ( str[i] == '\0' ) {
      return i;
    }
  }
}


// V1 ( == get_index_of.c 와 같음 )
int get_index_of_str_V1(char* str, char* keyword) {
  int str_len = get_str_len(str);
  int keyword_len = get_str_len(keyword);
  int compare_count = str_len - keyword_len + 1;

  for ( int i = 0; i < compare_count; i++ ) {
    bool match = true;

    for ( int j = 0; j < keyword_len; j++ ) {
      if ( str[i + j] != keyword[j] ) {
        match = false;
        break;
      }
    }
    
    if ( match ) {
      return i;
    }
  }

  return -1;
}


// V2
int get_index_of_str_V2(char* str, char* keyword) {
  int str_len = get_str_len(str);
  int keyword_len = get_str_len(keyword);

  // 택도 없는 사항은 입구컷
  if ( keyword_len > str_len ) { return -1; }
  
  // 문장끼리 비교해야하는 횟수
  int compare_count = str_len - keyword_len + 1;

  // str + 0과 str + 1, str + 2는 서로 다른 문장이다.
  for ( int i = 0; i < compare_count; i++ ) {
    if ( starts_with(str + i, keyword) ) {
      return i;
    }
  }

  return -1;
}


// V3
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

int get_index_of_str_V3(char* str1, char* str2) {
  int str1_len = get_str_len(str1);
  int str2_len = get_str_len(str2);

  if ( str2_len > str1_len ) {
    return -1;
  }
  
  if ( str2_len == 0 ) {
    return -1;
  }
}



int main(void) {
  int index1, index2, index3;
  
  index1 = get_index_of_str_V1("abc", "b");
  index2 = get_index_of_str_V2("abc", "b");
  index3 = get_index_of_str_3("abc", "b");
  printf("== get_index_of_str(%s, %s) ==\n", "abc", "b");
  printf("index V1 : %d\n", index1);
  printf("index V2 : %d\n", index2);
  printf("index V3 : %d\n", index3);
  // 출력 => index : 1

  index1 = get_index_of_str_V1("test", "es");
  index2 = get_index_of_str_V2("test", "es");
  index3 = get_index_of_str_3("test", "es");
  printf("== get_index_of_str(%s, %s) ==\n", "test", "es");
  printf("index V1 : %d\n", index1);
  printf("index V2 : %d\n", index2);
  printf("index V3 : %d\n", index3);
  // 출력 => index : 1

  index1 = get_index_of_str_V1("abcd", "bd");
  index2 = get_index_of_str_V2("abcd", "bd");
  index3 = get_index_of_str_3("abcd", "bd");
  printf("== get_index_of_str(%s, %s) ==\n", "abcd", "bd");
  printf("index V1 : %d\n", index1);
  printf("index V2 : %d\n", index2);
  printf("index V3 : %d\n", index3);
  // 출력 => index : -1  

  return 0;
}