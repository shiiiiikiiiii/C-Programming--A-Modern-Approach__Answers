#include <ctype.h>
#include <stdbool.h>

int read_line(char str[], int n){
    int ch, i = 0;
    bool flag = false;

    while ((ch = getchar()) != '\n') {
        if (!flag && isspace(ch)){
            i++;
            continue;
        }

        if (!flag && !isspace(ch)){
            flag = true;
        }

        if (i < n){
            str[i++] = ch;
            }
    }

    str[i] = '\0';
    return i;
}