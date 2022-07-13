#include<stdio.h>

int main()
{
	float num=13.5;
	float *ptr=&num;

	printf("address is %d",ptr);
	printf("\nvalue is %.2f",*ptr);
	return 0;
}
