#include<stdio.h>
#include<string.h>
struct Car{
    int banngou;
    char name[6];
    int kakaku;
};
int main(){
    struct Car alpha;
    struct Car beta;
    struct Car gamma;
    alpha.banngou=1;
    strcpy(alpha.name,"prius");
    alpha.kakaku=230;
    beta.banngou=2;
    strcpy(beta.name,"march");
    beta.kakaku=130;
    gamma.banngou=3;
    strcpy(gamma.name,"vitz");
    gamma.kakaku=140;
    printf("%d %s %d\n",alpha.banngou,alpha.name,alpha.kakaku);
    printf("%d %s %d\n",beta.banngou,beta.name,beta.kakaku);
    printf("%d %s %d\n",gamma.banngou,gamma.name,gamma.kakaku);

}
