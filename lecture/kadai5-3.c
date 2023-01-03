#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

float input(void);
float calcOpposite(float,float);

int main(){
    float a,b,c;
    printf("斜辺\n");
    a=input();
    printf("角度\n");
    b=input();
    c=calcOpposite(a,b);
    printf("対辺%f",c);
    return 0;
}

float input(){
    float n;
    scanf("%f",&n);
    return n;
}

float calcOpposite(float x,float y){
    float z;
    z=x*sin(y*M_PI/180);
    return z;
}
