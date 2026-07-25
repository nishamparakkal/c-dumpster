#include<stdio.h>
int main()
{
int num;
printf("enter the number:\n");
scanf("%d",&num);
num=(num>>31)&1;

num==1?printf("negative\n"):printf("positive:\n");





return 0;
}
