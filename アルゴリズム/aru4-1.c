#include<stdio.h>

int f(int n){
    if(n==0){
        return 1;
    }
    return n*f(n-1);
}

int main(){
    int value,n;
    n=5;
    value=f(n);
    printf("f(%d)=%d\n",n,value);
    return 0;
}
