#include<stdio.h>
int main(){
    int length;

    printf("Enter the bar length of the z character : ");
    scanf("%d",&length);

    for(int i=1; i<=length; i++){
        for(int j=1; j<=length; j++){
            if((i==1 || i==length) || (i+j==length+1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
