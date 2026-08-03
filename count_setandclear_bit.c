#include<stdio.h>
int main()
{
int c=0,num,pos;
printf("enter the num:\n");
scanf("%d",&num);

pos=31;
l:
if(num>>pos&1)
	c++;
pos--;
if(pos>=0)
	goto l;
printf("set bits=%d clear bits=%d \n",c,32-c);


return 0;
}
