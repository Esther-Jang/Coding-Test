#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    
    int* answer = (int*)malloc(52*sizeof(int));
    memset(answer,0,52*sizeof(int));
    
    for(int i=0;i<strlen(my_string);i++){//a=97, A=65
        if(my_string[i]<91)
            answer[my_string[i]-65]++;
        else
            answer[my_string[i]-71]++;
    }
    
    return answer;
}