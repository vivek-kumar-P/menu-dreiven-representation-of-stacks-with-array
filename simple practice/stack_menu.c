// #include<stdio.h>
// #include<stdlib.h>
// #define max_size 5
// int stack[max_size],top = -1;
// int item ,choice,i;
// void push();
// void pop();
// void display();

// int main(){
//     printf("menu:\n");
//     printf("1.push\n");
//     printf("2.pop\n");
//     printf("3.display\n");
//     printf("4.exit\n");
//     while(1){
//         printf("\nenter your choice:");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:push();
//             break;
//             case 2: pop();
//             break;
//             case 3:display();
//             break;
//             case 4:exit(0);
//             break;
//             default :printf("\ninvalide input ,pls enter a diff number\n");
//             exit(0);
//         }
//     }
// return 0;
// }
// void push(){
//     if(top == max_size-1){
//         printf("\nstack overflow\n");
//         // return 0;
//     }
//     else{
//         printf("\nenter a number to push:");
//         scanf("%d",&item);
//         top = top+1;
//         stack[top] = item;
//     }
// }
// void pop(){
//     if(top == -1){
//         printf("\nstack underflow\n");
//         // return 0;
//     }
//     else{
//         item = stack[top];
//         printf("\nthe poped element is:%d",item);
//         top = top-1;
//     }
// }
// void display(){
//     if(top == -1){
//         printf("\nstack is empty\n");
//         // return 0 ;
//     }

//     else{
//         printf("\nthe elements ofthe stacks are:");
//         for(i = top;i>-1;i--){
//             printf("%d\t",stack[i]);
//         }
//     }
// }
#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int stack_arr[max_size],top = -1;
int item , i,temp,choice;
void push(){
    if(top == max_size-1){
        printf("stack overflow");
        exit (0);
    }
    printf("enter the item to be inserted at top:");
    scanf("%d",&item);
    stack_arr[top] = item;
    top=top+1;
}
void pop(){
    if(top == -1){
        printf("stack underflow");
        exit(0);
    }
    temp = stack_arr[top];
    printf("the poped element is %d",temp);
    top = top-1;

}
void display_ele(){
    if(top = -1){
        printf("the stack is empty");
        exit(0);
    }
    printf("the elements of the stack are:");
    for(i=top;i>-1;i--){
        printf("%d\t",stack_arr[i]);
    }
}

int main(){
    printf("----------stack operations -----------");
    printf("1.push");
    printf("2.pop");
    printf("3.display");
    printf("4.exit");
    while(choice!=4){
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();break;
            case 3:display_ele();break;
            case 4: 
            printf("program exiting..........");
            exit(0);
        }
    }
}