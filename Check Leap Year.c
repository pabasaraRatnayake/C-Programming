#include<stdio.h>
int main(){
    int y;

    printf("Enter a year :");
    scanf("%d",&y);

    if(y%4==0){
        if(y%100==0){
            if(y%400==0)
                printf("A leap year");
            else
                printf("Not a leap year");
        }
        else
            printf("A leap year");
    }
    else
        printf("Not a leap year");


    return 0;

}
