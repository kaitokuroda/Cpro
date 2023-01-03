#include<stdio.h>
float input(char*);
float calcs(float,float);
float calcl(float,float);
void output(char*,float);

int main(void){
    float v,h,s,l;
    
    v=input("縦の長さを入力してください");
    h=input("横の長さを入力してください");
    s=calcs(v,h);
    l=calcl(v,h);
    output("円の面積は",s);
    output("周の長さは",l);
}
float input (char* c){
    float x;
    printf("%s",c);
    scanf("%f",&x);
    return x;
}


float calcs(float vv,float hh){
    float ss;
    ss=vv*hh;
    return ss;
}
float calcl(float vvv,float hhh){
    float sss;
    sss=2*(vvv+hhh);
    return sss;
}
void output(char* a,float b){
    printf("%s%f\n",a,b);
}
