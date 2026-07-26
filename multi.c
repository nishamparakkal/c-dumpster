#include<stdio.h>
int main()
{
int i,num,multi;
printf("enter the num:\n");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
	multi=num*i;
printf("%d x %d=%d\n",num,i,multi);
}


return 0;
}
