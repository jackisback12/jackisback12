#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if (num%5 == 0)
printf("%d is divisible by 5",num);
else 
printf("it is not divisible by 5");
}