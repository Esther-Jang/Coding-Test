#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

bool isIn(char* string){
    for(int i=0;i<strlen(string);i++){
        if(strncmp("ad",string+i,2)==0)
            return true;
    }
    return false;
}
char** solution(const char* strArr[], size_t strArr_len) {
    
    char** answer = (char**)malloc(strArr_len*sizeof(char*));
    for(size_t i=0;i<strArr_len;i++){
        answer[i] = (char*)malloc(20);
    }
    int j=0;
    for(size_t i=0;i<strArr_len;i++){
        if(!isIn(strArr[i]))
            answer[j++]=strArr[i];
    }
    
    return answer;
}