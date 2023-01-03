#include<stdio.h>

int input(void);
int sosuu(int);

void output(int);

int main(){
    int n;
    n=input();
    output(n);
}

int input(void){
    int n;
    printf("任意の数");
    scanf("%d",&n);
    return n;
}

int sosuu(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void output(int n){
    int i,s;
    for(i=2;i<=n;i++){
        s=sosuu(i);
        if(s==1){
            printf("%d,",i);
        }
        }
}
