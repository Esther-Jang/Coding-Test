#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    char* answer=(char*)malloc(3);
    if(strlen(s)%2==0){
        strncpy(answer,s+(strlen(s)/2)-1,2);
        answer[2]='\0';
    }else{
        strncpy(answer,s+(strlen(s)/2),1);
        answer[1]='\0';
    }
    return answer;
}