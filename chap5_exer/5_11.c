#include <stdio.h>

int main(void){
    int area_code;//name from the question. so the uppercase para-name is not used
    printf("print the area code: ");
    scanf("%d", &area_code);

    switch (area_code)
    {
    case 229: case 404: case 470:
        printf("albany");
        break;
    case 478:
        printf("macon");
        break;
    case 678: case 770:
        printf("atlanta");
        break;
    case 706: case 762:
        printf("columbus");
        break;
    case 912:
        printf("savannah");
        break;
    
    default:
        printf("area code not recognized");
        break;
    }
}