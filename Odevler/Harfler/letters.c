#include <stdio.h>

int main() {
  int i, j, k, n;
  printf("Bir sayı girin: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");  // boşluk yazdırır
    }
    for (k = 1; k <= i; k++) {
      printf("%c", 'A' + k - 1);  // A, B, C gibi harfler yazdırır
    }
    printf("\n");  // satır sonu
  }
  return 0;
}
