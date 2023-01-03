#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int*, float*, char**);
float average(int*, float*);
int max(int*,float*);
void output_students(int*, float*, char**);
void output_str(char*, float);
void output_max(float *,char **,int);


int main( ) {
    char *pstr[100];    /* 名前 */
    char **ppstr;   /* pstr[ ] の先頭のアドレス：ポインタのポインタ　*/
    float a[100];   /*　点数 */
    float *pa;  /* a[ ] の先頭のアドレス：ポインタ　*/
    float ave;
    int n;
    int *pn;    /* 設定する数　n に対するポインタ変数　*/
    int max_num;

    /*  ポインタ変数に値をセット　*/
    ppstr = pstr;
    pa = a;
    pn = &n;

    /* 関数を呼ぶ */
    input(pn, pa, ppstr);
    ave = average(pn, pa);
    max_num=max(pn,pa);
    output_students(pn, pa, ppstr);
    output_str("平均", ave);
    output_max(pa,ppstr,max_num);
    return 0;
}

/*入力関数   受け取る引き数名はpn,pa,ppstrとする。*/
void input(int*pn,float*pa,char**ppstr){  //穴埋め
    int i;
    char str[100];
    
    scanf("%d",pn);  //穴埋め
    
    for(i = 0; i <*pn ; i++){  //穴埋め
        scanf("%s",str);  //穴埋め
         *(ppstr+i)= (char*) malloc (sizeof(char) * (strlen(str)+1));  //穴埋め
        strcpy(*(ppstr+i),str);  //穴埋め
        scanf("%f",pa+i);  //穴埋め
    }
}

/* 平均の関数：受け取る引数は pn, paとする。*/
float average(int*pn,float*pa) {  //関数の穴埋め(10行以内)
int i;
float sum=0;
for(i=0;i<*pn;i++){
sum=sum+*(pa+i);
}
return sum/ (*pn);




}

int max(int *pn,float *pa){
    int i;
    int m=0;
    for(i=0;i<*pn;i++){
        if(*(pa+m)<*(pa+i)){
            m=i;
        }
    }
    return m;
}

void output_students(int*pn,float*pa,char**ppstr){  //穴埋め
    int i;

    for(i = 0; i < *pn; i++){
        printf("%sの点数は%.0f である",*(ppstr+i),*(pa+i));  //穴埋め
    }
}

void output_str(char *str, float value){
    printf("%sの値は%.1fである ",str,value);  //穴埋め
}

void output_max(float *pa,char **ppstr,int max_num){
    printf("点数が一番高いの%sの点数は%.0f",*(ppstr+max_num),*(pa+max_num));
}
