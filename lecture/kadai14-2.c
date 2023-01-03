#include<stdio.h>
#include<string.h>

struct Airplane{
    char aname[6];
    int binname;
    int time;
    char place[8];
};
int main(){
    struct Airplane a[4];
    strcpy(a[0].aname,"JAL");
    a[0].binname=1017;
    a[0].time=700;
    strcpy(a[0].place,"Haneda");
    strcpy(a[1].aname,"ANA");
    a[1].binname=5403;
    a[1].time=2100;
    strcpy(a[1].place,"Sapporo");
    strcpy(a[2].aname,"ANA");
    a[2].binname=3220;
    a[2].time=1800;
    strcpy(a[2].place,"Osaka");
    strcpy(a[3].aname,"AIRDO");
    a[3].binname=26;
    a[3].time=2100;
    strcpy(a[3].place,"Sapporo");

    printf("(%s,%d,%d,%s)",a[0].aname,a[0].binname,a[0].time,a[0].place);
    printf("(%s,%d,%d,%s)",a[1].aname,a[1].binname,a[1].time,a[1].place);
    printf("(%s,%d,%d,%s)",a[2].aname,a[2].binname,a[2].time,a[2].place);
    printf("(%s,%d,%d,%s)",a[3].aname,a[3].binname,a[3].time,a[3].place);

}


