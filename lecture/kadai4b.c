#include<stdio.h>

int inputa(void);
int inputn(void);
int bekijo(int,int);
void output(int);

int main(){
    int a,n,Answer;
    a=inputa();
    n=inputn();
    Answer=bekijo(a,n);
    output(Answer);
}

int inputa(void){
    int a;
    printf("a=");
    scanf("%d",&a);
    return a;
}

int inputn(void){
    int n;
    printf("n=");
    scanf("%d",&n);
    return n;
}

int bekijo(int a,int n){
    int k,i;
    k=1;
    for(i=0;i<n;i++){
        k=k*a;
    }
    return k;
}

void output(int k){
    printf("%d",k);
}

