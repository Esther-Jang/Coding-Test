#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {//a:b=빈병:콜라, n=보유 빈병
    int answer = 0;
    while(n>=a){
        answer+=(n/a)*b;
        n=n%a+(n/a)*b;
    }
    return answer;
}