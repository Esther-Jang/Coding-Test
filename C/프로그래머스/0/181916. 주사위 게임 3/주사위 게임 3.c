#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sort(int n[], int a, int b, int c, int d){
    n[0]=a;
    n[1]=b;
    n[2]=c;
    n[3]=d;
    
    for(int i=0;i<3;i++){
        int m=i;
        for(int j=i+1;j<4;j++)
            if(n[m]<n[j]) m=j;
        int tmp=n[m];
        n[m]=n[i];
        n[i]=tmp;        
    }
}

int solution(int a, int b, int c, int d) {
    int n[4];
    sort(n,a,b,c,d);
    
    if(n[0]==n[3]) return 1111*n[0];
    else if(n[0]==n[2]) return (10*n[0]+n[3])*(10*n[0]+n[3]);
    else if(n[1]==n[3]) return (10*n[1]+n[0])*(10*n[1]+n[0]);
    else if(n[0]==n[1]&&n[2]==n[3]) return (n[0]+n[2])*(n[0]-n[2]);
    else if(n[0]==n[1]) return (n[2]*n[3]);
    else if(n[1]==n[2]) return (n[0]*n[3]);
    else if(n[2]==n[3]) return (n[0]*n[1]);
    else return n[3];
    
}