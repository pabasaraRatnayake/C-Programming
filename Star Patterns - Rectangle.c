#include<stdio.h>
int main(){
    int columns, rows;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&columns);

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            printf("*   ");
        }
        printf("\n");
    }


    return 0;
}
