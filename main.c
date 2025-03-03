#include <stdio.h>

int main(void)
{
    int userchoice;
    float celsius, kelvin, fahrenheit;

    while (1) {
        printf("\n");
        printf("Temperature converter\n");
        printf("Choose the unit you want to convert\n");
        printf("1. Celsius\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("4. Quit program\n");
        printf("Input your choice: ");
        scanf("%d", &userchoice);

        switch (userchoice) {
            case 1:
                printf("Enter the temperature in Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9/5) + 32;
                kelvin = celsius + 273.15f;
                printf("\n");
                // printf("Temperature in Celsius: %.2f\n", celcius);
                printf("%.2f Celsius\n", celsius);
                printf("Converted to Fahrenheit: %.2f\n", fahrenheit);
                printf("Converted to Kelvin: %.2f\n", kelvin);
                break;
            case 2:
                printf("Enter the temperature in Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) * 5 / 9;
                kelvin = (fahrenheit - 32) * 5 / 9 + 273.15f;
                printf("\n");
                printf("%.2f Fahrenheit\n", fahrenheit);
                printf("Converted to Celsius: %.2f\n", celsius);
                printf("Converted to Kelvin: %.2f\n", kelvin);
                break;
            case 3:
                printf("Enter the temperature in Kelvin: ");
                scanf("%f", &kelvin);
                celsius = kelvin - 273.15f;
                fahrenheit = (kelvin - 273.15f) * 9 / 5 + 32;
                printf("\n");
                printf("%.2f Kelvin\n", kelvin);
                printf("Converted to Celsius: %.2f\n", celsius);
                printf("Converted to Fahrenheit: %.2f\n", fahrenheit);
                break;
            case 4:
                break;
            default:
                printf("Invalid option! Try again!\n");
                break;
        }
        return 0;
    }
}
