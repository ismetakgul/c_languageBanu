//AKIF
//C program to input 10 numbers from user and display 10 numbers using array.

#include <stdio.h>
int main()
{
//   YOUR CODE HERE
  int numbers[10];  // dizi tanımla
  
  printf("Lütfen 10 sayı girin:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &numbers[i]);  // kullanıcıdan sayı girişi al
  }

  printf("Girdiğiniz sayılar:\n");
  for (int i = 0; i < 10; i++) 
  {
    printf("%d ", numbers[i]);  // sayıları ekrana yazdır
  }

  return 0;
}
