#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    
    for(size_t i=0;i<arr_len;i++){
        if(arr[i]>=50&&arr[i]%2==0){
            arr[i]/=2;
        }else if(arr[i]<50&&arr[i]%2==1){
            arr[i]*=2;
        }
    }
    
    return arr;
}