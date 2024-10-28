#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    int len = strlen(my_string);
    char** answer = (char**)malloc(sizeof(char*)*len+1);
    for(int i=0;i<len;i++){
        answer[i]=(char*)malloc(len+1);
    }    
    
    for(int i=0;i<len;i++){
        strcpy(answer[i],my_string+i);
    }
    
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(strcmp(answer[i],answer[j])>0){
                char* tmp=answer[j];
                answer[j]=answer[i];
                answer[i]=tmp;
            }
        }
    }
    
    return answer;
}