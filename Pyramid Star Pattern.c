#include <stdio.h> 
int main(int argc, char const *argv[])
{ 
  int n = 5, i, j, k; 
  for (i = 1; i <= n; i++) 
  {
      for (j = 5; j > i; j--)    
      {
        printf(" ");
      } 
    for (k = 1; k <= i; k++)  
      {           
        printf("* "); 
      } 
    printf("\n");
  } 
  return 0; 
} 
