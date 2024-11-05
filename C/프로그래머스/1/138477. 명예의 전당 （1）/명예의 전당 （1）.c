#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int* solution(int k, int score[], size_t score_len) {
    int* answer = (int*)malloc(sizeof(int)*score_len);
    for(size_t i=0;i<score_len;i++){
        for(size_t j=0;j<i;j++){
            if(score[i]>score[j]){
                int tmp=score[i];
                score[i]=score[j];
                score[j]=tmp;
            }
        }
        if(i<k) answer[i]=score[i];
        else{
            answer[i]=score[k-1];
        }
    }
    return answer;
}