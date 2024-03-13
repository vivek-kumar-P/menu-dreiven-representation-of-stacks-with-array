#include<stdio.h>
#include<stdlib.h>
struct node{
    char*usn[10];
    char*name[10];
    char*branch[10];
    int sem;
    long long int phno;
    struct node *next;
};
struct node* createnode(){
    struct node* newnode = malloc(sizeof(struct node));
    printf("enter ur usn:");
    scanf("%s",newnode->usn);
    printf("enter name:");
    scanf("%s",newnode->name);
    printf("enter ur branch:");
    scanf("%s",newnode->branch);
    printf("enter the semester:");
    scanf("%d",newnode->sem);
    printf("enter your number:");
    scanf("%lld",newnode->phno);
    newnode->next = NULL;
    return newnode;
}
void insertfront(struct node**head){
    struct node*newnode = createnode();
    newnode->next = *head;
    *head = newnode->next;
    printf("new node inserted in the front successfully");    
}
void insertend(struct node**head){
    struct node*newnode = createnode();
    if (*head == NULL){
        *head = newnode;
    }
    else{
        struct node*temp = *head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next=NULL;
    }
}
void print(struct node**head){
    if (*head == NULL){
        printf("the linked list is empty");
        exit(0);
    }
    printf("the details of the students are:");
    struct node*ptr = *head;
    int count;
    while(ptr!=NULL){
        printf(" usn : %s, name : %s, branch : %s,semester : %d, number: %lld",ptr->usn,ptr->name,ptr->branch,ptr->sem,ptr->phno );
        count++;
    }
    printf("the number to students are:%d",count);
}
void deletefront(struct node**head){
    if(*head==NULL){
        printf("the linked list is empty");
    }
    else{
        struct node*temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("the node is deleted successfully");
    }
}

void deleteend(struct node**head){
    if(*head==NULL){
        printf("the list is empty");
        exit(0);
    }
    else{
        struct node*curr = *head;
        struct node*prev = curr;
        while(curr->next!=NULL){
            prev = curr;
            curr=curr->next;
        }
        free(curr);
        prev->next=NULL;
        printf("element deleted successfully");
    }
}
void freeList(struct node**head){
    struct node*temp=*head;
    struct node*next;
    while(temp->next != NULL){
        next = temp->next;
        free(temp);
        temp = next;
    }
    printf("exiting form the program");
}
int main(){
    struct node*head = NULL;
    int choice;
    do{
        printf("1.insertfront");
        printf("2.insertend");
        printf("3.delete front");
        printf("4.delete end");
        printf("5.display");
        printf("6.exit");
        printf("enter ur choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertfront(&head);
            break;
            case 2: insertend(&head);
            break;
            case 3:deletefront(&head);
            break;
            case 4:deleteend(&head);
            break;
            case 5:print(&head);
            break;
            case 6:freeList(&head);
            break;
        }
    }while(choice!=6);
}
