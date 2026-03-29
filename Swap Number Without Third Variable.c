#include <stdio.h> 
int main(int argc, char const *argv[])
{ 
int num1 = 10, num2 = 15; 
  printf("Current Value Of variable 1 is: %d", num1);   
  printf("\nCurrent Value Of variable 2 is: %d", num2);   
  num1 += num2;    
  num2 = num1 - 15;  
  num1 -= 10;   
  printf("\nCurrent Value Of variable 1 is: %d", num1);  
  printf("\nCurrent Value Of variable 2 is: %d", num2);
  return 0; 
} 
