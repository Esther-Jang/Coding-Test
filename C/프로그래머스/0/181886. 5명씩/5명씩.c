#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// names_len은 배열 names의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* names[], size_t names_len) {

    char** answer = (char**)malloc(sizeof(char*)*names_len);
    int j=0;
    for(size_t i=0;i<names_len;i+=5){
        answer[j++]=names[i];
    }
    
    return answer;
}