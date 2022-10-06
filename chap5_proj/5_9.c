#include <stdio.h>

int main(void){
    int mm1, dd1, yy1, mm2, dd2, yy2, earlier;
    printf("enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    printf("enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if(yy1 < yy2){
        earlier = 1;
    }
    else if(yy1 > yy2){
        earlier = 2;
    }
    else{
        if(mm1 < mm2){
            earlier = 1;
        }
        else if(mm1 > mm2){
            earlier = 2;
        }
        else{
            if(dd1 < dd2){
                earlier = 1;
            }
            else if(dd1 > dd2){
                earlier = 2;
            }
            else{
                return 0;
            }
        }
    }

    if(earlier == 1){
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    }
    else{
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    }
}