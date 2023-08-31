#include <stdio.h>
int main (){
  int name;
  printf("enter number (1-8):");
  scanf("%d", &name);
  switch (name)
  {
  case 1:
    printf("Name:MD.Abul hossain Mizi,age:62");
    break;
  case 2:
    printf("Name:Rahanara Begum,age:55");
    break;
  case 3:
    printf("Name:MD.Ali hossain,age:32");
    break;
  case 4:
    printf("Name:MD.Kawcher hossain mizi,age:24");
    break;
  case 5:
    printf("Name:razia,age:24");
    break;
  case 6:
    printf("Name:MD.Azizul hossain ,age:21");
    break;
  case 7:
    printf("Name:sariha safrin tasnim,age:13");
    break;
  case 8:
    printf("Name:Thahura,age:2");
    break;
  default:
    printf("not a valid number");
    break;
    
  }
  return 0;
}