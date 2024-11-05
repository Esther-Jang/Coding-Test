#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int max = 0, answer = 0;
    int* array_n=(int*)malloc(sizeof(int)*1000);
    for(size_t i=0;i<1000;i++){
        array_n[i]=0;
    }
    
    for(size_t i=0;i<array_len;i++){
        array_n[array[i]]++;
    }
    for(size_t i=0;i<1000;i++){
        if(max<array_n[i]){
            max=array_n[i];
            answer=i;
        }
    }
    for(size_t i=0;i<1000;i++){
        if(i!=answer&&max==array_n[i]) answer=-1;
    }
    return answer;
}