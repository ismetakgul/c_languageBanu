#include <stdio.h>

int main() 
{
  char name[3][10], i;
  printf("3 isim girin:\n");
  for (i = 0; i < 3; i++) 
  {
    printf("İsim girin: ");
    scanf("%s", &name[i]);
  }
  for (i = 0; i < 3; i++) 
  {
    printf("%s\n", name[i]);
  }
  return 0;
}
