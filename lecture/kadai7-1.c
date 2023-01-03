#include<stdio.h>

int main(){
    int i,n;
    
    
    printf("任意の数値");
    scanf("%d",&n);
    
    if(n<=1){
        printf("素数ではない");
        return 0;
    }
    
    for(i=2;i<=n/2;i++){
        if(n%i==0){
        printf("素数ではない");
        return 0;
    }
    }
    printf("素数");
        return 0;
    }
