#include <stdio.h>

int addNumbers(int n) {
    if (n != 0)
      return n + addNumbers(n - 1);
    else
      return n;
  }
  
int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("sum = %d", addNumbers(num));
  return 0;
}

