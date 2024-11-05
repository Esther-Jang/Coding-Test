#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool in(int n[],int x, size_t n_len){
    for(size_t i=0;i<n_len;i++){
        if(n[i]==x) return false;
    }
    return true;
}
// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(sizeof(int)*numbers_len*numbers_len);
    int k=0;
    for(size_t i=0;i<numbers_len-1;i++)
        for(size_t j=i+1;j<numbers_len;j++){
            if(in(answer,numbers[i]+numbers[j],k))
                answer[k++]=numbers[i]+numbers[j];
        }
    for(size_t i=0;i<k;i++){
        for(size_t j=0;j<k;j++){
            if(answer[i]<answer[j]){
                int tmp=answer[i];
                answer[i]=answer[j];
                answer[j]=tmp;
            }
        }
    }

    return answer;
}