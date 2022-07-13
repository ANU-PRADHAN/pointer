#include<stdio.h>
int main(){
	int num=13;
	int *ptr;
	ptr=&num;
	printf("Address of num is: %d",ptr);
    printf("Value of num is: %d",*ptr);
    return 0;
}
