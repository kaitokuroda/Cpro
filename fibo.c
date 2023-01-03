#include<stdio.h>
int factorial(int);

int main(void){
    printf("%d",factorial(5));
}

int factorial(int n){
    int i;

    if(n==2||n==1)
        return 1;
    else
        return factorial(n-1)+factorial(n-2);
    }


