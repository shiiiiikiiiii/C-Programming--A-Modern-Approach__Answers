#include <ctype.h>
#include <stdbool.h>

int read_line(char str[], int n){
    int ch, i = 0;
    bool flag = false;

    while ((ch = getchar()) != '\n') {
        if (i < n){
            str[i++] = ch;
            }
    }

    str[i++] = '\n';
    str[i] = '\0';
    return i;
}