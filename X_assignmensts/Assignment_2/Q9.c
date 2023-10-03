#include <stdio.h>

int recurSum(int n);

int main() {

  int num, Sum;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", recurSum(num));
  return 0;
}

int recurSum(int n) 
{
  if (n != 0)
    return (n + recurSum(n - 1));
  else
    return n;
}
