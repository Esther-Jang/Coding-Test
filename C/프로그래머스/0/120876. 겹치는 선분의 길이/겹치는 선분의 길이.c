#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int answer = 0;
    for(int i=-100;i<100;i++){
        int n=0;
        if((lines[0][0]<=i)&&(lines[0][1]>i)) n++;
        if((lines[1][0]<=i)&&(lines[1][1]>i)) n++;
        if((lines[2][0]<=i)&&(lines[2][1]>i)) n++;
        if(n>1) answer++;
    }
    return answer;
}