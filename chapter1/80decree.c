// a program to print all lines that are longer than 80 characters.
#include <stdio.h>
#define MAXLINE 1000
#define THRESHOLD 80

int getLine(char line[], int maxline);

int main() {

    int len;
    char currLine[MAXLINE];

    while((len = getLine(currLine, MAXLINE)) > 0) {
        if(len > THRESHOLD) {
            printf("\n%s", currLine);
        }
    }

    return 0;
}

int getLine(char s[], int limit) {
    
    int c, i;

    for(i = 0; ((i < limit-1) && (c = getchar()) != EOF) && (c != '\n'); i++) {
        s[i] = c;
    }
    if(c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;

}