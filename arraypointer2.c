#include<stdio.h>
int main(){
	int *ptr[4];
	int a = 13, b=14, c=2, d=5;
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
    ptr[3]=&d;
    
    int i;
    for(i =0;i<4;i++){
    	printf("Address held by ptr[%d] is %d \n", i, ptr[i]);
        printf("Value at each address is %d \n\n", i, *ptr[i]);
	}
	return 0;
	
	
}
