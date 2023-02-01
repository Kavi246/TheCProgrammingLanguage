#include <stdio.h>

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
        celc = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.2f\n", fahr, celc);
        fahr+=increment;
    }
    printf("THE END\n");
}