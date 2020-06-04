#include <stdio.h> 
int main() 
{ 
	int a, b; 
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("LCM of %d and %d is %d ", a, b, lcm(a, b)); 
	return 0; 
} 

int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 
int lcm(int a, int b) 
{ 
	return (a*b)/gcd(a, b); 
}

