#include <stdio.h>
#include "calendar.h"
#include <string.h>

int montharray[20];
int dayarray[20];
char namearray[20][20];
int month;
int day;
int i;
char name[20];

//Invalid Month Check//
int getmonth(int month){
  if(month >0 &&month <=12){
    return 0; /* returns success when within 1-12*/
  }
  else{
    printf("Invalid Input \n");
    return 1; /* returns failure when a number that isn't within 1-12 is inputed */
  }
}
//Invalid Day Check//
int getday(int day){
  if(day >0 &&day <=31){
    return 0; /* returns success when within 1-31 */
  }
  else{
    printf("Invalid Input \n");
    return 1; /* returns failure when not within 1-31 */
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
  } /* for loop and if/else statements for checking if an event exists and printing the event */
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
