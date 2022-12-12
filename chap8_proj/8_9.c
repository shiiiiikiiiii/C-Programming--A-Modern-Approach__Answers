#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char elements[10][10];
    int move[4][2] = {
        {-1, 0},
        {0, 1},
        {1, 0},
        {0, -1}
    };
    int x = 0, y = 0, count = 1, step, invalid = 0;
    srand((unsigned)time(NULL));

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            elements[i][j] = '.';
        }
    }
    elements[0][0] = 'A';

    while (count < 26){
        step = rand() % 4;
        if(invalid > 20){
            break;
        }
        if((x + move[step][0]) >= 0 && (y + move[step][1]) >= 0 && elements[x + move[step][0]][y + move[step][1]] == '.'){
            x += move[step][0];
            y += move[step][1];
            elements[x][y] = 'A' + (char)count;
            count++;
            invalid = 0;
        }
        else{
            invalid++;
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%c ", elements[i][j]);
        }
        printf("\n");
    }
}