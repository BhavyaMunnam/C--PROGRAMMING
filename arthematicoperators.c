// arthematic operators
#include<stdio.h>
int main()
{
	int x,y,L,A,M,S;
	float P;
	printf("enter the values");
	scanf("%d%d",&x,&y);
	L=x+y;
	A=x-y;
	M=x*y;
	P=x/y;
	S=x%y;
	printf("%d\n",L);
	printf("%d\n",A);
	printf("%d\n",M);
	printf("%.1f\n",P);
	printf("%d\n",S);
}