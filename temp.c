#include <stdio.h>

                                        // *Function declarations*//
float convertToFahrenheit(float celsius); 
void checkComfortLevel(float currentF, float desiredF);

int main() {
    float currentC;
    float desiredC;
    float currentF;
    float desiredF;

   //* Taking user input for current and desired temp in Celsius*//
    printf("Enter current temperature (C): ");
    scanf("%f", &currentC);
    printf("Enter desired temperature (C): ");
    scanf("%f", &desiredC);

    //* Converting temperatures to F *//
    currentF = convertToFahrenheit(currentC);
    desiredF = convertToFahrenheit(desiredC);
printf("%.1f", currentF);
    //* Checking comfort level*//
    checkComfortLevel(currentF, desiredF);

}

//* Function to convert C to F*//
float convertToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
    return 0;
}

//* Function to check the comfort level based on current and desired temp*//
void checkComfortLevel(float currentF, float desiredF) {
    if (currentF < desiredF - 3) {
        printf("Heating\n");
    } else if (currentF > desiredF + 3) {
        printf("Cooling\n");
    } else {
        printf("normal\n");
    }
    }