#include <stdio.h>

int main(){

    float number1, number2;
    int maximum;

    printf("Enter number1 : ");
    scanf("%f", &number1);
    printf("Enter number2 : ");
    scanf("%f", &number2);

    if (number1 > number2) {
        maximum = 1;
    } else if (number1 < number2)
    {
        maximum = 2;
    }
     else {
        maximum = 3;
    }

    switch (maximum) {
        case 1:
            printf("number1 is the maximum.\n");
            break;
        case 2:
            printf("number2 is the maximum.\n");
            break;
        default:
            printf("Both numbers are equal.\n");
            break;
    }

    return 0;

}