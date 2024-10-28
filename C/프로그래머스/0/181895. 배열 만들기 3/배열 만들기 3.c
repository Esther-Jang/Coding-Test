#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// intervals_rows는 2차원 배열 intervals의 행 길이, intervals_cols는 2차원 배열 intervals의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {
    
    int* answer = (int*)malloc(arr_len*sizeof(int)+1);
    int j=0;
    
    for(size_t i=intervals[0][0];i<=intervals[0][1];i++){
            answer[j++]=arr[i];
    }
    for(size_t i=intervals[1][0];i<=intervals[1][1];i++){
            answer[j++]=arr[i];
    } 
    answer[j]='\0';
    
    return answer;
}