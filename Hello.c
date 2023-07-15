# include <stdio.h>
//(a+b)^2=a^2+2ab+b^2
int main() {
int  a,b;
printf("enter a ");
scanf("%d",&a);

printf("enter b");
scanf("%d",&b);

int sum = {(a + b)*(a + b)};
printf("(a+b)^2: %d",sum);
    return 0;
}