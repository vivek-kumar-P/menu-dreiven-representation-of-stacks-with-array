#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node * next;
    int data;
    struct node * prev;
};

struct node*addtoempty(struct node*head,int data){
    struct node*temp = malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = data;
    temp->prev = NULL;
    head = temp;
    return head;
}

struct node*addatbeg(struct node*head,int data){
    struct node*temp = malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = data;
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

struct node*addatend(struct node*head , int data){
    struct node*temp,*tp;
    temp =malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=data;
    temp->prev=NULL;
    tp = head;
    while(tp->next!=NULL){
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;
}

int main(){
    struct node*head = NULL;
    struct node*ptr = NULL;
    head = addtoempty(head,39);
    head = addatbeg(head , 75);
    head = addatend(head,64);
    ptr = head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}