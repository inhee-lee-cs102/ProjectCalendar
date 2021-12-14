#include <stdio.h>
#include <string.h>
#include "calendar.h"

//Invalid Month Check//
int getmonth(int month){
  if(month >0 &&month <=12){
    return 0;
  }
  else{
    printf("Invalid Input \n");
    return 1;
  }
}
//Invalid Day Check//
int getday(int day){
  if(day >0 &&day <=31){
    return 0;
  }
  else{
    printf("Invalid Input \n");
    return 1;
  }
}
//Recall Event Code//
void recallevent(){
  do{
  printf("Enter the Number of the Month (1-12): \n");
  scanf("%d", &month);
  }while(getmonth(month));
  do{
  printf("Enter the Day of the Event (1-28/30/31): \n");
  scanf("%d", &day);
  }while(getday(day));
  int index = -1;
  for (i = 0; i<20; i++){
    if(montharray[i]==month && dayarray[i]==day){
      index = i;
    }
  }
  if (index == -1){
    printf("Event Not Found\n");
  }
  else{
      printf("Event: %s \n", namearray[index]);
  }
}
//Input Event Code//
void inputevent(int count){
  do{
  printf("Enter the Number of the Month (1-12): \n");
  scanf("%d", &month);
  }while(getmonth(month));
  montharray[count] = month;
  do{
  printf("Enter the Day of the Event (1-28/30/31): \n");
  scanf("%d", &day);
  }while(getday(day));
  getchar();
  dayarray[count] = day;
  printf("Enter the Name of the Event: \n");
  fgets(name, 20, stdin);
  strcpy(namearray[count],name);
}
//Main Function//
int main(void) {
  printf("\t Calender: Final C Project \n");
  int count = 0;
  printf("Input 1 to Enter Event and 2 to Recall Event. Enter 3 to End Program: \n");
  int option;
  scanf("%d", &option);
  while (option != 3 && count < 20) {
  if (option == 1){
    inputevent(count);
    count++;
  }
  else{
  if (option == 2){
    recallevent();
  }
  else{
    printf("Invalid Input \n");
  }
  }
  printf("Input 1 to Enter Event and 2 to Recall Event. Enter 3 to End Program: \n");
  scanf("%d", &option);
  }
  return 0;
}
