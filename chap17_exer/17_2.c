#include <stdlib.h>
#include <string.h>

void* duplicate(str){
    char* strDup = malloc(strlen(str) + 1);

    if(strDup == NULL){
        return NULL;
    }

    strcpy(strDup, str);
    return strDup;
}