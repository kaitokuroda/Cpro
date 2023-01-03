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

//新しい関数を三つ追加
void deleteHead(void);

void deleteValue(int);

void deleteall(void);


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
    
    deleteHead();
    
    view();
    
    deleteValue(3);
    
    view();
    
    deleteall();
    
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

void deleteHead(){
    struct Link *next;
    if(head!=NULL){
        next=head->next;
        printf("(%p)%dを削除\n",head,head->data);

        free(head);
        head=next;
    }
}

void deleteall(void){
    while(head!=NULL){
        deleteHead();
    }
}

void deleteValue(data){
    struct Link *itr;
    itr=head;
    struct Link *next;
    if(itr==NULL){
        return;
    }
    if(data==itr->data){
        deleteHead();
        return;
    }
    while(1){
        next=itr->next;
        if(data==next->data){
            itr->next=next->next;
            printf("(%p)%dを削除\n",next,next->data);
            free(next);
            return;
        }
        itr=itr->next;
        return;
    }
}
