#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    char* answer = (char*)malloc(food_len*1000);
    int k=0;
    for(size_t i=1;i<food_len;i++){
        for(size_t j=0;j<food[i]/2;j++)
            answer[k++]=i+'0';
    }
    answer[k++]=0+'0';
    for(size_t i=food_len-1;i>0;i--){
        for(size_t j=0;j<food[i]/2;j++)
            answer[k++]=i+'0';
    }
    answer[k]='\0';
    
    return answer;
}