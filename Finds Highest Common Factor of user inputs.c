#include <stdio.h>
int main(){
    int n, hcf, min,flag;

    printf("Enter a number of numbers you wish to enter : ");
    scanf("%d",&n);

    int num[n];

    for(int i=0; i<n; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
        min = num[0];
        if(num[i] < min){
            min = num[i];
        }
    }

    for(int i=1; i<=min; i++){
        flag = 1;
        for(int j=0; j<n; j++){
            if(num[j]%i!=0){
                flag = 0;
                break;                  //terminates the immediate loop (makes flag = 0 and goes to next iteration of i)
            }
        }                               //if it does not break, goes to next iteration of i
    if(flag == 1)
        hcf = i;
   }

   printf("The Highest Common Factor of entered numbers is : %d",hcf);

    return 0;
}

//what is done in the last for loop is that keeping flag as 1 itself and find the largest divisible integer until it meets minimum integer of the array.



