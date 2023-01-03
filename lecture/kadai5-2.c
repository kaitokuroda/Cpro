#include<stdio.h>
int input(char*);
int bekijo(int,int);
void output(char*,int);

int main(void){
    int a,n,Answer;
    
    a=input("底を入力");
    n=input("指数を入力");
    Answer=bekijo(a,n);
    output("答えは",Answer);
}

int input(char* c){
    int x;
    printf("%s",c);
    scanf("%d",&x);
    return x;
}

int bekijo(int l,int m){
    int k,i;
    k=1;
    for(i=0;i<m;i++){
        k=k*l;
    }
    return k;
}
void output(char* b,int d){
    printf("%s%d\n",b,d);
}
