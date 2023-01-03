#include<stdio.h>

int input(void);
int sosuu(int);
void output(int);

int main(){
    output(sosuu(input()));
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

void output(int s){
    if(s==0){
        printf("素数ではない");
    }
    else{
        printf("素数");
    }
}
