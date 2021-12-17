#include "calendar.h"
#include <stdio.h>
#include <string.h>

//Main Function//
int main() {
  printf("\t Calender: Final C Project \n");
  int count = 0;
  printf("Input 1 to Enter Event and 2 to Recall Event. Enter 3 to End Program: \n");
  int option;
  scanf("%d", &option);
  while (option != 3 && count < 20) {
  if (option == 1){
    inputevent(count);
    count++; /* gives the input function when 1 is inputed */
  }
  else{
  if (option == 2){
     recallevent();/* gives the recall function when 2 is inputed */
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
