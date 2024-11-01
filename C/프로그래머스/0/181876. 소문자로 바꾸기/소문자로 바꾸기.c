#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    
    char* answer = (char*)malloc(strlen(myString));
    strcpy(answer, myString);
    for(int i=0;i<strlen(myString);i++){
        if(myString[i]>='A'&&myString[i]<='Z')
            answer[i]+=32;
    }
    
    return answer;
}