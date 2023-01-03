#include<stdio.h>

int gcd(int n,int m){
    int s;
    s = n % m;
    if(s==0){
        return m;
    }
            return gcd(m,s);
        
}


int main(){
    int n,m,value;
    n=105;
    m=77;
    value=gcd(n,m);
    printf("gcd(%d,%d) = %d\n",n,m,value);
}
