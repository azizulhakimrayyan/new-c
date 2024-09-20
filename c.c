#include <stdio.h>
int main (){
  float x;
  char t;
  printf("Enter the purchase amount:");
  scanf("%f",& x);
  printf("Enter type of items ('M': Mill cloth & 'H':Handloom items ):");
  scanf("%s",& t);
  if (0<x&&x<=100)
  {
    switch (t)
    {
    case 'M':
      printf("You have NO discount!!");
      break;
    case 'H':
      printf("Net amount:%4.2f",x-x*(5.0/100.0));
      break;
    default:
      printf("Enter the valid items!!");
      break;
    }
  }
   else if (101<=x&&x<=200)
  {
    switch (t)
    {
    case 'M':
      printf("Net amount:%4.2f",x-x*(5.0/100.0));
      break;
    case 'H':
      printf("Net amount:%4.2f",x-x*(7.5/100.0));
      break;
    default:
      printf("Enter the valid items!!");
      break;
    }
  }
   else if (201<=x&&x<=300)
  {
    switch (t)
    {
    case 'M':
      printf("Net amount:%4.2f",x-x*(7.5/100.0));
      break;
    case 'H':
      printf("Net amount:%4.2f",x-x*(10.0/100.0));
      break;
    default:
      printf("Enter the valid items!!");
      break;
    }
  }
else if (x<300)
  {
    switch (t)
    {
    case 'M':
      printf("Net amount:%4.2f",x-x*(10.0/100.0));
      break;
    case 'H':
      printf("Net amount:%4.2f",x-x*(15/100.0));
      break;
    default:
      printf("Enter the valid items!!");
      break;
   }}
   return 0;}




