#include<stdio.h>
#include<stdlib.h>
#define size 7

int  array[size]={4,2,6,1,3,7,5};
int m=size-1;

void heap();

void swap(int *,int *);

void viewTree();

void heapDown(int );

void heap(){
    int i,j;
    for(i=(m-1)/2;i>=0;i--){
        j=i;
        
            heapDown(j);
        
    }
}

void swap(int* x,int *y){
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}

void heapSort(){
    while(m>=1){
        heap();
        swap(&array[0],&array[m]);
        viewTree();
        m--;
    }
}



void viewTree(){
    int i,j;
    system("clear");
    for(i=1;i<size;i*=2){
        for(j=0;j<i;j++){
            printf("%d ",array[i+j-1]);
        }
        printf("\n");
    }
    getchar();
}

void heapDown(int j){
    if(j*2+2<=m&&array[j*2+2]>array[j]&&array[j*2+2]>array[j*2+1]){
        swap(&array[j],&array[j*2+2]);
        heapDown(2*j+2);
    }else if(j*2+1<=m&&array[j*2+1]>array[j]){
        swap(&array[j],&array[j*2+1]);
        heapDown(2*j+1);
    }
}

int main(){
    viewTree();

    heapSort();
}

