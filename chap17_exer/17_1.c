#include <stdlib.h>
#include <stdio.h>

void* my_malloc(int bytes){
    void* p = malloc(bytes);

    if(p == NULL){
        printf("error");
        exit(EXIT_FAILURE);
    }

    return p;
}