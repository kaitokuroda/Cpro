#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }else{
        if(n==1){
            return 1;
        }else{
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
}

int main(){
    int n,value;
    n=20;
    value=fibonacci(n);
    printf("fibonacci(%d) = %d\n",n,value);
}
