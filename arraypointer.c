#include<stdio.h>

int main()
{
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	
	int *ptr[4];
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	ptr[3]=&d;


int i;
printf("the address of each element:\n");

for(i=0;i<4;i++)
{
	printf("\n%d",ptr[i]);
}
printf("\nvalue of each element");

for(i=0;i<4;i++)
{
	printf("\n%d",*ptr[i]);
}
return 0;
}
