#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    char* answer = (char*)malloc(strlen(s)+1);
    bool flag=true;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            answer[i]=s[i];
            flag=true;
        }else{
            if(flag)
                answer[i]=(s[i]>='a'&&s[i]<='z')?s[i]-32:s[i];
            else
                answer[i]=(s[i]>='A'&&s[i]<='Z')?s[i]+32:s[i];
            flag=flag?false:true;
        }
    }
    answer[strlen(s)]='\0';
    return answer;
}