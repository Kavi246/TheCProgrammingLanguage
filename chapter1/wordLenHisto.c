// A program to print a histogram of the length of words in its input.

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    
    int c, state, charCount;
    c = charCount = 0;
    int wordLengths[15];

    //initialise all elements to 0.
    for(int i = 0; i < 15; ++i) {
        wordLengths[i] = 0;
    }

    //use states to check if currently in a word and count the characters in it.
    //when exiting a word it increments the corresponding index in the array.
    //since array index increase linearlly, they can represent the lengths of words.
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
    
    //loop through each word length category (or array index)
    //then represent their respective count value visually by using hashes to create a bar.
    for(int i = 1; i < 15; ++i) {
        printf("\n%d: ", i);
        for(int j = 0; j < wordLengths[i]; j++) {
            putchar('#');
        }
    }

    //return horizontal histogram.
    return 0;
    
}