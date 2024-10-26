#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    
    char* answer = (char*)malloc(n+1);
    size_t len = strlen(my_string);
    for(int i=0;i<n;i++){
        answer[i]=my_string[len-n+i];
    }
    answer[n]='\0';
    
    return answer;
}