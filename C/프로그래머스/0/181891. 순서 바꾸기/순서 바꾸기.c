#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    
    int* answer = (int*)malloc(num_list_len*sizeof(int)+1);
    int j=0;
    
    for(size_t i=n;i<num_list_len;i++){
        answer[j++]=num_list[i];
    }
    for(size_t i=0;i<n;i++){
        answer[j++]=num_list[i];
    }
    answer[j]='\0';
        
    return answer;
}