#include <stdio.h>

void selection_sort(int arr[], int n);

int main(){
    int n = 0, arr[1000] = {0};
    printf("enter a series(<= 1000numbers) of integers(99999 to quit)");

    while(arr[n - 1] != 99999){
        scanf("%d", &arr[n++]);
    }

    selection_sort(arr, n - 1);

    for(int i = 0; i < (n - 1); i++){
        printf("%d ", arr[i]);
    }
}

void selection_sort(int arr[], int n){
    if(n <= 1){
        return;
    }

    int max = -99999, tmp, i, maxLocation;

    for(i = 0; i < n; i++){
        if(arr[i] >= max){
            max = arr[i];
            maxLocation = i;
        }
    }
    tmp = arr[n - 1];
    arr[n - 1] = max;
    arr[maxLocation] = tmp;

    selection_sort(arr, n - 1);
}