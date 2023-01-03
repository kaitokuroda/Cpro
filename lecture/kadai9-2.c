#include<stdio.h>

float average(int *,float *);
void output(int *,float *);
void input(int *,float *);
float variance(int *,float *);
void output_str(char *,float *);

int main(){
    float a[1000];
    float av;
    float var;
    int n;
    int *pn;
    float *pa;

    pn=&n;
    pa=a;

    input(pn,pa);
    var=variance(pn,pa);
    output(pn,pa);
	output_str("average",)
    output_str("variance",var);
    
    return 0;
}

void input(int *pn,float *pa){
    int i;
    scanf("%d",pn);
    for (i=0;i<*pn;i++){
        scanf("%f",pa+i);
    }
    return ;
}

float average(int *pn,float *pa){
    int i;
    float sum;
    float av;

    sum=0;
    for(i=0;i<*pn;i++){
        sum+= *(pa+i);
    }
    av=sum / *pn;

    return av;
}

float variance(int *pn,float *pa){
    int i;
    float av;
float var;

    av=average(pn,pa);

    var=0;
    for(i=0;i<*pn;i++){
        var+=(*(pa+i)-av)*(*(pa+i)-av);
    }
    var=var / *pn;
    return var;
}

void output(int *pn,float *pa){
    int i;
    for(i=0;i<*pn;i++){
        printf("a[%d]=%.2f\n",i,*(pa+i));
    }
}

void output_str(char *c,float *var){
    printf("%s=%.2f\n",c,var);
    return;
}
