#include <stdio.h>

int main() {
  int numbers[3][10] ={
            {2, 1, 2, 3, 4, 5, 6, 7, 7, 8},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
    };

  for (int i = 0; i < 10; ++i) {
    printf("\n----------- Öğrenci %d detayları ----------- \n", i);
    int total = 0;
    int totalSubjects = 0;
    for (int j = 0; j < 3; ++j) {
      printf("Ders %d notu: %d \t", j, numbers[j][i]);
      total += numbers[j][i];
      totalSubjects++;
    }

    float average = (float)total / totalSubjects;  // not ortalaması
    printf("\nNot ortalaması: %.2f \t", average);  // .2f, 2 hane kullanarak ondalık sayıyı yazdırır
    if (average >= 5.0) {  // not ortalaması 5 veya daha yüksekse geçti
      printf("Geçti");
    } else {
      printf("Geçmedi");
    }
  }

  return 0;
}
