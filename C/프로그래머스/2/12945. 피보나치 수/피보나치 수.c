#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer=0, a=0, b=1;
    for(int i=2;i<n+1;i++){
        answer=a%1234567+b%1234567;
        a=b;
        b=answer;
    }
    return answer%1234567;
}