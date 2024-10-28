#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    
    int* answer = (int*)malloc(arr_len*sizeof(int)+1);
    int min=arr_len, max=0, j=0;
    for(size_t i=0;i<arr_len;i++){
        if(arr[i]==2){
            min=(min>i)?i:min;
            max=i;
        }
    }
    if(max!=0)
        for(size_t i=min;i<=max;i++){
            answer[j++]=arr[i];
        }
    else answer[j++]=-1;
    
    answer[j]='\0';
    
    return answer;
}