#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/time.h>

#define size 5000

int  a[size];
int m=size-1;



void swap(int *,int *);

void quickSort(int,int);

void view();

long getTime();

void putquickSort();

int main(){
    time_t start_time,end_time;
    start_time=time(NULL);
    
    putquickSort();
    
    quickSort(0,m);
    
    end_time=time(NULL);
    
    printf("time:%ld\n",end_time-start_time);
    
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
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return;
}


//ファイル読み込み
void putquickSort(){
    FILE*fp;
    fp=fopen("data5000.txt","r");
    if(fp==NULL){
        printf("file not open.\n");
        return;
    }
    for(int i=0;i<size;i++){
        fscanf(fp,"%d",&a[i]);
    }
    fclose(fp);
}

//現在時刻をミリ秒で取得する関数
long getTime(){
    struct timeval t;
    
    gettimeofday(&t,NULL);
    localtime(&t.tv_sec);
    
    return time(NULL)*1000+t.tv_usec/1000;
}



