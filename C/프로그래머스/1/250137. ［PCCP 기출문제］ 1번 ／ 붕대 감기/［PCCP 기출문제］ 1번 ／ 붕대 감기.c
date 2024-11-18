#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int answer = health;
    for(size_t i=0;i<attacks_rows-1;i++){
        answer-=attacks[i][1];
        if(answer<=0) return -1;
        int conti=(attacks[i+1][0]-attacks[i][0])-1;
        if(conti>=bandage[0]) answer+=bandage[2]*(conti/bandage[0]);
        answer+=bandage[1]*conti;
        if(answer>health) answer=health;
    }
    answer-=attacks[attacks_rows-1][1];
    if(answer<=0) return -1;
    return answer;
}