#include <stdio.h>

void main(){
    int number,remainder;
    printf("enter a number: ");
    scanf("%i",&number);
    remainder=number%9;
    switch(remainder)
    {
        case 0:
        printf("remainder=%i",remainder);
        break;
        case 1:
        printf("remainder=%i",remainder);
        break;
        case 2:
        printf("remainder=%i",remainder);
        break;
        case 3:
        printf("remainder=%i",remainder);
        break;
        case 4:
        printf("remainder=%i",remainder);
        break;
        case 5:
        printf("remainder=%i",remainder);
        break;
        case 6:
        printf("remainder=%i",remainder);
        break;
        case 7:
        printf("remainder=%i",remainder);
        break;
        case 8:
        printf("remainder=%i",remainder);
        break;

    }
}