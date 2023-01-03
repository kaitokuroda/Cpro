#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Salary{
    int kihon;
    int koutuuhi;
    int kyuuyo;
};

struct S_data {
    int number;
    char *name;
    char *part;
    struct Salary salary;
};

void input(struct S_data*,int);
void output(struct S_data*,int);

int main(){
    int i,n;
    printf("人数は");
    scanf("%d",&n);
    struct S_data s_data[n] ;
    struct S_data *ps_data;
    ps_data=s_data;
    input(s_data,n);
    output(s_data,n);
    return 0;
}

void input(struct S_data *ps_data,int n){
    int i;
    for(i=0;i<n;i++){
        (ps_data+i)->name=(char*)malloc(sizeof(char)*32);
        (ps_data+i)->part=(char*)malloc(sizeof(char)*32);
        printf("社員番号は");
        scanf("%d",&(ps_data+i)->number);
        printf("氏名は");
        scanf("%s",(ps_data+i)->name);
        printf("役職は");
        scanf("%s",(ps_data+i)->part);
        printf("基本給は");
        scanf("%d",&(ps_data+i)->salary.kihon);
        printf("交通費は");
        scanf("%d",&(ps_data+i)->salary.koutuuhi);
        (ps_data+i)->salary.kyuuyo=    (ps_data+i)->salary.kihon+(ps_data+i)->salary.koutuuhi;
        printf("\n");
    }
}


void output(struct S_data *ps_data,int n){
    int i;
    for(i=0;i<n;i++){
        printf("社員番号　%d番\n氏名 %s\n役職　%s\n給与 %d円\n",
               (ps_data+i)->number,(ps_data+i)->name,(ps_data+i)->part,(ps_data+i)->salary.kyuuyo);
printf("\n");   
 }
}
