#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
int main(void){
    srand(time(NULL));
    int i,j,n,a[3][N],sum[3],max[3],min[3],b[3];
    float average[3],variance[3],s[3];
printf("生徒数は");
scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
		a[j][i]=(rand()%21)*5;
        }
    }
for(i=0;i<n;i++){
printf("%d人目の生徒 数学%d点　英語%d点　国語%d点\n",i,a[0][i],a[1][i],a[2][i]);
            }
    for(i=0;i<3;i++){
        sum[i]=0;
    }
    for(i=0;i<3;i++){
    for(j=0;j<n;j++){
        sum[i]=sum[i]+a[i][j];
    }
    }
    
    for(i=0;i<3;i++){
//        average[i]=0;
        average[i]=(float)sum[i]/(float)n;
    }
    printf("平均点　数学%f点　英語%f点　国語%f点\n",average[0],average[1],average[2]);
    for(i=0;i<3;i++){
        max[i]=0;
        min[i]=100;
    }
    for(i=0;i<3;i++){
    for(j=0;j<n;j++){
        if(a[i][j]>max[i]){
            max[i]=a[i][j];
            b[i]=j;
        }
        if(a[i][j]<min[i]){
            min[i]=a[i][j];
        }
    }
    }
    printf("最高得点 数学%d点 英語%d点 国語%d点\n",max[0],max[1],max[2]);
    printf("最低得点 数学%d点 英語%d点 国語%d点\n",min[0],min[1],min[2]);
    printf("数学%d番 英語%d番 国語%d番\n",b[0],b[1],b[2]);    for(j=0;j<3;j++){
    for(i=0;i<n;i++){
        s[j]+=(average[j]-a[j][i])*(average[j]-a[j][i]);
        }
    }
    for(j=0;j<3;j++){
        variance[j]=s[j]/n;
    }
    printf("分散 数学%f 英語%f　国語%f\n",variance[0],variance[1],variance[2]);
        
    
    
    return 0;
}
    

