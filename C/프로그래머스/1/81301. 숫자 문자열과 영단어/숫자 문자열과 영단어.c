#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    char* answer = (char*)malloc(strlen(s));
    int k=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0'&&s[i]<='9'){
            answer[k++]=s[i];
        }else{
            if(strncmp(s+i,"zer",3)==0){
                answer[k++]='0';
                i+=2;
            }else if(strncmp(s+i,"one",3)==0){
                answer[k++]='1';
                i+=2;
            }else if(strncmp(s+i,"two",3)==0){
                answer[k++]='2';
                i+=2;
            }else if(strncmp(s+i,"thr",3)==0){
                answer[k++]='3';
                i+=4;
            }else if(strncmp(s+i,"fou",3)==0){
                answer[k++]='4';
                i+=3;
            }else if(strncmp(s+i,"fiv",3)==0){
                answer[k++]='5';
                i+=3;
            }else if(strncmp(s+i,"six",3)==0){
                answer[k++]='6';
                i+=2;
            }else if(strncmp(s+i,"sev",3)==0){
                answer[k++]='7';
                i+=4;
            }else if(strncmp(s+i,"eig",3)==0){
                answer[k++]='8';
                i+=4;
            }else if(strncmp(s+i,"nin",3)==0){
                answer[k++]='9';
                i+=3;
            }
            
        }
    }
    return atoi(answer);
}