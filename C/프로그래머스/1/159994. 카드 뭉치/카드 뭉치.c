#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// cards1_len은 배열 cards1의 길이입니다.
// cards2_len은 배열 cards2의 길이입니다.
// goal_len은 배열 goal의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    int i=0,j=0,k=0;
    while(i<goal_len){
        if((j<cards1_len)&&(strcmp(goal[i],cards1[j])==0)){
            j++;
            i++;
        }else if((k<cards2_len)&&(strcmp(goal[i],cards2[k])==0)){
            k++;
            i++;
        }else return "No";
    }
    return "Yes";
}