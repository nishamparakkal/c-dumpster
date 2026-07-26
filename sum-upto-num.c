#include<stdio.h>
int main()
{
int a,num,i,sum;

printf("enter the number:\n");
scanf("%d",&num);
sum=0;
for(i=1;i<=num;i++)
{


sum=sum+i;

//printf("sum=%d",sum);

}
printf("sum=%d\n",sum);



return 0;
}
