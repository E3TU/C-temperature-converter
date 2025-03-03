#include <stdio.h>

int main(void)
{
    int userchoice;
    float celcius, kelvin, fahrenheit;
    int i = 1;

    while (1) {
        printf("Temperature converter\n");
        printf("1. Celsius\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("Choose the unit you want to convert: ");
        scanf("%d", &userchoice);

        switch (userchoice) {
            case 1:
                printf("Enter the temperature in celcius: ");
                scanf("%f", &celcius);
                fahrenheit = (celcius * 9/5) + 32;
                kelvin = celcius + 273.15;
                printf("\n");
                // printf("Temperature in Celcius: %.2f\n", celcius);
                printf("%.2f Celsius\n", celcius);
                printf("Converted to Fahrenheit: %.2f\n", fahrenheit);
                printf("Converted to Kelvin: %.2f\n", kelvin);
                break;
            case 2:
                printf("Enter the temperature in fahrenheit: ");
                break;
            case 3:
                printf("Enter the temperature in kelvin: ");
                break;
            default:
                printf("Invalid option! Try again!\n");
                break;
        }
        return 0;
    }
}
