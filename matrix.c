#include<stdio.h>
main(){
	int i=0,j=0;
	int matr[3][3];
	printf("Enter the value for the matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n value for %d,%d:",i+1,j+1);
		    scanf("%d",&matr[i][j]);
	    }
	}
	printf("\n The matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("  %d  ",matr[i][j]);
		}
		printf("\n");
	}
}
