#include<stdio.h>

struct employee{
	int age,phone,salary;
	char name[20];
}emp[100];

main(){
	int i,n;
	printf("Enter the number of employees:");
	scanf("%d",&n);
	printf("\nEnter the name, age, phone number and salary of the employee.");
	for(i=0;i<n;i++){
		scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].phone,&emp[i].salary);
	}
	printf("\n   Name   Age   Phone Number   Salary\n");
	for(i=0;i<n;i++){
		printf("  %s   %d   %d       %d",emp[i].name,emp[i].age,emp[i].phone,emp[i].salary);
		printf("\n");
	}
}
