#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    for(size_t i=0;i<array_len;i++){
        for(size_t j=0;j<array_len;j++){
            if(array[i]>array[j]){
                int tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }        
    }
    return array[array_len/2];
}