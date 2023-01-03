#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 4

float array[Max];
int tail=0,head=0,size=0;

void enque(int);
void deque(void);
void view(void);

int main(){
    int n,i;
    char *tmp;
    tmp=(char*)malloc(sizeof(char)*100);
    while(1){
        scanf("%s",tmp);
        printf("[");
        for(i=0;i<4;i++){
            if(array[i] !='\0'){
                printf("%f ",array[i]);
            }else if(array[i]=='\0'){
                printf(". ");
            }}
        if(strcmp(tmp,"exit")==0){
            break;
        }else if (strcmp(tmp,"e")==0){
            scanf("%d",&n);
            enque(n);
        }else if(strcmp(tmp,"d")==0){
            deque();
        }else if(strcmp(tmp,"view")==0){
            view();
        }
            else{
            printf("error\n");
        }
        printf("]");
    }
    return 0;
}

void enque(int n){
    if(size<4){
        array[head]=(float)n;
        head++;
        if(head==4){
            head=0;
        }
        size++;
    }else{
        printf("キューが一杯です\n");
    }
    return;
}

void deque(void){
    int data=-1;
    if(size>0){
        data=array[tail];
        array[tail]='\0';
        tail++;
        if(tail==4){
            tail=0;
        }
        size--;
    }else{
        printf("キューが空です\n");
    }
    return;
}

void view(void){
    int i;
    printf("<");
    for(i=0;i<4;i++){
        if(array[i] !='\0'){
            printf("%f ",array[i]);
        }
    }
    printf(">\n");
}
