#include <stdio.h>
int main() 
{     
  int year;
  printf("Plesae Enter a Year: ");   
  scanf("%d", &year);     
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))   
  {
    printf("This Year Is a leap year");
  }   
  else
  {
    printf("This Year Is Not a leap year"); 
  }
  return 0;
} 
