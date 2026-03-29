#include <stdio.h>
int main(int argc, char const *argv[])   
{   
  int number, digit, sum = 0;   
  printf("Please Enter a number: ");  
  scanf("%d", &number);   
  while (number > 0)  
  {
     digit = number % 10; 
     sum = sum + digit;    
     mber = number / 10;    
  }
  printf("The Sum of all number is: %d", sum);  
  return 0;
}
