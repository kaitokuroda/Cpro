#include<stdio.h>
#include<stdlib.h>
#define seisekiMAX 256



struct Seiseki{
    char name[256];
    int kokugo;
    int sansu;
    int rika;
};

void putSeisekiArray(struct Seiseki*);

void view(struct Seiseki*);

void sort(struct Seiseki*);


int seisekiCount=0;


int main(){
    struct Seiseki seiseki[seisekiMAX];
    
    putSeisekiArray(seiseki);
    
    printf("****origin****\n");
    view(seiseki);
    
    sort(seiseki);
    
    printf("****sorted****\n");
    view(seiseki);
    
    return 0;
}

void putSeisekiArray(struct Seiseki *seiseki){
    FILE*fp;
    char readline[256];
    fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("file not open.\n");
        
    }
    while(fgets(readline,sizeof(readline),fp)!=NULL){
        sscanf(readline,"%s %d %d %d",(seiseki+seisekiCount)->name,&(seiseki+seisekiCount)->kokugo,&(seiseki+seisekiCount)->sansu,&(seiseki+seisekiCount)->rika);
        seisekiCount++;
        
    }
    fclose(fp);
}

void view(struct Seiseki *seiseki){
    int i;
    for(i=0;i<seisekiCount;i++){
        printf("%s %d %d %d\n",(seiseki+i)->name,(seiseki+i)->kokugo,(seiseki+i)->sansu,(seiseki+i)->rika);
    }
}

void sort(struct Seiseki *seiseki){
    int i,j;
    struct Seiseki tmp;
    for(i=0;i<=seisekiCount-2;i++){
        for(j=0;j<=seisekiCount-2-i;j++){
            if((seiseki+j)->kokugo<(seiseki+j+1)->kokugo){
                tmp=*(seiseki+j);
                *(seiseki+j)=*(seiseki+j+1);
                *(seiseki+j+1)=tmp;
            }
        }
    }
}





