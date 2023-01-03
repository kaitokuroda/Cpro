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

void insert(int);

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
    
    insert(3);
    insert(1);
    insert(4);
    insert(2);
    
    view();
    
    return 0;
    
    
}

void insert(int data){

    struct Link *nLink;
    struct Link *itr;
    
nLink=newLink(data);

if(head==NULL){
    head=nLink;
    return ;
}else{
    if(nLink->data<head->data){
    nLink->next=head;
        return ;
}else{
    itr=head;
    while(itr==NULL){
        if(itr->next==NULL){
            itr->next=nLink;
            return ;
        }else{
            if(nLink->data<itr->next->data){
            nLink->next=itr->next;
            itr->next=nLink;
                return ;
        }else{
            itr=itr->next;
            return ;
        }
            return ; }
        return ;}
    
    return ;}
    
    return ;}
    
    return ;}

void view(){
    struct Link *itr=head;
    while(itr!=NULL){
        printf("(%p)%d=>(%p)\n",itr,itr->data,itr->next);
        itr=itr->next;
    }
}

