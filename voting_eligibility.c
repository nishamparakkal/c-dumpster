#include<stdio.h>
int main()
{
	int age;
l:	printf("enter the age:\n");
	scanf("%d",&age);
	if(age<0)
	{	printf("invalid\n");
		goto l;
	}
	else if(age<18)
		printf("not eligible\n");
	else if(age<=120)
		printf("eligible\n");
	else
	{	printf("invalid\n");
		goto l;
	}


	return 0;
}
