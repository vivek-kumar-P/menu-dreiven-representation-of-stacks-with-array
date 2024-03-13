#include<stdio.h>
#include<stdlib.h>
// void count_of_node(struct node*head){
//     int count = 0;
//     if(head == NULL){
//         printf("the link is empty");
//     }
//     struct node *ptr = NULL;
//     ptr = head;
//     while(ptr!=NULL){
//         count++;
//         ptr = ptr->link;
//     }
//     printf("count= %d",count);
// }
// void count_of_node(struct node *head){
//     int count=0;
//     if(head==NULL)
//     printf("linked list is empty");
//     struct node *ptr = NULL;
//     ptr = head;
//     while(ptr!=NULL){
//         count++;
//         ptr=ptr->link;
//     }
//     printf("number of nodes = %d",count);
// }
// void print(struct node*head){
//     if(head==NULL){
//         printf("the linked list is empty");
//     }
//     struct node*ptr = NULL;
//     ptr = head;
//     while(ptr!=NULL){
//         printf("%d",ptr->data);
//         ptr = ptr->link; 
//     }
// }
// addend(struct node*head){
//     struct node*temp,*ptr ;
//     temp = malloc(sizeof(struct node));
//     temp->data= 39;
//     temp->link = NULL;
//     ptr = head;
//     while(ptr->link!=NULL){
//         ptr = ptr->link;
//     }
//     ptr->link = temp;
// }
// int main(){
//     struct node *head = malloc(sizeof(struct node));
//     head ->data = 34;
//     head -> link=NULL;
//     struct node *curr = malloc(sizeof(struct node));
//     curr ->data= 98;
//     curr->link=NULL;
//     head->link=curr;
//     curr = malloc(sizeof(struct node));
//     curr->data=54;
//     head->link->link = curr;
//     count_of_node (head);
//     print(head);
//     addend(head);
//     return 0;
//}


struct node{
    int data;
    struct node *link;
};

struct node* addend(struct node*ptr,int data){
    struct node*temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main(){
    struct node*head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node*ptr = head;
    ptr = addend(ptr,84);
    ptr = addend(ptr,30);
    ptr = addend(ptr,20);

    ptr = head;
    while(ptr->link!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
    return 0 ;

}