#include<stdio.h>

int input(void);
int kannzennsuu(int);

int main(void){
    kannzennsuu(input());
}

int input(void){
    int n;
    printf("数を入力");
    scanf("%d",&n);
    return n;
}

int kannzennsuu(int n){
    int i,j,sum;
    
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d,",i);
        }
    }
    
    return 0;
}

