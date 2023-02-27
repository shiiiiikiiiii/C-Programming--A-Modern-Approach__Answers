#include <stdbool.h>

#define STACK_SIZE 100

// external variables
int contents[STACK_SIZE];
int* top_ptr = &contents[0];

void make_empty(){
    top_ptr = &contents[0];
}

bool is_empty(){
    return (top_ptr == &contents[0]);
}

bool is_full(){
    return (top_ptr == &contents[STACK_SIZE]);
}

int stack_overflow(){
    printf("stack overflow\n");
    return 0;
}

void push(int i){
    if (is_full()){
        stack_overflow();
    }
    else{
        *top_ptr++ = i;
    }
}

int stack_underflow(){
    printf("stack underflow\n");
    return 0;
}

int pop(){
    if (is_empty()){
        stack_underflow();
    }
    else{
        return *--top_ptr;
    }
}