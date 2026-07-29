#include<stdio.h>
int main()
{
int unit,t1,t2,t3,t4;
printf("enter the unit:\n");
scanf("%d",&unit);

if(unit<0)
	printf("invalid\n");
else if(unit<=100)
	printf("charge= %d\n",2*unit);
else if(unit<=200)
{
t1=100*2;
t2=unit-100;
t2=t2*3;
printf("charge= %d\n",t1+t2);
}	
else if(unit<=500)
{
t1=100*2;
t2=100*3;
t3=(unit-200)*5;
printf("charge= %d\n",t1+t2+t3);
}
else
{

t1=100*2;
t2=100*3;
t3=300*5;
t4=(unit-500)*7;
printf("charge= %d\n",t1+t2+t3+t4);

}



return 0;
}
