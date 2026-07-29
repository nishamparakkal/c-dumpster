#include<stdio.h>
int main()
{
	char a;
	printf("enter the charactor:\n");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	printf("Upper case\n");
	else if(a>='a' && a<='z')
	printf("Lower case\n");
	else if(a>='0' && a<='9')
	printf("Digits\n");
	else
	printf("Special character\n");
return 0;
}
