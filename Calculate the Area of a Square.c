#include <stdio.h> 
int main(int argc, char const *argv[])
{   
  int area, side; 
  printf("Please Enter a side: ");   
  scanf("%d", &side);   
  area = side * side;    
  printf("The Area Is:%d", area);  
  return 0;
} 
