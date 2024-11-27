#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    int r = 0;
    if(strlen(s)%2!=0) return false;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('){
            r++;
        }else{
            r--;
            if(r<0) return false;
        }
        if(r>(strlen(s)-i-1)) return false;
    }
    if(r>0) answer=false;
    return answer;
}