#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

// external variables
char contents[STACK_SIZE];
int top = 0;

void make_empty(){
    top = 0;
}

bool is_empty(){
    return (top == 0);
}

bool is_full(){
    return (top == STACK_SIZE);
}

int stack_overflow(){
    printf("stack overflow\n");
    return 0;
}

void push(char c){
    if (is_full()){
        stack_overflow();
    }
    else{
        contents[top++] = c;
    }
}

int stack_underflow(){
    printf("stack underflow\n");
    return 0;
}

char pop(){
    if (is_empty()){
        stack_underflow();
    }
    else{
        return contents[--top];
    }
}

int main(){
    printf("enter parentheses and/or braces: ");
    char inputChar;
    while(1){
        inputChar = getchar();
        if(inputChar == '(' || inputChar == '{'){
            push(inputChar);
        }
        if(inputChar == ')' || inputChar == '}'){
            char tmp = pop();
            if((inputChar == ')' && tmp != '(') || (inputChar == '}' && tmp != '{')){
                printf("parentheses/braces are not nested properly");
                return 0;
            }
        }
        if(inputChar == '\n'){
            if(is_empty()){
                printf("parentheses/braces are nested properly");
                return 0;
            }
            else{
                printf("parentheses/braces are not nested properly");
                return 0;
            }
        }
    }
}