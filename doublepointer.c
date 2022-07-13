#include<stdio.h>
int main(){
	int num=13;
	int *ptr;
	int **qtr;
	
	ptr = &num;
	qtr= &ptr;
	
	printf("The address of num is %d", ptr);
	printf("\nThe address of ptr is %d", qtr);
	printf("\n The address of num using qtr is %d",*qtr);
	
	printf("\nValue of num using ptr is %d",*ptr);
	printf("\nValue of num using qtr is %d",**qtr);
	
	
	return 0;
	
	
}
