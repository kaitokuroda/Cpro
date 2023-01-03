#include<stdio.h>
#include<math.h>

float input(void);
float pi(void);
float circle(float);
float area(float);
void outputc(float);
void outputa(float);

int main(){
    float r,l,s;
    r=input();
    l=circle(r);
    s=area(r);
    outputc(l);
    outputa(s);
}

float input(void){
    float r;
    printf("半径の値を入力");
    scanf("%f",&r);
    return r;
}

float pi(void){
    float π;
    π=4*atan(1);
    return π;
}

float circle(float r){
    float l;
    l=2*r*pi();
    return l;
}

float area(float r){
    float s;
    s=r*r*pi();
    return s;
}

void outputc(float c){
    printf("%f\n",c);
}
void outputa(float a){
    printf("%f\n",a);
}

