#include <stdio.h>
int main()
{
  int is_monday;
  printf(" is monday?(true-1 & false-0):");
  scanf("%d", &is_monday);
  int is_snowing;
  printf(" is snowing?(true-1 & false-0):");
  scanf("%d", &is_snowing);
  printf("%d", is_monday && is_snowing);

  return 0;
}
