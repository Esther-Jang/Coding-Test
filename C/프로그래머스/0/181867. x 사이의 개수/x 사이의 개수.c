#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* myString) {
    
    int* answer = (int*)malloc(sizeof(int)*strlen(myString));
    int cnt=0, j=0;
    for(int i=0;i<strlen(myString);i++){
        if(myString[i]=='x'){
            answer[j++]=cnt;
            cnt=0;
        }else
            cnt++;
    }
    answer[j]=cnt;
    
    return answer;
}