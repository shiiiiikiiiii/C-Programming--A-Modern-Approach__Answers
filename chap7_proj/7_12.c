#include <stdio.h>
#include <ctype.h>

int main(){
    double sum = 0, current = 0;
    char tmp;
    printf("enter an expression: ");

    scanf("%lf", &sum);
    do{
        tmp = getchar();
        switch (tmp)
        {
        case '+':
            scanf("%lf", &current);
            sum += current;
            break;
        case '-':
            scanf("%lf", &current);
            sum -= current;
            break;
        case '*':
            scanf("%lf", &current);
            sum *= current;
            break;
        case '/':
            scanf("%lf", &current);
            sum /= current;
            break;
        default:
            break;
        }
    } while (tmp != '\n');
    
    printf("value of expression: %lf", sum);
}