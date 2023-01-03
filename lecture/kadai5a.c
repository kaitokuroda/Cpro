#include<stdio.h>
#define N 1000;

float a[N];

float input_students(void);
float average(float);
float max(float);
float min(float);
void output(float);

int main(){
    
}

float input_students(void){
    int i;
    float n;
    printf("生徒の人数は");
    scanf("%f",&n);
    for(i=0;i<n;i++){
        printf("%d人目の点数は",i);
        scanf("%f",&a[i]);
        if(a[i]<0||100<a[i]){
            return 0;
        }
    }
    return n;
}

float average(float n){
    int i;
    float ave,sum;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    ave=sum/n;
    return ave;
}

float max(float n){
    
}
