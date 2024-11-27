#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sort(int S[], size_t len){
    int least, tmp;
    for(size_t i=0;i<len-1;i++){
        least=i;
        for(size_t j=i+1;j<len;j++){
            if(S[j]<S[least]) least=j;
        }
        if(i!=least){
            tmp=S[i];
            S[i]=S[least];
            S[least]=tmp;
        }
    }
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    
    sort(A, A_len);
    sort(B, B_len);
    
    for(size_t i=0;i<A_len;i++){
        answer+=A[i]*B[A_len-i-1];
    }
    
    return answer;
}