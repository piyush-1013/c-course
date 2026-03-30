#include <stdio.h>
#include <math.h> 
int main()
{
  printf("Please Enter a number:\n");  
  int number = 0, originalNumber, remainder, store = 3; 
  scanf("%d", &number);
  double result = 0;
  originalNumber = number; 
  while (originalNumber != 0)    
    {
      remainder = originalNumber % 10; 
      result = result + pow(remainder, store); 
      originalNumber /= 10; 
    }
  if (result == number)  
    printf("Number Is A Armstrong Number"); 
  else    
    printf("Number Is Not A Armstrong Number"); 
  return 0; 
}
