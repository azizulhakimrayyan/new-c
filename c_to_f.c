#include <stdio.h>

int main()
{
  float c, f;
  printf("Enter the temperature in celcius:");
  scanf("%f", &c);

  printf("Temperature in farenheit:%f\n", (c * 1.8) + 32);
  printf("Enter the temperature in farenheit:");
  scanf("%f", &f);

  printf("Temperature in celcius:%f", ((f - 32) * 100) / 180);
  return 0;
}
