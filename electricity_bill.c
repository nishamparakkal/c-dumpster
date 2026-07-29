#include<stdio.h>
int main()
{
int unit;
printf("enter the unit:\n");
scanf("%d",&unit);
if(unit<0)
	printf("invalid input");
else if(unit<=100)
	printf("charge= %d Rs",2*unit);
else if(unit<=200)
	printf("charge= %d Rs",3*unit);
else if(unit<=500)
	printf("charge= %d Rs",5*unit);
else
	printf("charge= %d Rs",7*unit);

return 0;
}
