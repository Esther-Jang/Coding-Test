#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int e=0, o=0;
    
    for(size_t i=o;i<num_list_len;i++){
        if(i%2==0){
            o+=num_list[i];
        }else{
            e+=num_list[i];
        }
    }
    
    return (e>o)?e:o;
}