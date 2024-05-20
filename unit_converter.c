#include <stdio.h>

// Define a structure for temperature conversions
struct TemperatureConverter {
    int userinput;
    int result;
};

// Define a structure for currency conversions
struct CurrencyConverter {
    int userinput;
    float result;
};

// Define a structure for mass conversions
struct MassConverter {
    int userinput;
    float result;
};

// Define a structure for length conversions
struct LengthConverter {
    int userinput;
    float result;
};

// Function prototypes
void temperatureConversion();
void currencyConversion();
void massConversion();
void lengthConversion();

int main() {
    int category;

    printf("Welcome to Unit Converter! \n");
    printf("Here is a list of conversions to choose from: \n");
    printf("1. Temperature\n2. Currency\n3. Mass\n4. Length\n");
    printf("Please enter the choose the parameter you want to convert (or 'Q' to quit):\n");
    scanf(" %d", &category);

    while (category != 0) {

        if (category == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        switch (category) {
            case 1:
                temperatureConversion();
                break;
            case 2:
                currencyConversion();
                break;
            case 3:
                massConversion();
                break;
            case 4:
                lengthConversion();
                break;
            default:
                printf("Please enter a valid option.\n");
                break;
        }
        printf("Please enter the choose the parameter you want to convert (or 'Q' to quit):\n");
        scanf(" %d", &category);
    }

    return 0;
}

// Function for temperature conversion
void temperatureConversion() {
    struct TemperatureConverter tempConv;

    printf("Welcome to Temperature Converter! \n");
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
    scanf("%d", &tempConv.userinput);

    switch (tempConv.userinput) {
        case 1:
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d", &tempConv.userinput);
            tempConv.result = ((tempConv.userinput - 32) * (5.0 / 9.0));
            printf("Celsius: %d\n", tempConv.result);
            break;
        case 2:
            printf("Please enter the Celsius degree: \n");
            scanf("%d", &tempConv.userinput);
            tempConv.result = ((9.0 / 5.0) * tempConv.userinput + 32);
            printf("Fahrenheit: %d\n", tempConv.result);
            break;
        default:
            printf("Please enter the correct choice. \n");
            break;
    }
}

// Function for currency conversion
void currencyConversion() {
    struct CurrencyConverter currencyConv;

    printf("Welcome to Currency Converter! \n");
    printf("Enter 1 for USD to Euro. \n");
    printf("Enter 2 for USD to JPY. \n");
    printf("Enter 3 for USD to GBP. \n");
    printf("Enter 4 for USD to INR. \n");
    printf("Enter 5 for USD to CAD. \n");
    printf("Enter 6 for USD to AUD. \n");

    scanf("%d", &currencyConv.userinput);

    switch (currencyConv.userinput) {
        case 1:
            printf("Please enter the USD amount: \n");
            scanf("%d", &currencyConv.userinput);
            currencyConv.result = currencyConv.userinput * 0.87;
            printf("Euro: %.2f\n", currencyConv.result);
            break;
        case 2:
            printf("Please enter the USD amount: \n");
            scanf("%d", &currencyConv.userinput);
            currencyConv.result = currencyConv.userinput * 111.09;
            printf("JPY: %.2f\n", currencyConv.result);
            break;
        case 3:
            printf("Please enter the USD amount: \n");
            scanf("%d", &currencyConv.userinput);
            currencyConv.result = currencyConv.userinput * 0.72;
            printf("GBP: %.2f\n", currencyConv.result);
            break;
        case 4:
            printf("Please enter the USD amount: \n");
            scanf("%d", &currencyConv.userinput);
            currencyConv.result = currencyConv.userinput * 76.25;
            printf("INR: %.2f\n", currencyConv.result);
            break;
        case 5:
            printf("Please enter the USD amount: \n");
            scanf("%d", &currencyConv.userinput);
            currencyConv.result = currencyConv.userinput * 1.26;
            printf("CAD: %.2f\n", currencyConv.result);
            break;
        case 6:
            printf("Please enter the USD amount: \n");
            scanf("%d", &currencyConv.userinput);
            currencyConv.result = currencyConv.userinput * 1.36;
            printf("AUD: %.2f\n", currencyConv.result);
            break;
        default:
            printf("Please enter the correct choice. \n");
            break;
    }
}
// Function for mass conversion
void massConversion() {
    struct MassConverter massConv;

    printf("Welcome to Mass Converter! \n");
    printf("Enter 1 for gram to kilogram. \n");
    printf("Enter 2 for gram to pound. \n");
    printf("Enter 3 for milligram to gram. \n");
    printf("Enter 4 for milligram to kilogram. \n");
    printf("Enter 5 for kilogram to ton. \n");
    // Add more mass options here

    scanf("%d", &massConv.userinput);

    switch (massConv.userinput) {
        case 1:
            printf("Please enter the gram amount: \n");
            scanf("%d", &massConv.userinput);
            massConv.result = massConv.userinput * 0.001;
            printf("Kilogram: %.3f\n", massConv.result);
            break;
        case 2:
            printf("Please enter the gram amount: \n");
            scanf("%d", &massConv.userinput);
            massConv.result = massConv.userinput * 0.00220462;
            printf("Pound: %.3f\n", massConv.result);
            break;
        case 3:
            printf("Please enter the milligram amount: \n");
            scanf("%d", &massConv.userinput);
            massConv.result = massConv.userinput * 0.001;
            printf("Gram: %.3f\n", massConv.result);
            break;
        case 4:
            printf("Please enter the milligram amount: \n");
            scanf("%d", &massConv.userinput);
            massConv.result = massConv.userinput * 0.000001;
            printf("Kilogram: %.3f\n", massConv.result);
            break;
        case 5:
            printf("Please enter the kilogram amount: \n");
            scanf("%d", &massConv.userinput);
            massConv.result = massConv.userinput * 0.001;
            printf("Ton: %.3f\n", massConv.result);
            break;
        // Add cases for more mass conversions here
        default:
            printf("Please enter the correct choice. \n");
            break;
    }
}

// Function for length conversion
void lengthConversion() {
    struct LengthConverter lengthConv;

    printf("Welcome to Length Converter! \n");
    printf("Enter 1 for millimeter to centimeter. \n");
    printf("Enter 2 for centimeter to meter. \n");
    printf("Enter 3 for feet to meter. \n");
    printf("Enter 4 for centimeter to feet. \n");
    printf("Enter 5 for meter to feet. \n");
    // Add more length options here

    scanf("%d", &lengthConv.userinput);

    switch (lengthConv.userinput) {
        case 1:
            printf("Please enter the millimeter amount: \n");
            scanf("%d", &lengthConv.userinput);
            lengthConv.result = lengthConv.userinput * 0.1;
            printf("Centimeter: %.2f\n", lengthConv.result);
            break;
        case 2:
            printf("Please enter the centimeter amount: \n");
            scanf("%d", &lengthConv.userinput);
            lengthConv.result = lengthConv.userinput * 0.01;
            printf("Meter: %.2f\n", lengthConv.result);
            break;
        case 3:
            printf("Please enter the feet amount: \n");
            scanf("%d", &lengthConv.userinput);
            lengthConv.result = lengthConv.userinput * 0.3048;
            printf("Meter: %.2f\n", lengthConv.result);
            break;
        case 4:
            printf("Please enter the centimeter amount: \n");
            scanf("%d", &lengthConv.userinput);
            lengthConv.result = lengthConv.userinput * 0.0328084;
            printf("Feet: %.2f\n", lengthConv.result);
            break;
        case 5:
            printf("Please enter the meter amount: \n");
            scanf("%d", &lengthConv.userinput);
            lengthConv.result = lengthConv.userinput * 3.28084;
            printf("Feet: %.2f\n", lengthConv.result);
            break;
        // Add more cases for additional length conversions here
        default:
            printf("Invalid input! Please enter a valid option.\n");
    }
}

