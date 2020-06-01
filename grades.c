#include<stdio.h>
main(){
	int marks;
	printf("enter the marks out of 100:\n");
	scanf("%d",&marks);
	
	if(85<=marks && marks<=100){
		printf("grade A");
	}
	
	else if(70<=marks && marks<=84){
	printf("grade B");	
	}
	
	else if(55<=marks && marks<=69){
		printf("grade C");
	}
	
	else if(40<=marks && marks<=54){
		printf("grade D");
	}
	else{
		printf("grade F");
	}
	return 0;
}
