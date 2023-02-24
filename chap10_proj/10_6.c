#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

// external variables
int contents[STACK_SIZE];
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

void push(int i){
    if (is_full()){
        stack_overflow();
    }
    else{
        contents[top++] = i;
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
        return contents[--top];
    }
}

int main(){
    printf("enter an RPN expression: ");
    char inputChar;
    int i1, i2;
    while(1){
        inputChar = getchar();
        switch (inputChar)
        {
        case '1':
            push(1);
            break;
        case '2':
            push(2);
            break;
        case '3':
            push(3);
            break;
        case '4':
            push(4);
            break;
        case '5':
            push(5);
            break;
        case '6':
            push(6);
            break;
        case '7':
            push(7);
            break;
        case '8':
            push(8);
            break;
        case '9':
            push(9);
            break;
        case '0':
            push(0);
            break;
        
        case '+':
            push(pop() + pop());
            break;
        case '-':
            i2 = pop();
            i1 = pop();
            push(i1 - i2);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '/':
            i2 = pop();
            i1 = pop();
            push(i1 / i2);
            break;

        case '=':
            printf("value of expression: %d\n", pop());
            make_empty();
            printf("enter an RPN expression: ");
            break;

        case 'q':
            return 0;
        
        default:
            break;
        }
    }
}