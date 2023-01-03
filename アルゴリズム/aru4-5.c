#include<stdio.h>

int f(int n){
    if(n==0){
        return 1;
    }
    return n*f(n-1);
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }else{
        if(n==1){
            return 1;
        }else{
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
}

int gcd(int n,int m){
    int s;
    s = n % m;
    if(s==0){
        return m;
    }
            return gcd(m,s);
        
}

int lcm(int n,int m){
    int l,g;
    g=gcd(n,m);
    l=(n*m)/g;
    return l;
}

int main(){
    int value,n,m;
    n=5;
    value=f(n);
    printf("f(%d)=%d\n",n,value);
    
    n=20;
    value=fibonacci(n);
    printf("fibonacci(%d) = %d\n",n,value);
    
    n=105;
    m=77;
    value=gcd(n,m);
    printf("gcd(%d,%d) = %d\n",n,m,value);
    
    value = lcm(n,m);
    printf("lcm(%d,%d) = %d\n",n,m,value);
    
    return 0;
}

