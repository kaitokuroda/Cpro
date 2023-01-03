#include<stdio.h>

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
    int n,m,x,y,z,a,b,c,f,h,o,p;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    a=gcd(n,m);
    b=n/a;
    c=m/a;
    printf("Answer1=%d/%d\n",c,b);
    
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    z=gcd(x,y);
    o=x/z;
    p=y/z;
    printf("Answer2=%d/%d\n",p,o);
    
    h=c*lcm(o,b)/b;
    
    f=p*lcm(o,b)/o;
    
    printf("Answer1+Answer2 = %d/%d\n",h+f,lcm(o,b));
}
