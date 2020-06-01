#include<stdio.h>
main(){
	int choice;
	printf("choose somthing you want to eat :\n1.Pizza, Rs 239\n2.Burger, Rs 129\n3.Past, Rs 179\n4.French fries, Rs 99\n5.Sandwich, Rs 149");
	printf("\n\nenter your option:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nFood item : Pizza\nPrice :Rs 239");
			break;
		case 2:
			printf("\nFood item : Burger\nPrice :Rs 129");
			break;
		case 3:
			printf("\nFood item : Pasta\nPrice :Rs 179");
			break;
		case 4:
			printf("\nFood item : French Fries\nPrice :Rs 99");
			break;
		case 5:
			printf("\nFood item : Sandwich\nPrice :Rs 149");
			break;
		default :
			printf("\ninvalid");
	}
}
