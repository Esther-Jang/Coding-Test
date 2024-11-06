#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    int n=b-1;    
    int md[11]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    for(int i=0;i<a-1;i++)
        n+=md[i];
    
    switch(n%7){
        case 1: return "SAT";
        case 2: return "SUN";
        case 3: return "MON";
        case 4: return "TUE";
        case 5: return "WED";
        case 6: return "THU";
        case 0: return "FRI";
    }
}