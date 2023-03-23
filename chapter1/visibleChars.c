
#include <stdio.h>

//A program to replace tabs, backspaces and backslashes with their symbolic equivalent.

int main() {

    int c;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if(c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if(c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}