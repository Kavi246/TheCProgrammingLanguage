#include <stdio.h>

//A program to copy input to output, while reducing excess blanks in a row to just one blank.

int main() {

    int c;
    int prevC;

    while((c = getchar()) != EOF) {
        if(prevC == ' ' && c == ' ') ;
        else {
            putchar(c);
        }
            prevC = c;

    }
}