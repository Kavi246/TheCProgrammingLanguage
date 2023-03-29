#include <stdio.h>

//A program to print a historgram of the frequencies of characters given in its input.

int main() {

    int c = 0;
    
    int charList[127];
    for(int i = 0; i < 127; ++i) {
        charList[i] = 0;
    }

    while((c = getchar()) != EOF) {
        ++charList[c];
    }

    for(int i = 0; i < 127; ++i) {
        if(charList[i] != 0) {
            printf("\n%c: ", i);
            for(int j = 0; j < charList[i]; j++) {
                putchar('#');
            }
        }
    }

    putchar('\n');
    
    return 0;
}