#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	//input
	printf("Enter a word to reverse:\n ");
	gets(name);
	
	//reversing
	strrev(name);
	
	//output
	printf("\n\nThe revere of the input is: \n %s",name);
}
