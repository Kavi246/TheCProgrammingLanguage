/* A program to remove trailing blanks and tabs
 and remove entirely white lines*/

#include <stdio.h>
#define LINEMAX 1000

int getLine(char readLine[], int lineMaxSize);

void reduceLine(char from[], char to[], int len);

int main() {

    int currentlen = 0;
    char currentLine[LINEMAX];
    char reducedLine[LINEMAX];

    while((currentlen = getLine(currentLine, LINEMAX)) >= 0) {
        reduceLine(currentLine, reducedLine, currentlen);
        printf("here:%s", reducedLine);
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

 void reduceLine(char from[], char to[], int len) {
    
    int j = 0;
    for(int i = 0; i <= len; ++i) {
        if(((from[i] == ' ' ) && (from[i+1] == ' '))
            || ((from[i] == '\t') && (from[i+1] == '\t'))) {
        }
        else {
            to[j] = from[i];
            j++;
        }
    }
    to[j] = '\0';
    
 }
