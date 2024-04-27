
//Write a program by using for loop to compute the sum of 1+2+3+ . ..+n (n should be a keyboard input)

#include <stdio.h>

int main(){
	
	int n, sum, i;
	sum = 0;
	
	printf("Enter a value: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		sum = sum + i;
		
	}
	
	printf("Sum = %d", sum);
	
	return 0;
}
