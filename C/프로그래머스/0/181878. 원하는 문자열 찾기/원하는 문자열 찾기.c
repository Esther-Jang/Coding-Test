#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    char* myString_a=malloc(strlen(myString));
    char* pat_a=malloc(strlen(pat));
    strcpy(myString_a, myString);
    strcpy(pat_a, pat);
    
    for(int i=0;i<strlen(myString);i++){
        if(myString[i]>='a'&&myString[i]<='z')
            myString_a[i]-=32;
    }
    for(int i=0;i<strlen(pat);i++){
        if(pat[i]>='a'&&pat[i]<='z')
            pat_a[i]-=32;
    }
    
    for(size_t i=0;i<strlen(myString_a);i++){
        if(strncmp(pat_a, myString_a+i, strlen(pat_a))==0)
            return 1;
    }
    
    return 0;
}