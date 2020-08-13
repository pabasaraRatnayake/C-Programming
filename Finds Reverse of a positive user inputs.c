#include <stdio.h>

void reverse(int arr[], int n);

int main(void){
    int n;


    printf("Enter the number of positive integers you wish to enter : ");
    scanf("%d",&n);

    int arr[n], arr2[n];

    for(int i=0; i<n; i++){
        printf("Enter a positive integer : ");
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            printf("Integer is not positive");
            return;
        }
        arr2[n - 1 - i] = arr[i];
    }



    for (int i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}


