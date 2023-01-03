#include<stdio.h>
#define Max 10

void push(float,float*,int*);
float pop(float*,int*);

int main(){
    int i;
    float array[Max];
    float *parray=array;

    int top=-1;
    int *ptop=&top;

    push(20,parray,ptop);
    push(30,parray,ptop);
    push(40,parray,ptop);
    
     
     for(i=0;i<3;i++){
         printf("%f\n",pop(parray,ptop));
     }
}


void push(float x,float *parray,int *ptop){
    if(*ptop+1<Max){
        *ptop=*ptop+1;
        parray[*ptop]=x;
        }
    else{
        printf("error\n");
    }
}

float pop(float *parray,int *ptop){
    float ret;
    ret=-1;
    if(*ptop>-1){
        ret=parray[*ptop];
        *ptop=*ptop-1;
    }
    else{
        printf("error\n");
    }
    return ret;
}

