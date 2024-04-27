#include <stdio.h>

int main(){
	
	float number1, number2, temperory_number;
	
	printf("Enter the number: ");
	scanf("%f", &number1);
	printf("Enter the number: ");
	scanf("%f", &number2);
	
	temperory_number = 	number1;
	number1 = number2;
	number2 = temperory_number;
	
	printf("New value of number1 = %f\n", number1);
	printf("New value of number2 = %f\n", number2);
	return 0;
}
