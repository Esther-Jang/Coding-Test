#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {
    
    char** answer = (char**)malloc(sizeof(char*)*strArr_len);
    for(size_t i=0;i<strArr_len;i++){
        answer[i] = (char*)malloc(sizeof(char)*(strlen(strArr[i])+1));
    }
    
    for(size_t i=0;i<strArr_len;i++){
        strcpy(answer[i], strArr[i]);
        if(i%2==0){
            for(size_t j=0;j<strlen(answer[i]);j++){
                if(answer[i][j]>='A'&&answer[i][j]<='Z')
                    answer[i][j]+=32;
            }
        }else{
            for(size_t j=0;j<strlen(answer[i]);j++){
                if(answer[i][j]>='a'&&answer[i][j]<='z')
                    answer[i][j]-=32;
            }
        }
    }
    
    return answer;
}