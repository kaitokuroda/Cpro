#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N1000


struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root;

void insert(int);

void view(struct Node*);

void insertProc(struct Node*,struct Node*);

int agent(struct Node*,int);

struct Node *newNode(int data){
    struct Node *nNode=(struct Node*)malloc(sizeof(struct Node));
    nNode->data=data;
    nNode->left=NULL;
    nNode->right=NULL;
    return nNode;
};



int main(){
    srand((unsigned int)time(NULL));
    int i = 0; int n;
    for(i = 0; i < 7; i++){
    n = rand() % 21;
    if(root == NULL || agent(root, n) == 0){
    insert(n); }
    }
    view(root);
       printf("Do you know ? >");
       scanf("%d", &n);
    if(agent(root, n) == 1){ printf("I know.¥n");
    } else {
    printf("I don't know.¥n");
    }
    return 0;
}

int agent(struct Node *node,int data){
    if(data==node->data){
        return 1;
    }else if(data<node->data){
        if(node->left==NULL){
            return 0;
        }else{
            return agent(node->left,data);
        }
    }else{
        if(node->right==NULL){
            return 0;
        }else{
            return agent(node->right,data);
        }
    }
}


void insert(int data){
    struct Node *nNode;
    nNode=newNode(data);
    if(root==NULL){
        root=nNode;
        return ;
    }
    insertProc(root,nNode);
}

void insertProc(struct Node *node,struct Node *nNode){
    if(nNode->data<=node->data){
        if(node->left==NULL){
            node->left=nNode;
        }else{
            insertProc(node->left,nNode);
        }
    }else{
        if(node->right==NULL){
            node->right=nNode;
        }else{
            insertProc(node->right,nNode);
        }
    }
}


void view(struct Node *itr){
    if(itr->left!=NULL){
        view(itr->left);
    }
    printf("%d\n",itr->data);
    if(itr->right!=NULL){
        view(itr->right);
    }
    
}


