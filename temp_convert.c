#include <stdio.h>
#include <stdlib.h>

void celsius_to_fahrenheit() {
    while(1) {
        double celsius;
        double outcome;
        int choice;

        printf("Enter the value in Celsius you want to convert.\n");
        scanf("%lf", &celsius);

        printf("\n");

        outcome = celsius * 9/5 + 32;

        printf("Here is the temperature in Fahrenheit: %.2lf\n", outcome);

        printf("Do you want to exit?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        scanf("%d", &choice);

        if (choice == 1) {
            return;
        } else if (choice != 2) {
            printf("Invalid input, please enter 1 or 2.\n");
        }
    }
}

void fahrenheit_to_celsius() {
    while(1) {
        double fahrenheit;
        double outcome;
        int choice;

        printf("Enter the value in Fahrenheit you want to convert.\n");
        scanf("%lf", &fahrenheit);

        printf("\n");
        
        outcome = (fahrenheit - 32) * 5/9;

        printf("Here is the temperature in Celsius: %.2lf\n", outcome);

        printf("Do you want to exit?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        scanf("%d", &choice);

        if (choice == 1) {
            return;
        } else if (choice != 2) {
            printf("Invalid input, please enter 1 or 2.\n");
        }
    }
}

int main() {
    int choice;

    while (1)
    {
        printf("Do you want to:\n");
        printf("1. Convert C to F\n");
        printf("2. Convert F to C\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            celsius_to_fahrenheit();
            break;
        case 2:
            fahrenheit_to_celsius();
            break;
        case 3:
            return 0;
        default:
            printf("Invalid input, please enter a valid number: 1, 2 or 3.\n");
            break;
        }
    }
}

