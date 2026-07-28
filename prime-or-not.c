#include<stdio.h>
int main()
{
int num,i,rem,isprime=1;
printf("enter the num:\n");
scanf("%d",&num);

if (num<=1)
{
	printf("not prime\n");
	return 0;
}

for(i=2;i<num;i++)
{
if(num%i==0)
	{
		isprime=0;
		break;
	}
}
if(isprime==1)
	printf("prime\n");
else
printf("no prime\n");

	return 0;
}
