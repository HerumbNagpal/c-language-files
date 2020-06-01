#include<stdio.h>
main(){
	int a,b;
	printf("enter the first number:\n the second number:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping \nthe first number:%d \n the second number:%d",a,b);
	return 0;
}
