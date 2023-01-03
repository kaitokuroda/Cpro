#define N 1000
#include<stdio.h>
#include<math.h>

int a[N];
float input_students(void);
float average(float);
float max(float);
float min(float);
void output(float);
float variance(float,float);
float standardDeviation(float);

int main(){
    float n,a,b,c;
    n=input_students();
    a=average(n);
    b=max(n);
    c=min(n);
    printf("平均点");
    output(a);
    printf("最大値");
    output(b);
    printf("最小値");
    output(c);
    printf("分散");
    float var=variance(n,a);
    output(var);
    printf("標準偏差");
    float stan=standardDeviation(var);
    output(stan);
}

float input_students(){
    int i;
    float number;
    printf("生徒の数");
    scanf("%f",&number);
        for(i=0;i<number;i++){
        printf("%d人目の点数は",i);
        scanf("%d",&a[i]);
            if(a[i]<0||a[i]>100){
                return 0;
    }
    }
    return number;
}

float average(float number){
    int i,sum;
    float heikin2;
    sum=0;
    for(i=0;i<number;i++){
        sum=sum+a[i];
    }
    heikin2=(float)sum/number;
    return heikin2;
}

float max(float number){
    int i;
    float max;
    max=0;
    for(i=0;i<number;i++){
        if(max<a[i]){
        max=a[i];
    }
}
    return max;
}

float min(float number){
    int i;
    float min;
    min=101;
    for(i=0;i<number;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}


void output(float l){
    printf("%f\n",l);
}

float variance(float number,float average){
    int i;
    float sum;
    sum=0;
    for(i=0;i<number;i++){
        sum+=(average-a[i])*(average-a[i]);
    }
    return sum/number;
}

float standardDeviation(float variance){
    return sqrt(variance);
}
