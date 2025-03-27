#include <stdio.h>
#include "temperature.h"

int main(void) {
    float temp, converted;
    char input_scale, target_scale;

    printf("Enter temperature value: ");
    if (scanf("%f", &temp) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter input scale (C/F/K): ");
    scanf(" %c", &input_scale);

    printf("Enter target scale (C/F/K): ");
    scanf(" %c", &target_scale);

    if (input_scale == target_scale) {
        printf("Cannot convert to the same scale.\n");
        return 1;
    }

    float celsius;
    if (input_scale == 'C') {
        celsius = temp;
    } else if (input_scale == 'F') {
        celsius = fahrenheit_to_celsius(temp);
    } else if (input_scale == 'K') {
        if (temp < 0) {
            printf("Invalid input: Kelvin cannot be negative.\n");
            return 1;
        }
        celsius = kelvin_to_celsius(temp);
    } else {
        printf("Invalid input scale.\n");
        return 1;
    }

    if (target_scale == 'C') {
        converted = celsius;
    } else if (target_scale == 'F') {
        converted = celsius_to_fahrenheit(celsius);
    } else if (target_scale == 'K') {
        converted = celsius_to_kelvin(celsius);
    } else {
        printf("Invalid target scale.\n");
        return 1;
    }

    printf("Converted temperature: %.2f %c\n", converted, target_scale);
    categorize_temperature(celsius);
    
    return 0;
}
