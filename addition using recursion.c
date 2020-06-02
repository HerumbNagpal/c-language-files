#include<stdio.h>
int ans();
main(){
	 int number;
	 printf("enter the digits:");
	 scanf("%d",&number);
	 printf("the sum of the digits is %d",ans(number));
}
int ans (int sum){
	int final;
	if(sum!=0){
		final=sum%10 + ans(sum/10);
		return (final);
	}
	else{
		return 0;
	}
}
