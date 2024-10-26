#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isZeroAndFive(int n){
    while(n>0){
        if((n%10==0)||(n%10==5)) 
            n/=10;
        else 
            return 0;
    }
    return 1;
}

int* solution(int l, int r) {
    int* answer = (int*)malloc(1000000*sizeof(int));
    int j=0;
    for(int i=l;i<=r;i++){
        if(isZeroAndFive(i)==1){
            answer[j]=i;
            j++;
        }
    }
    if(j==0) answer[j]=-1;
    return answer;
}