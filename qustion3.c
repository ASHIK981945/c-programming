#include <stdio.h>
#define FAHRENHEIT_FACTOR 1.8
#define FAHRENHEIT_OFFSET 32
#define KELVIN_OFFSET 273.15

int main() {
    float celsius = 25.0; 
    float fahrenheit = (celsius * FAHRENHEIT_FACTOR) + FAHRENHEIT_OFFSET;
    float kelvin = celsius + KELVIN_OFFSET;

    printf("Temperature in Celsius: %.2f°C\n", celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);

    return 0;
}

