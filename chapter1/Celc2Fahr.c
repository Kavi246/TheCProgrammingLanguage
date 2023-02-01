#include <stdio.h>

int main() {

    float fahr, celc;
    int min, max, increment;

    min = 0;
    max = 300;
    increment = 20;
    celc = min;
    
    printf("THE TEMP CONVERTOR\n");
    printf("Celc\tFahr\n");
    
    while(celc <= max) {
        fahr = ((9.0 / 5.0) * celc) + 32;
        printf("%3.0f\t%6.1f\n", celc, fahr);
        celc+=increment;
    }
    printf("THE END\n");
}