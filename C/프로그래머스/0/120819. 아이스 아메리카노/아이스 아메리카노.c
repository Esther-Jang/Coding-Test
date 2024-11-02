#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {   
    int* answer = (int*)malloc(2*sizeof(int));
    answer[0]=money/5500;
    answer[1]=money%5500;
    return answer;
}