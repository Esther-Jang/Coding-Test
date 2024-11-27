#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int lcm(int a, int b){
    return(a*b)/gcd(a,b);
}

int gcd(int a, int b){
    while(a!=b){
        if(a>=b) a-=b;
        else b-=a;
    }
    return a;
}

int solution(int arr[], size_t arr_len) {
    int answer = 1;
    for(size_t i=0;i<arr_len;i++){
        answer=lcm(answer, arr[i]);
    }
    return answer;
}