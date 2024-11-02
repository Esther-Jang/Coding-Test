#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    char* answer = (char*)malloc(strlen(my_string)+1);    
    for(int i=0;i<strlen(my_string);i++)
        if(my_string[i]>='a'&&my_string[i]<='z')
            answer[i]=my_string[i]-32;
        else
            answer[i]=my_string[i]+32;
    answer[strlen(my_string)]='\0';
    return answer;
}