#include<stdio.h>
#include<stdlib.h>

struct Link{
    int data;
    struct Link *next;
};

struct Link *head;

struct Link *newLink(int data){
    struct Link *nLink=(struct Link*)malloc(sizeof(struct Link));
    nLink->data=data;
    nLink->next=NULL;
    return nLink;
};

void view(void);



int main(){
    struct Link *tmp;
    
    head=newLink(3);
    tmp=head;
    head=newLink(1);
    head->next=tmp;
    head->next->next=newLink(4);
    tmp=newLink(2);
    tmp->next=head->next;
    head->next=tmp;
    
    view();
    
    return 0;
    
    
}

void view(){
    struct Link *itr=head;
    while(itr!=NULL){
        printf("(%p)%d=>(%p)\n",itr,itr->data,itr->next);
        itr=itr->next;
    }
}
