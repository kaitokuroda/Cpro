#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main ( ){
char **pstr;
char str[100];
int i;
    pstr=(char **)malloc(sizeof(char*)*5);
for (i=0;i<5;i++){
printf ("Input Name");
scanf ("%s",str);
*(pstr+i)=(char *) malloc( sizeof (char)*(strlen(str)+1));
strcpy(*(pstr+i),str);
}
    for(i=0;i<5;i++){
        printf("%s\n",*(pstr+i));
    }
}
