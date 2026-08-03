#include<stdio.h>
int main()
{

int num,pos;

pos=31;

printf("enter the num:\n");
scanf("%d",&num);
l:
printf("%d ",num>>pos&1);
pos--;

if(pos>=0)
	goto l;




return 0;
}
