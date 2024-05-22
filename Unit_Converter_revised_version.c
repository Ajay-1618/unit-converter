#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

// Function prototypes
void temperatureConversion();
void currencyConversion();
void massConversion();
void lengthConversion();
void timeConversion();

int main() {
     int category;

    printf("****Welcome to Unit Converter!**** \n");
    printf("Here is a list of conversions to choose from: \n");
    printf("1. Temperature\n2. Currency\n3. Mass\n4. Length\n5. Time\n");
    while (1) {
         printf("Please enter the parameter you want to convert (or '0' to quit):\n");
        scanf(" %d", &category);
        if (category == 0) {
            printf("Exiting the program. Goodbye!\n");
            exit(0);
            break;
        }
        else{
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
            case 5:
                timeConversion();
                break;
            default:
                printf("Please enter a valid option.\n");
                break;
        }
        }
    }
    getch();
    return 0;
}

// Function for temperature conversion
void temperatureConversion() {
    // Implementation for temperature conversion
    // Structure to hold a temperature value and its unit
typedef struct {
    float value;
    int unit;
} Temperature;

// Function to convert any unit to Kelvin
float toKelvin(float value, int inputUnit) {
    switch (inputUnit) {
        case 1: return value; // Kelvin
        case 2: return value + 273.15; // Celsius to Kelvin
        case 3: return (value - 32) * 5/9 + 273.15; // Fahrenheit to Kelvin
        default: return -1;
    }
}

// Function to convert Kelvin to any unit
float fromKelvin(float kelvin, int outputUnit) {
    switch (outputUnit) {
        case 1: return kelvin; // Kelvin
        case 2: return kelvin - 273.15; // Kelvin to Celsius
        case 3: return (kelvin - 273.15) * 9/5 + 32; // Kelvin to Fahrenheit
        default: return -1;
    }
}

// Function to perform the temperature conversion
void performConversion() {
    Temperature input, output;
    float kelvin;
    int unit;

    printf("Options:\n1. Kelvin\n2. Celsius\n3. Fahrenheit\n");

    printf("\nSelect the unit to convert from (1-3): ");
    scanf("%d", &unit);
    input.unit = unit;

    printf("\nSelect the unit to convert to: ");
    scanf("%d", &unit);
    output.unit = unit;

    printf("\nEnter the temperature value: ");
    scanf("%f", &input.value);

    kelvin = toKelvin(input.value, input.unit);
    if (kelvin == -1) {
        printf("Invalid input unit\n");
        return;
    }

    output.value = fromKelvin(kelvin, output.unit);
    if (output.value == -1) {
        printf("Invalid output unit\n");
        return;
    }

    printf("\nConverted value: %.2f ", output.value);
    switch (output.unit) {
        case 1: printf("Kelvin"); break;
        case 2: printf("Celsius"); break;
        case 3: printf("Fahrenheit"); break;
        default: printf("invalid unit"); break;
    }
    printf("\n");
}
    performConversion();
}

// Function for currency conversion
void currencyConversion() {
    // Implementation for currency conversion
    // Structure to hold a currency value and its unit
typedef struct {
    float value;
    int unit;
} Currency;

// Conversion rates to USD (for example purposes, use the current rates for accurate conversion)
const float yenToUsd = 0.0074;
const float euroToUsd = 1.12;
const float rupeeToUsd = 0.012;
const float poundToUsd = 1.31;

// Function to convert any unit to USD
float toUsd(float value, int inputUnit) {
    switch (inputUnit) {
        case 1: return value; // USD
        case 2: return value * yenToUsd; // Yen to USD
        case 3: return value * euroToUsd; // Euro to USD
        case 4: return value * rupeeToUsd; // Rupee to USD
        case 5: return value * poundToUsd; // Pound to USD
        default: return -1;
    }
}

// Function to convert USD to any unit
float fromUsd(float usd, int outputUnit) {
    switch (outputUnit) {
        case 1: return usd; // USD
        case 2: return usd / yenToUsd; // USD to Yen
        case 3: return usd / euroToUsd; // USD to Euro
        case 4: return usd / rupeeToUsd; // USD to Rupee
        case 5: return usd / poundToUsd; // USD to Pound
        default: return -1;
    }
}

// Function to perform the currency conversion
void performConversion() {
    Currency input, output;
    float usd;
    int unit;

    printf("Options:\n1. US Dollar\n2. Yen\n3. Euro\n4. Rupee\n5. Pound\n");

    printf("\nSelect the unit to convert from (1-5): ");
    scanf("%d", &unit);
    input.unit = unit;

    printf("\nSelect the unit to convert to: ");
    scanf("%d", &unit);
    output.unit = unit;

    printf("\nEnter the currency value: ");
    scanf("%f", &input.value);

    usd = toUsd(input.value, input.unit);
    if (usd == -1) {
        printf("Invalid input unit\n");
        return;
    }

    output.value = fromUsd(usd, output.unit);
    if (output.value == -1) {
        printf("Invalid output unit\n");
        return;
    }

    printf("\nConverted value: %.2f ", output.value);
    switch (output.unit) {
        case 1: printf("US Dollar"); break;
        case 2: printf("Yen"); break;
        case 3: printf("Euro"); break;
        case 4: printf("Rupee"); break;
        case 5: printf("Pound"); break;
        default: printf("invalid unit"); break;
    }
    printf("\n");
}
    performConversion();
}

// Function for mass conversion
void massConversion() {
    // Implementation for mass conversion
// Structure to hold a mass value and its unit
typedef struct {
    float value;
    int unit;
} Mass;

// Function to convert any unit to kilograms
float toKilograms(float value, int inputUnit) {
    switch (inputUnit) {
        case 1: return value;                // Kilograms
        case 2: return value * 1000;         // Grams
        case 3: return value * 0.453592;     // Pounds
        case 4: return value * 0.000453592;  // Milligrams
        case 5: return value * 1000;         // Tons
        default: return -1;
    }
}

// Function to convert kilograms to any unit
float fromKilograms(float kilograms, int outputUnit) {
    switch (outputUnit) {
        case 1: return kilograms;                 // Kilograms
        case 2: return kilograms / 1000;          // Grams
        case 3: return kilograms / 0.453592;      // Pounds
        case 4: return kilograms / 0.000453592;   // Milligrams
        case 5: return kilograms / 1000;          // Tons
        default: return -1;
    }
}

// Function to perform mass conversion
void performMassConversion() {
    Mass input, output;
    float kilograms;
    int unit;

    printf("Options:\n1. Kilograms \n2. Grams \n3. Pounds \n4. Milligrams \n5. Tons\n");

    printf("\nSelect the unit to convert from (1-5): ");
    scanf("%d", &unit);
    input.unit = unit;

    printf("\nSelect the unit to convert to: ");
    scanf("%d", &unit);
    output.unit = unit;

    printf("\nEnter the mass value: ");
    scanf("%f", &input.value);

    kilograms = toKilograms(input.value, input.unit);
    if (kilograms == -1) {
        printf("Invalid input unit\n");
        return;
    }

    output.value = fromKilograms(kilograms, output.unit);
    if (output.value == -1) {
        printf("Invalid output unit\n");
        return;
    }

    printf("\nConverted value: %.2f ", output.value);
    switch (output.unit) {
        case 1: printf("kilograms"); break;
        case 2: printf("grams"); break;
        case 3: printf("pounds"); break;
        case 4: printf("milligrams"); break;
        case 5: printf("tons"); break;
        default: printf("invalid unit"); break;
    }
    printf("\n");
}
    performMassConversion();
}


// Function for time conversion
void timeConversion() {
    // Implementation for time conversion
    // Structure to hold a time value and its unit
typedef struct {
    float value;
    int unit;
} Time;

// Conversion factors to minutes
const float secondsToMinutes = 1.0 / 60;
const float hoursToMinutes = 60;
const float daysToMinutes = 1440; // 24 * 60
const float yearsToMinutes = 525600; // 365 * 24 * 60

// Function to convert any unit to Minutes
float toMinutes(float value, int inputUnit) {
    switch (inputUnit) {
        case 1: return value * secondsToMinutes; // Seconds to Minutes
        case 2: return value; // Minutes
        case 3: return value * hoursToMinutes; // Hours to Minutes
        case 4: return value * daysToMinutes; // Days to Minutes
        case 5: return value * yearsToMinutes; // Years to Minutes
        default: return -1;
    }
}

// Function to convert Minutes to any unit
float fromMinutes(float minutes, int outputUnit) {
    switch (outputUnit) {
        case 1: return minutes / secondsToMinutes; // Minutes to Seconds
        case 2: return minutes; // Minutes
        case 3: return minutes / hoursToMinutes; // Minutes to Hours
        case 4: return minutes / daysToMinutes; // Minutes to Days
        case 5: return minutes / yearsToMinutes; // Minutes to Years
        default: return -1;
    }
}

// Function to perform the time conversion
void performConversion() {
    Time input, output;
    float minutes;
    int unit;

    printf("Options:\n1. Seconds\n2. Minutes\n3. Hours\n4. Days\n5. Years\n");

    printf("\nSelect the unit to convert from (1-5): ");
    scanf("%d", &unit);
    input.unit = unit;

    printf("\nSelect the unit to convert to: ");
    scanf("%d", &unit);
    output.unit = unit;

    printf("\nEnter the time value: ");
    scanf("%f", &input.value);

    minutes = toMinutes(input.value, input.unit);
    if (minutes == -1) {
        printf("Invalid input unit\n");
        return;
    }

    output.value = fromMinutes(minutes, output.unit);
    if (output.value == -1) {
        printf("Invalid output unit\n");
        return;
    }

    printf("\nConverted value: %.2f ", output.value);
    switch (output.unit) {
        case 1: printf("Seconds"); break;
        case 2: printf("Minutes"); break;
        case 3: printf("Hours"); break;
        case 4: printf("Days"); break;
        case 5: printf("Years"); break;
        default: printf("invalid unit"); break;
    }
    printf("\n");
}
    performConversion();
}

// Function for length conversion
void lengthConversion() {
    // Structure to hold a length value and its unit
    typedef struct {
        float value;
        int unit;
    } Length;

    // Function to convert any unit to meters
    float toMeters(float value, int inputUnit) {
        switch (inputUnit) {
            case 1: return value;
            case 2: return value * 1000;
            case 3: return value / 100;
            case 4: return value * 0.0254;
            case 5: return value * 0.3048;
            default: return -1;
        }
    }

    // Function to convert meters to any unit
    float fromMeters(float meters, int outputUnit) {
        switch (outputUnit) {
            case 1: return meters;
            case 2: return meters / 1000;
            case 3: return meters * 100;
            case 4: return meters / 0.0254;
            case 5: return meters / 0.3048;
            default: return -1;
        }
    }

    // Function to perform the length conversion
    void performConversion() {
        Length input, output;
        float meters;
        int unit;

        printf("Options:\n1. Meters \n2. Kilometers \n3. Centimeters \n4. Inches\n5. Feet\n");

        printf("\nSelect the unit to convert from (1-5): ");
        scanf("%d", &unit);
        input.unit = unit;

        printf("\nSelect the unit to convert to: ");
        scanf("%d", &unit);
        output.unit = unit;

        printf("\nEnter the length value: ");
        scanf("%f", &input.value);

        meters = toMeters(input.value, input.unit);
        if (meters == -1) {
            printf("Invalid input unit\n");
            return;
        }

        output.value = fromMeters(meters, output.unit);
        if (output.value == -1) {
            printf("Invalid output unit\n");
            return;
        }

        printf("\nConverted value: %.2f ", output.value);
        switch (output.unit) {
            case 1: printf("meters"); break;
            case 2: printf("kilometers"); break;
            case 3: printf("centimeters"); break;
            case 4: printf("inches"); break;
            case 5: printf("feet"); break;
            default: printf("invalid unit"); break;
        }
        printf("\n");
    } 
    performConversion();
}
