#include <stdio.h>      
int main()
{
  printf("Please Enter a number:\n");
  int Number = 0;
  scanf("%d", &Number);  
  int r, sum = 0, temp;
  temp = Number; 
  while (Number > 0) 
    { 
      r = Number % 10; 
      sum = (sum * 10) + r; 
      Number = Number / 10;
    } 
  if (temp == sum)
  {
    printf("Palindrome");
  }
  else  
  {
    printf("Not a Palindrome");
  } 
  return 0; 
}
