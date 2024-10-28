#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(num_list_len*sizeof(int));
    size_t a, b, c=1;
    int j=0;
    switch(n){
        case 1:
            a=0;
            b=slicer[1];
            break;
        case 2:
            a=slicer[0];
            b=num_list_len;
            break;
        case 3:
            a=slicer[0];
            b=slicer[1];
            break;
        default:
            a=slicer[0];
            b=slicer[1];
            c=slicer[2];
            break;
    }
    
    for(size_t i=a;i<=b;i+=c){
        answer[j++]=num_list[i];
    }
    
    return answer;
}