#include <stdio.h>
int main() 
{
  int number;
  printf("Enter a Number: ");
  scanf("%d", &number); 
  int firstTerm = 0, secondTerm = 1;
  printf("Fabonnic Series Till These Terms Are: ");    
  for (int i = 1; i <= number; ++i) 
    {
      printf("\n%d", firstTerm, ",");
      int nextTerm = firstTerm + secondTerm;  
      firstTerm = secondTerm;
      secondTerm = nextTerm;  
    }
  return 0;
} 
