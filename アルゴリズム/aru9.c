#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 8

int  a[size]={5,4,3,8,6,7,2,1};
int m=size-1;



void swap(int *,int *);

void quickSort(int,int);

void view();

int main(){
    quickSort(0,7);
    return 0;
}


void quickSort(int left,int right){
    int i,j;
    if(left>=right){
        return;
    }
    i=left+1;
    j=right;
    while(1){
        while(a[i]<=a[left]&&i<right){
            i++;
        }while(a[j]>=a[left]&&j>left){
            j--;
        }
        if(i>=j){
            break;
        }
        swap(&a[i],&a[j]);
    }
    swap(&a[left],&a[j]);
    view();
    quickSort(left,j-1);
    quickSort(j+1,right);
}

void swap(int* x,int *y){
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}

void view(){
    int i;
    for(i=0;i<8;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return;
}


