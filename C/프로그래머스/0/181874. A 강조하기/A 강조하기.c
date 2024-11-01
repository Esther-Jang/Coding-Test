#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    
    char* answer = (char*)malloc(strlen(myString)+1);
    
    for(int i=0;i<strlen(myString);i++){
        if(myString[i]=='a')
            answer[i]='A';
        else if(myString[i]>='B'&&myString[i]<='Z'){
            answer[i]=myString[i]+32;
        }else
            answer[i]=myString[i];
    }
    answer[strlen(myString)]='\0';
    return answer;
}