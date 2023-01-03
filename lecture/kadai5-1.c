#include<stdio.h>
#include<math.h>

float input(void);
float pi(void);
float circle(float);
float area(float);
void output(float);

int main(void){
    float r,s,l;
    printf("半径");
    r=input();
    s=circle(r);
    l=area(r);
    printf("円周");
    output(s);
    printf("面積");
    output(l);
    return 0;
}
float input(void){
    float n;
    scanf("%f",&n);
    return n;
}

float pi(void){
    float n;
    n=4*atan(1);
    return n;
}

float circle(float r){
    float ss;
    ss=2*r*pi();
    return ss;
}

float area(float r){
    float ll;
    ll=r*r*pi();
    return ll;
}

void output(float n){
    printf("%f\n",n);
    return;
}
