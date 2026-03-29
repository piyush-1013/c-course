#include <stdio.h>
int main(int argc, char const *argv[]) 
{ 
  char ch;
  printf("Please Enter a Character: ");
  scanf("%ch", &ch); 
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
  {
    printf("Character Is Alphabet"); 
  }
  else
  {
    printf("Character Is Not Alphabet");
  }
  return 0;
}
