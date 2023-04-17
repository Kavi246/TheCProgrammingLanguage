#include <stdio.h>
#define MAXLINE 1000

// A program to print the longest line.
// Revised work for arbitrarily long input lines. (TO DO)

int getLine(char line[], int maxline);

void copyLine(char to[], char from[]);

int main() {
    

    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0) {
        //printf("line?: %s and length?: %d\n", line, len);
        if(len > max) {
            max = len;
            copyLine(longest, line);
        }
        //printf("maxlen?: %d and maxline?: %s", max, longest);
    }

    if(max > 0) {
        printf("\nlength:%d\ntesting: %s", max, longest);
    }

    return 0;

}

int getLine(char s[], int limit) {

    int c, i;

    for(i = 0; ((i < limit-1) && ((c = getchar()) != EOF) && (c != '\n')); ++i) {
        s[i] = c;
    }
    if(c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;

}

void copyLine(char to[], char from[]) {
   
    int i = 0;
    while((to[i] = from[i]) != '\0') {
     
        i++;
    }

}