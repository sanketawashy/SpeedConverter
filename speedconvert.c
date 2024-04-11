#include <stdio.h>

// Function prototypes
double convertMsToKmH(double mps);
double convertMsToMileMin(double mps);
double convertKmHToMs(double kmh);
double convertMileMinToMs(double milemin);
double convertMileMinToKmH(double milemin);
double convertKmHToMileMin(double kmh);

int main() {
    int option;
    double inputValue, convertedValue;

    // Display options to the user
    printf("Choose an option:\n");
    fflush(stdout);
    printf("1. m/s to km/h\n");
    fflush(stdout);
    printf("2. m/s to mile/min\n");
    fflush(stdout);
    printf("3. km/h to m/s\n");
    fflush(stdout);
    printf("4. mile/min to m/s\n");
    fflush(stdout);
    printf("5. mile/min to km/h\n");
    fflush(stdout);
    printf("6. km/h to mile/min\n");
    fflush(stdout);

    // Get user input for option
    printf("Enter option (1-6): ");
    fflush(stdout);
    scanf("%d", &option);


    // Get user input for value to convert
    printf("Enter the value to convert: ");
    fflush(stdout);
    scanf("%lf", &inputValue);

    // Perform the conversion based on the chosen option
    switch (option) {
        case 1:
            convertedValue = convertMsToKmH(inputValue);
            printf("%.2f m/s is %.2f km/h\n", inputValue, convertedValue);
            fflush(stdout);
            break;
        case 2:
            convertedValue = convertMsToMileMin(inputValue);
            printf("%.2f m/s is %.2f mile/min\n", inputValue, convertedValue);
            fflush(stdout);
            break;
        case 3:
            convertedValue = convertKmHToMs(inputValue);
            printf("%.2f km/h is %.2f m/s\n", inputValue, convertedValue);
            fflush(stdout);
            break;
        case 4:
            convertedValue = convertMileMinToMs(inputValue);
            printf("%.2f mile/min is %.2f m/s\n", inputValue, convertedValue);
            fflush(stdout);
            break;
        case 5:
            convertedValue = convertMileMinToKmH(inputValue);
            printf("%.2f mile/min is %.2f km/h\n", inputValue, convertedValue);
            fflush(stdout);
            break;
        case 6:
            convertedValue = convertKmHToMileMin(inputValue);
            printf("%.2f km/h is %.2f mile/min\n", inputValue, convertedValue);
            fflush(stdout);
            break;
        default:
            printf("Invalid option\n");
            fflush(stdout);
            return 1;  // Exit with an error code
    }

    return 0;  // Exit successfully
}

// Function to convert meters per second to kilometers per hour
double convertMsToKmH(double mps) {
    return mps * 3.6;
}

// Function to convert meters per second to miles per minute
double convertMsToMileMin(double mps) {
    return mps * 0.0372823;  // 1 mps = 0.0372823 mile/min
}

// Function to convert kilometers per hour to meters per second
double convertKmHToMs(double kmh) {
    return kmh / 3.6;
}

// Function to convert miles per minute to meters per second
double convertMileMinToMs(double milemin) {
    return milemin / 0.0372823;  // 1 mile/min = 0.0372823 m/s
}

// Function to convert miles per minute to kilometers per hour
double convertMileMinToKmH(double milemin) {
    return milemin * 1.60934;  // 1 mile/min = 1.60934 km/h
}

// Function to convert kilometers per hour to miles per minute
double convertKmHToMileMin(double kmh) {
    return kmh / 1.60934;  // 1 km/h = 1/1.60934 mile/min
}

