// A program to print a histogram of the length of words in its input.

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    
    int c, state, charCount;
    c = charCount = 0;
    int wordLengths[15];

    for(int i = 0; i < 15; ++i) {
        wordLengths[i] = 0;
    }

    state = OUT;
    while((c = getchar()) != EOF) {
        if(state == OUT && c != ' ' && c != '\t' && c != '\n') {
            state = IN;
            charCount = 0;

        }
        if(state == IN) {
            if(c == ' ' || c == '\t' || c == '\n'){
                ++wordLengths[charCount];
                state = OUT;
            }
            else {
                ++charCount;
            }
        }
    }
    
    for(int i = 1; i < 15; ++i) {
        printf("\n%d: ", i);
        for(int j = 0; j < wordLengths[i]; j++) {
            putchar('#');
        }
    }

    return 0;
    
}