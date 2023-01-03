#include<stdio.h>
#define Max 10

void push(int);
float pop(void);

int top;
float array[Max];

int main(){
    int i;
    push(20);
    push(30);
    push(40);
    
    for(i=0;i<3;i++){
        printf("%f\n",pop());
    }
    


void push(int x){
    if(top+1<Max){
        top++;
        array[top]=x;
        }}
    else{
        printf("error");
    }
}

float pop(void){
    int ret;
    ret=-1;
    if(top>-1){
        ret=array[top];
        top--;
    }
    else{
        printf("error");
    }
    return ret;
}
