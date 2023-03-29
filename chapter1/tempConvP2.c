#include <stdio.h>

// A rewritten program of the earlier tempertature program.
// this time repeat functionality is abstracted out to make logical sense.

float conversion(float f);

int main() {

    float fahr, celc;
    int min, max, increment;

    min = 0;
    max = 300;
    increment = 20;
    fahr = min;
    
    printf("THE TEMP CONVERTOR\n");
    printf("Fahr\tCelc\n");
    
    while(fahr <= max) {
        printf("%3.0f\t%6.2f\n", fahr, conversion(fahr));
        fahr+=increment;
    }

    printf("THE END\n");
}

float conversion(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}