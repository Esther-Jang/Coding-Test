#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// query_len은 배열 query의 길이입니다.
int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    
    for(size_t i=0;i<query_len;i++){
        if(i%2==0){
            arr[query[i]+1]='\0';
        }else{
            arr+=query[i];
        }
    }
        
    return arr;
}