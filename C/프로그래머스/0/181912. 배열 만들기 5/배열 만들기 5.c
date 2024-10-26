#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// intStrs_len은 배열 intStrs의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    
    int* answer = (int*)malloc(intStrs_len*sizeof(int));
    int n=0;
    for(size_t i=0;i<intStrs_len;i++){
        int tmp=0;
        for(size_t j=s;j<s+l;j++){
            tmp=tmp*10+intStrs[i][j]-'0';
        }
        
        if(k<tmp) answer[n++]=tmp;
    }
    
    return answer;
}