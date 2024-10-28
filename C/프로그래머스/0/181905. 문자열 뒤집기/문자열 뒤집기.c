#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int s, int e) {
    
    char* answer = (char*)malloc(strlen(my_string)+1);
    strcpy(answer,my_string);
    
    int right=s, left=e;
    while(right<left){
        char tmp=answer[right];
        answer[right]=answer[left];
        answer[left]=tmp;
        right++;
        left--;
    }
    
    return answer;
}