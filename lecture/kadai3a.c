#include<stdio.h>

float input(void);
float area(float);
void output(float);

int main(){
    output(area(input()));
}

float input(void){
    float r;
    printf("半径を入力");
    scanf("%f",&r);
    return r;
}

float area(float r){
    float a;
    a=r*r*3.14;
    return a;
}

void output(float a){
    printf("面積は%f",a);
}
