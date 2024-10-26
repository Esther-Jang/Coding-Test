#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(arr_len*sizeof(int));
    int j=0;
    for(size_t i=0;i<arr_len;i++){
        if(j==0){//빈 배열
            stk[j]=arr[i];
            j++;
        }else if(stk[j-1]<arr[i]){
            stk[j]=arr[i];
            j++;
        }else{
            j--;
            i--;
        }
        
    }
    
    return stk;
}