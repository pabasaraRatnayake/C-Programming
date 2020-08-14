#include<stdio.h>
int main(){
    int length;

    printf("Enter the length of one side : ");
    scanf("%d",&length);

    for(int i=1; i<=length; i++){
        for(int j=1; j<=length; j++){
            if(i==1 || i==length || j==1 || j==length)
                printf("*");
            else
                printf(" ");
            }
        printf("\n");
    }



    return 0;

}
