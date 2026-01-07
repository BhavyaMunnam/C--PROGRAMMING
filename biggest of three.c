//biggest of any three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a=%d is big",a);
	else
	if(b>c&&b>a)
	printf("b=%d is big",b);
	else
	printf("c=%d is big",c);
	
}
