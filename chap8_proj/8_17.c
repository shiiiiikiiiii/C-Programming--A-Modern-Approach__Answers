#include <stdio.h>

int main(){
    int n, square[99][99] = {0}, row = 0, col, i = 1;
    printf("enter size of magic square: ");
    scanf("%d", &n);
    col = n / 2;
// something is wrong, however i failed to figure it out :(
    while(i <= n * n){
        if(square[row][col] == 0){
            square[row][col] = i;
        }
        else {
                if(row != n - 1){
                row++;
                continue;
            }
            else{
                row = 0;
                continue;
            }
        }

        if(row != 0){
            row -= 1;
        }
        else{
            row = n - 1;
        }

        if(col != n - 1){
            col += 1;
        }
        else{
            col = 0;
        }

        i++;
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", square[i][j]);
        }
        printf("\n");
    }
    
}