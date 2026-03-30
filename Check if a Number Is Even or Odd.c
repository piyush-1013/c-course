#include <stdio.h>
int main(int argc, char const *argv[])
{ 
  int num; 
  printf("Please Enter a Number: ");
  scanf("%d", &num); 
  if (num % 2 == 0) 
  {
    printf("The Number Is Even");
  }
  else
  {
    printf("The Number Is Odd");
  }
    return 0;
} 
