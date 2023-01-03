#include<stdio.h>

int inputv(void);
int inputh(void);
int calcs(int,int);
int calcl(int,int);
void outputs(int);
void outputl(int);

int main(){
    int v,h,s,l;
    v=inputv();
    h=inputh();
    s=calcs(v,h);
    l=calcl(v,h);
    outputs(s);
    outputl(l);
}

int inputv(void){
    int v;
    printf("縦の長さは");
    scanf("%d",&v);
    return v;
}

int inputh(void){
    int h;
    printf("横の長さは");
    scanf("%d",&h);
    return h;
}

int calcs(int v,int h){
    int s;
    s=v*h;
    return s;
}

int calcl(int v,int h){
    int l;
    l=2*(v+h);
    return l;
}

void outputs(int s){
    printf("長方形の面積は%d",s);
}

void outputl(int l){
    printf("長方形の周の長さは%d",l);
}
