#include<stdio.h>
#include<stdlib.h>

#define max_x 10
#define max_y 10

//キャラクタのいる座標
int Nx=1,Ny=1;

//ゴール地点の座標
int Ex=5,Ey=8;

//ゴール地点を見つけたかどうかのフラグ
int success=0;

int m[max_y][max_x]={
    {2,2,2,2,2,2,2,2,2,2},
    {2,0,0,0,0,0,0,0,0,2},
    {2,0,2,2,2,2,2,2,0,2},
    {2,0,0,2,0,2,0,2,2,2},
    {2,0,2,0,0,0,0,0,0,2},
    {2,0,0,0,2,0,2,2,2,2},
    {2,0,2,0,2,0,0,0,0,2},
    {2,0,2,0,2,2,2,2,0,2},
    {2,0,0,0,2,0,0,0,0,2},
    {2,2,2,2,2,2,2,2,2,2}
};

void view(){
    int i,j;
    
    system("clear");
    
    for(i=0;i<max_y;i++){
        for(j=0;j<max_x;j++){
            if(i==Ny&&j==Nx){
                printf("A ");
            }else if(i==Ey&&j==Ex){
                printf("@ ");
            }else if(m[i][j]==0){
                printf("  ");
            }else if(m[i][j]==1){
                printf("o ");
            }else if(m[i][j]==2){
                    printf("[]");
               
    }
}
        printf("\n");
    }
    printf("\n");
    getc(stdin);
}

void visit(int y,int x){
    Ny=Ny+y;
    Nx=Nx+x;
    if(Ny==Ey&&Nx==Ex){
        success=1;
    }
    m[Ny][Nx]=1;
    view();
    if(success!=1&&m[Ny][Nx+1]==0){
        visit(0,+1);
    }
    if(success!=1&&m[Ny][Nx-1]==0){
        visit(0,-1);
    }
    if(success!=1&&m[Ny+1][Nx]==0){
        visit(+1,0);
    }
    if(success!=1&&m[Ny-1][Nx]==0){
        visit(-1,0);
    }
    if(success!=1){
        Ny=Ny-y;
        Nx=Nx-x;
        view();
    }
}

int main(){
    visit(0,0);
    if(success==1){
        printf("ゴール\n");
    }else{
        printf("出口は見つかりませんでした。\n");
    }
    return 0;
}
