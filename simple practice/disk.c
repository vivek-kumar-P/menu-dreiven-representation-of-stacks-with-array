#include<stdio.h>
void tower(int , char, char, char);
int main(){
    int num;
    printf("enter the number of disks to be moved:");
    scanf("%d",&num);
    printf("here is the sequence of moves to tower of honai:");
    tower(num,"a","b","c");
    return 0;
}
void tower(int num,char frompeg,char topeg,char auxpeg){
    if(num == 1){
        printf("move disk 1 from pege %c to pege %c.",frompeg,topeg);
        return ;
    }
    tower( num-1,frompeg,auxpeg,topeg);
    printf("\n move disk %d from pege %c to pege %c",num,frompeg,topeg);
    tower( num - 1,auxpeg,topeg,frompeg);

}