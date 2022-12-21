#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int main(){
    int win = 0, loss = 0;
    char next, tmp;

    srand((unsigned)time(NULL));

    while(1){
        if(play_game()){
            win++;
            printf("you win!\n");
        }
        else{
            loss++;
            printf("you lose!\n");
        }

        printf("play again?(y/n)");
        next = getchar();
        tmp = getchar();//clear cache
        if(next == 'y'){
            continue;
        }
        else{
            printf("wins: %d  losses: %d\n", win, loss);
            return 0;
        }
    }
}

int roll_dice(void){
    return ((rand() % 6) + (rand() % 6));
}

bool play_game(void){
    //first roll
    int dice = roll_dice(), point;
    printf("you rolled: %d\n", dice);
    if(dice == 7 || dice == 11){
        return true;
    }
    else if(dice == 2 || dice ==3 || dice ==12){
        return false;
    }
    
    //point
    point = roll_dice();
    printf("your point is: %d\n", point);

    //later
    while(1){
        dice = roll_dice();
        printf("you rolled: %d\n", dice);
        if(dice == point){
            return true;
        }
        else if(dice == 7){
            return false;
        }
    }
}