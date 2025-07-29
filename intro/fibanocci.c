#include <stdio.h>
int main() {

  int i, n;
  int a = 0, b = 1;  

  printf("Enter the number of terms: ");
  scanf("%d", &n);  
  printf("Fibonacci Series: %d, %d,", a, b);
  for (i = 2; i <= n; ++i) {
    int c = a + b;
    a = b;
    b = c;
    printf(" %d ", c);
  }

  return 0;
}
