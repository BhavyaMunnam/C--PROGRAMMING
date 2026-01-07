//swaping of 2 numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values");
	scanf("%d%d%",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping a=%d,b=%d\n",a,b);
}