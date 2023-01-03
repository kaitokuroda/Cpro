#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/time.h>


#define size 20000

int  array[size];
int m=size-1;

void heap();

void swap(int *,int *);

void heapSort();

void view();


void heap(){
    int i,j;
    for(i=(m-1)/2;i>=0;i--){
        j=i;
        while(1){
            if(j*2+2<=m&&array[j*2+2]>array[j]&&array[j*2+2]>array[j*2+1]){
                swap(&array[j],&array[j*2+2]);
                j=2*j+2;
            }else if(j*2+1<=m&&array[j*2+1]>array[j]){
                swap(&array[j],&array[j*2+1]);
                j=2*j+1;
            }else{
                break;
            }
        }
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
        view();
        m--;
    }
}

void view(){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void putheapSort(){
    FILE*fp;
    fp=fopen("data20000.txt","r");
    if(fp==NULL){
        printf("file not open.\n");
        return;
    }
    for(int i=0;i<size;i++){
        fscanf(fp,"%d",&array[i]);
    }
    fclose(fp);
}

long getTime(){
    struct timeval t;
    
    gettimeofday(&t,NULL);
    localtime(&t.tv_sec);
    
    return time(NULL)*1000+t.tv_usec/1000;
}



int main(){
    time_t start_time,end_time;
    start_time=time(NULL);
    
    putheapSort();
    
    heapSort();
    
    
    end_time=time(NULL);
    
    printf("time:%ld\n",end_time-start_time);
    
    return 0;
}
