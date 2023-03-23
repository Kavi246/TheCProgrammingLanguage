
#include <stdio.h>

//A program to count blanks, tabs and newlines.

int main() {

    int c, b, t, nl;
    
    b=0;
    t=0;
    nl=0;

    while((c = getchar()) != EOF) {
        if(c == ' ') ++b;
        else if(c == '\t') ++t;
        else if(c == '\n') ++nl;
    }
    printf("Blanks:%i\nTabs:%i\nNewLines:%i\n", b, t, nl);
}