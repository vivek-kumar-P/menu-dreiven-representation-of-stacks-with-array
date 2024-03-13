#include<stdio.h>
#include<stdlib.h>
struct student{
    char *usn[10];
    char *name[10];
    char *program[10];
    int sem;
    long long int phno;
    struct student *next;
};
struct student *creatnode(){
    struct student *newnode = malloc(sizeof(struct student));
    printf("usn:");
    scanf("%s",newnode->usn);
    printf("name:");
    scanf("%s",newnode->name);
    printf("program:");
    scanf("%s",newnode->program);
    printf("semester:");
    scanf("%d",&newnode->sem);
    printf("phone number:");
    scanf("%lld",&newnode->phno);
    newnode->next = NULL;
    return 0;
}

void insertfront(){

}
int main(){
    int choice;
    while(1){
        printf("\n1.insert front");
        printf("\n2.insert end");
        printf("\n3.delete front");
        printf("\n4.delete end");
        printf("\n5.display the nodes");
        printf("\n6.exit");
        printf("enter ur choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:insertfront();
            break;
            case 2:insertend();
            break;
            case 3:deletefront();
            break;
            case 4:deleteend();
            break;
            case 5:displaynodes();
            break;
            case 6:exit(0);
            break;
            default : printf("invalid input");
            break;
        }
    }
}