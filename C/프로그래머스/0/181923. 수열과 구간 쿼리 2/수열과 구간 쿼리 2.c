#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(queries_rows*sizeof(int));
    for(size_t i=0;i<queries_rows;i++){//쿼리 순회
        
        int min=1000001;
        int s=queries[i][0];
        int e=queries[i][1];
        int k=queries[i][2];
        
        for(size_t j=s;j<=e;j++)//배열 순회
            if((k<arr[j])&&(min>arr[j])) {
                min=arr[j];
            }
        if(min==1000001) answer[i]=-1;
        else answer[i]=min;
    }
    
    return answer;
}