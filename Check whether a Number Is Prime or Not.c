#include <stdio.h> 
int main() 
{
  int n, i, flag = 0;    
  printf("Enter a positive integer: "); 
  scanf("%d", &n); 
  // Iterate from 2 to n/2 
  for(i = 2; i <= n/2; ++i)
  {  
  // If n is divisible by i, then n is not prime  
    if(n % i == 0)
    {
      flag = 1; 
      break;  
    }
  }
  if (n == 1)
  {
    printf("1 is neither prime nor composite.");
  }
  else
  {
    if (flag == 0) 
      printf("%d is a prime number.", n);
    else    
      printf("%d is not a prime number.", n);
  }      
    return 0;
}  
