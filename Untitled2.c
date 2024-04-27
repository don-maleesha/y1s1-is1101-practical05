#include <stdio.h>

int main(){
	
	float first_side, second_side, third_side;
	
	printf("Enter value for the first side of the triangle: ");
	scanf("%f", &first_side);
	printf("Enter value for the second side of the triangle: ");
	scanf("%f", &second_side);
	printf("Enter value for the third side of the triangle: ");
	scanf("%f", &third_side);
	
	if(((first_side > 0) && (second_side > 0) && (third_side > 0)) && ((first_side + second_side > third_side) && (first_side + third_side > second_side) && (second_side + third_side > first_side))){
		
		if ((first_side == second_side) && (first_side == third_side) && (second_side == third_side)) {
			
			printf("Equi\n");
			
		}
	}
	
	return 0;

}
