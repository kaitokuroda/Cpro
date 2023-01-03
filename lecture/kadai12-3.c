#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Max 10

void push(float);
float pop(void);

float array[Max];
int top=-1;

int main(){
    char tmp[10];
    float a;
    float b;
    
    while(1){
        scanf("%s",tmp);
        if(strcmp(tmp,"=")==0){
            break;
        }else if(strcmp(tmp,"*")==0){
            b=pop();
            a=pop();
            push(a*b);
        }else if(strcmp(tmp,"+")==0){
            b=pop();
            a=pop();
            push(a+b);
        }else if(strcmp(tmp,"-")==0){
            b=pop();
            a=pop();
            push(a-b);
        }else{
            push(atof(tmp));
        }
    }
    printf("%f\n",pop());
    return 0;
}

void push(float n){
    if(top+1<Max){
        top++;
        array[top]=n;
    }else{
        printf("error\n");
    }
}

float pop(void){
    float ret=-1;
    if(top>-1){
        ret=array[top];
        top--;
    }else{
        printf("error\n");
    }
    return ret;
}
