#include<stdio.h>
int main(){
	int num=13;
	int *ptr;
	int **qtr;
	int ***str;
	int *mtr;
	
	ptr = &num;
	qtr= &ptr;
	str= &qtr;
	mtr= ptr;
	
	printf("The address of num is %d", ptr);
	printf("\nThe address of ptr is %d", qtr);
    printf("\nThe address of qtr is %d", str);
	printf("\n The address of num using qtr is %d",*qtr);
	printf("\n The address of num using qtr is %d",**str);
	
	printf("\nValue of num using ptr is %d",*ptr);
	printf("\nValue of num using qtr is %d",**qtr);
	printf("\nValue of num using str is %d",***str);
	
	printf("\n The value of num using mtr is %d",*mtr);
	printf("\n The address of num using mtr is %d",mtr);
	
	
	return 0;
	
	
}
