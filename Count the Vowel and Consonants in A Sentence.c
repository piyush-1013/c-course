#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];  
  printf("Please Enter a String Without Gap Between: \n");  
  gets(str);   
  int vCount = 0, cCount = 0, len;
  len = strlen(str);
  for (int i = 0; i < len; i++) 
    {
      char c = str[i];
      if (isalpha(c))  
      {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        {
          vCount++;
        }
        else
        {
          cCount++;  
        }
      }
    }
  printf("Number of Vowel:%d", vCount);   
  printf("\nNumber of Consonant:%d", cCount);      
  return 0; 
}
