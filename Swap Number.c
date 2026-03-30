#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Please Enter first number: "); 
  scanf("%d", &a);  
  printf("\nPlease Enter second number: "); 
  scanf("%d", &b);  
  printf("Current Value Of variable 1 is: %d", a);
  printf("\nCurrent Value Of variable 2 is: %d", b);  
  c = a;
  a = b;
  b = c;
  printf("\nCurrent Value Of variable 1 is: %d", a);
  printf("\nCurrent Value Of variable 2 is: %d", b);     
  return 0; 
} 
