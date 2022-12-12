#include <stdio.h>

int main(){
    int arr[5][5];
    int totalScore, averageScore, highScore = -1, lowScore = 1000, sum, tmp;
    for(int i = 0; i < 5; i++){
        printf("enter row %d: ", i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        sum = 0;
        for(int j = 0; j < 5; j++){
            sum += arr[i][j];
        }
        printf("row %d\ntotal score: %d\naverage score: %lf\n\n", i, sum, sum / 5.0);
    }

    for(int i = 0; i < 5; i++){
        sum = 0;
        highScore = -1;
        lowScore = 1000;
        for(int j = 0; j < 5; j++){
            tmp = arr[j][i];
            sum += tmp;
            if(tmp >= highScore){
                highScore = tmp;
            }
            if(tmp <= lowScore){
                lowScore = tmp;
            }
        }
        printf("column %d\naverage score: %lf\nhigh score: %d\nlow score: %d\n\n", i, sum / 5.0, highScore, lowScore);
    }
}