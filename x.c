#include <stdio.h>
int main()
{
  int a;
  printf("enter a:");
  scanf("%d", &a);
  printf("%d", a > 9 && a < 100);
  return 0;
}
