#include<stdio.h>
float inputv(void);
float inputh(void);
float calcs(float,float);
float calcl(float,float);
void outputs(float);
void outputl(float);

int main(){
    float v,h,s,l;
    v=inputv();
    h=inputh();
    s=calcs(v,h);
    l=calcl(v,h);
    outputs(s);
    outputl(l);
}
float inputv(){
    float v1;
    printf("縦の値");
    scanf("%f",&v1);
    return v1;
}
float inputh(){
    float h1;
    printf("横の値");
    scanf("%f",&h1);
    return h1;
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
void outputs(float c){
    printf("面積＝%f\n",c);
}
void outputl(float cc){
    printf("周の長さ＝%f\n",cc);
}
