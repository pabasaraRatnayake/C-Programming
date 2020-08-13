#include <stdio.h>
int main(){
    int n,lcm;

    printf("Enter a number of numbers you wish to enter : ");
    scanf("%d",&n);

    int num[n];

    for(int i=0; i<n; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
        }
    int max = num[0];
    for(int i=0; i<n; i++){
        if(num[i] > max)
            max = num[i];
    }
    int flag = 1;
    for(int i=0; i<n; i++){
        if(max % num[i] != 0){
            flag = 0;
            max = max * n;
            }
        if(flag == 1)
            break;
        }

        printf("LCM = %d", max);


    return 0;
}



