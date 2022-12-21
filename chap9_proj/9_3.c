#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main() {
    char walk[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            walk[i][j] = '.';
        }
    }

    generate_random_walk(walk);
    print_array(walk);    
}

void generate_random_walk(char walk[10][10]){
    int move[4][2] = {
        {-1, 0},
        {0, 1},
        {1, 0},
        {0, -1}
    };
    int x = 0, y = 0, count = 1, step, invalid = 0;
    srand((unsigned)time(NULL));

    walk[0][0] = 'A';

    while (count < 26){
        step = rand() % 4;
        if(invalid > 20){
            break;
        }
        if((x + move[step][0]) >= 0 && (y + move[step][1]) >= 0 && walk[x + move[step][0]][y + move[step][1]] == '.'){
            x += move[step][0];
            y += move[step][1];
            walk[x][y] = 'A' + (char)count;
            count++;
            invalid = 0;
        }
        else{
            invalid++;
        }
    }
}

void print_array(char walk[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}