#include <stdio.h>

void main(){
    
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    if(number%3==0)
    {
        printf("%d is divisible by 3\n", number);
        if(number%6==0)
        {
            printf("%d is divisible by 6\n", number);
        }
    }
    if(number%5==0)
    {
        printf("%d is divisible by 5\n", number);
    }
    if(number%7==0)
    {
        printf("%d is divisible by 7\n", number);
    }
    if(number%8==0)
    {
        printf("%d is divisible by 8\n", number);
    }
    if(number%3 !=0 && number%5 !=0 && number%6 !=0 && number%7 !=0 && number%8 !=0)
    {
        printf("%d is not divisible by 3,5,6,7,8", number);
    }
}