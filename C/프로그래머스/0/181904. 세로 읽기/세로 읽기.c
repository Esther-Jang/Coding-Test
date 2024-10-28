#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int m, int c) {    
    char* answer = (char*)malloc(strlen(my_string)/m+1);
    int j=0;
    
    for(int i=c-1;i<strlen(my_string);i+=m){
        answer[j++]=my_string[i];
    }
    answer[j]='\0';
    return answer;
}