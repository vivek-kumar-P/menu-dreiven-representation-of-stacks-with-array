// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// struct Day{
//     char *name;
//     int date;
//     char *activity;
// };
// struct Day createday(){
//     struct Day day;
//     day.name=(char*)malloc(20*sizeof(char));
//     printf("\nenter the name of the of the day:");
//     scanf("%s",day.name);
//     printf("\nenter the date:");
//     scanf("%d",&day.date);
//     day.activity = (char*)malloc(100*sizeof(char));
//     printf("\nenter the acitvity for the day:");
//     scanf("%s[^\n]\n",day.activity);
//     return day;
// }
// int isDuplicate(struct Day calender[7], struct Day newday,int numdays){
//     for(int i=0;i<numdays;i++){
//         if(strcmp(calender[i].name,newday.name)==0){
//             return 1;
//         }
//     }
//     return 0;
// }
// void read(struct Day calender[7]){
//     int numdays=0;
//     while (numdays<7){
//         printf("\nenter the details for the day%d\n",numdays+1);
//         struct Day newday=createday();
            
//         if(!isDuplicate(calender,newday,numdays)){
//         calender[numdays]=newday;
//         numdays++;
//         }else{
//             printf("please enter a different name of the day\n");
//             free(newday.name);
//             free(newday.activity);
//         }
//     }
// }
// void display(struct Day calender[7]){
//     printf("calender for the week :\n");
//     for(int i =0; i<7;i++){
//         printf("Day %d: %s,date: %d \n ",i+1,calender[i].name,calender[i].date);
//         printf("activity of the day: %s\n\n",calender[i].activity);
//     }
// }    
// void freememory(struct Day calender[7]){
//     for(int i=0;i<7;i++){
//         free(calender[i].name);
//         free(calender[i].activity);
//     }
// }
// int main(){
//     struct Day calender[7];
//     printf("create a weekly calender:\n\n");
//     read(calender);
//     display(calender);
//     freememory(calender);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// struct Day{
//     char*name;
//     int date;
//     char *activity;
// };
// struct Day createday(){
//     struct Day day;
//     day.name=(char*)malloc(10*sizeof(char));
//     printf("\nenter the name of the day:");
//     scanf("%s",day.name);
//     printf("entr the date:");
//     scanf("%d",&day.date);
//     day.activity = (char*)malloc(10*sizeof(char));
//     printf("enter the activity of the day:");
//     scanf("%s",day.activity);
//     return day;
// }
// int isduplicate(struct Day calender[7],struct Day newday,int numdays){
//     for(int i = 0;i<numdays;i++){
//         if(strcmp(calender[i].name,newday.name)==0){
//             return 1;
//         }
//     }
//     return 0;
// }
// void read(struct Day calender[7]){
//     int numdays = 0;
//     while(numdays<7){
//         printf("enter the daetails of the day %d",numdays+1);
//         struct Day newday = createday();

//         if(!isduplicate(calender,newday,numdays)){
//             calender[numdays] = newday;
//             numdays++;
//         }else{
//             printf("you have repeated the day name.");
//             free(newday.activity);
//             free(newday.name);
//             // return 0;
//         }
//     }
// }
// void display(struct Day calender[7]){
//     printf("calender for the week");
//     for(int i = 0;i<7;i++){
//         printf("day %d , day : %s, date : %d", i+1,calender[i].name,calender[i].date);
//         printf("activity : %s",calender[i].activity);
//     }
// }
// void freememeory(struct Day calender[7]){
//     for (int i = 0;i<7;i++){
//         free(calender[i].name);
//         free(calender[i].activity);
//     }
// }
// int main(){
//     printf("create a weekly calender");
//     struct Day calender[7];
//     read(calender);
//     display(calender);
//     freememeory(calender);
//     return 0;
// }