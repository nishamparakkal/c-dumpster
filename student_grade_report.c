#include<stdio.h>
int main()
{
int maths,physics,chemistry,average,total ;
printf("Enter the mark for Mathematics, Physics and Chemistry respectively.\n");
scanf("%d %d %d",&maths,&physics,&chemistry);
if((maths<0 || maths>100) || (chemistry<0 || chemistry>100) || (physics<0 || physics>100))
	printf("Invalid input\n");
else if(maths<35 || chemistry<35 || physics<35)
	printf("Failed\n");
else
{
total=maths+physics+chemistry;
average=total/3;

printf("average=%d\n",average);

if(average>=90)
	printf("Distinction\n");
else if(average>=75)
	printf("First Class\n");
else if(average>=60)
	printf("Second Class\n");
else if(average>=50)
	printf("Third Class\n");
else
	printf("Pass\n");

}



return 0;
}
