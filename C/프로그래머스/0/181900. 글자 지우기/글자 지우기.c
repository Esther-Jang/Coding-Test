#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    
    char* answer = (char*)malloc(strlen(my_string)+1);
    int k=0;
    
    for(int i=0;i<strlen(my_string);i++){
        int flag=0;
        for(size_t j=0;j<indices_len;j++)
            if(indices[j]==i)
                flag=1;
        if(flag==0)
            answer[k++]=my_string[i];
    }
    answer[k]='\0';
    
    return answer;
}