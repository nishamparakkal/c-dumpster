#include<stdio.h>
int main()
{
int i,num,c=0;

printf("enter the num:\n");
scanf("%d",&num);

for(i=2;i<num;i++)
{
	if(num%i==0)
		c++;
}	
if(c==0)
printf("prime\n");
else
printf("not prime\n");



return 0;
}
