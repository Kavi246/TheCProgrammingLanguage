#include <stdio.h>

#define IN 1
#define OUT 0

//A program that prints its input one word at a time.

int main() {
    
    int c, state;

    state = OUT;
    while((c = getchar()) != EOF) {
        if(state == OUT && c != ' ' && c != '\t') {
            state = IN;
        }
        if(state == IN) {
            if(c == ' ' || c == '\t'){
                putchar('\n');
                state = OUT;
            }
            else {
                putchar(c);
            }
        }
    }
}