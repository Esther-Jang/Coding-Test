#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myString) {
    
    char** answer = (char**)malloc(sizeof(char*)*strlen(myString));
    for(int i=0;i<strlen(myString);i++){
        answer[i]=(char*)malloc(strlen(myString));
    }
    
    char* tok=strtok(myString, "x");
    int j=0;
    while(tok){
        answer[j++]=tok;
        tok=strtok(NULL,"x");
    }
    for(int i=0; i<j-1; i++)
        for(int k=i+1; k<j; k++){
            if(strcmp(answer[i],answer[k])>0){
                char* tmp;
                tmp = answer[i];
                answer[i] = answer[k];
                answer[k] = tmp;
            }
        }
    
    return answer;
}