#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(1000*sizeof(int));
    answer[0]=n;
    int j=1;
    
    while(n!=1){
        if(n%2==0) n/=2;
        else n=3*n+1;
        answer[j++]=n;
    }
    
    return answer;
}