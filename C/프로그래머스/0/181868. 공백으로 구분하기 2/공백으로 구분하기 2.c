#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    
    char** answer = (char**)malloc(sizeof(char*)*strlen(my_string));
    for(int i=0;i<strlen(my_string);i++){
        answer[i]=(char*)malloc(strlen(my_string));
    }
    int i=0;
    char* tok=strtok(my_string," ");
    while(tok){
        answer[i++]=tok;
        tok=strtok(NULL," ");
    }
    
    return answer;
}