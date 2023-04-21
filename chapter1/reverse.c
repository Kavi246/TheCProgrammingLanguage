#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int limit);

void reverser(char from[], int len);

int main() {

    int len = 0;
    char line[MAXLINE];
    char revLine[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0)
    {
        reverser(line, len);
    }
    
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

void reverser(char from[], int len) {

    char to[len];
    int lastChar = len - 2;

    int i;
    for(i = 0; i <= lastChar; ++i) {
        to[i] = from[lastChar - i];
    }
    to[++i] = '\n';
    to[++i] = '\0';
     
    printf("\n--------------------------------------");
    printf("\n%s", to);
}