#include<stdio.h>
int main()
{
	int i,num,add=0,c=0;
	printf("enter the num:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)

		if(num%i==0)
		{
			printf("factors are %d\n",i);	
			c++;
			add=add+i;
		}
	printf("count=%d add=%d\n",c,add);


	return 0;
}
