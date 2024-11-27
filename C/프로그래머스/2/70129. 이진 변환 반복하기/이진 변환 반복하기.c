#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int onlyOne(char* c){//0제거 반환, 길이=원래 길이-0개수
    int i=0,cnt=0;
    for(int i=0;i<strlen(c);i++){
        if(c[i]=='0') cnt++;
    }
    
    int len=(strlen(c)-cnt);
    strcpy(c,"");

    while(len>0){
        c[i++]=len%2+'0';
        len/=2;  
    }
    c[i]='\0';

    return cnt;
}


int* solution(const char* s) {

    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0]=0;
    answer[1]=0;
    char* c = (char*)malloc(strlen(s));
    strcpy(c, s);
    
    while(strcmp(c,"1")!=0){
        answer[0]++;
        answer[1]+=onlyOne(c);
        printf("%s",c);
    }
    
    return answer;
}