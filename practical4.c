#include <stdio.h>

int main(){
	
	int N, i, number;
	
	printf("Enter the number of positive integers: ");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		
		printf("Enter integer number: ");
		scanf("%d", &number);
		printf("Number is: %d\n", number);
		
		if(number == 0){
			
			printf("Invalid input!\n");
			continue;
			
		} else if(number < 0){
			
			printf("Terminating the loop!\n");
			printf("END!\n");
			break;
			
		}
		
	}
	
	return 0;
	
}
