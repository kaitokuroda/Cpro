#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Link{
    char *data;
    struct Link *next;
};



struct Link *head;

struct Link *newLink(char *data){
    struct Link *nLink=(struct Link*)malloc(sizeof(struct Link));
    nLink->data=(char*)malloc(sizeof(char)*strlen(data)+1);
    nLink->data=data;
    nLink->next=NULL;
    return nLink;
};

void view(void);

void insert(char);

int main(){
    struct Link *tmp;
    
    head=newLink("Apple");

    head->next=newLink("Banana");

    head->next->next=newLink("Orange");

    
    tmp=newLink("Berry");

    tmp->next=head->next->next;

    head->next->next=tmp;
    
    
    view();
    
    return 0;
    
    
}

void insert(char data){
    
}

void view(){
    struct Link *itr=head;
    while(itr!=NULL){
        printf("(%p)%s=>(%p)\n",itr,itr->data,itr->next);
        itr=itr->next;
    }
}

