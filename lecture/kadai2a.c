#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10000

int main(){
    int n,i,j,a[3][3];
    srand(time(NULL));
    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=0;i<3;i++){
            a[i][j]=(rand()%21)*5;
        }
    }
    
    for(j=0;j<n;j++){
        printf("数学の点数は%d点\n",a[0][j]);
        printf("英語の点数は%d点\n",a[1][j]);
        printf("国語の点数は%d点\n",a[2][j]);
        }
    
}
