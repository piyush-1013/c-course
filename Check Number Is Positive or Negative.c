#include <stdio.h> 
int main(int argc, char const *argv[])
{
  int num;
  printf("Please Enter a number: ");
  scanf("%d", &num); 
  if (num > 0)
  {
    printf("The Number Is Positive");
  } 
  else 
  {
    printf("The Number Is Negative");  
  }
  return 0; 
}  
