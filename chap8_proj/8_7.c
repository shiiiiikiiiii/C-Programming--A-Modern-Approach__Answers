#include <stdio.h>

int main(){
    int arr[5][5];
    int tmp;
    for(int i = 0; i < 5; i++){
        printf("enter row %d: ", i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("row totals: ");
    for(int i = 0; i < 5; i++){
        tmp = 0;
        for(int j = 0; j < 5; j++){
            tmp += arr[i][j];
        }
        printf("%d ", tmp);
    }

    printf("\ncolumn totals: ");
    for(int i = 0; i < 5; i++){
        tmp = 0;
        for(int j = 0; j < 5; j++){
            tmp += arr[j][i];
        }
        printf("%d ", tmp);
    }
}