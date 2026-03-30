#include <stdio.h> 
int main()
{
  char ch;
  printf("Please Enter a Character: ");
  scanf("%ch", &ch);
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
  {
    printf("The Character is Vowel");
  }
  else
  {
    printf("The Charcter is Consonant");
  }
  return 0;
} 
