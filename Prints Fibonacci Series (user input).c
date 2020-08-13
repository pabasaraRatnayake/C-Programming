#include<stdio.h>

int Fibonacci(int);

int main(){
    int n, i = 0, c;
    printf("Enter the term to which you want to find fibonacci values : ");
    scanf("%d",&n);
    printf("\nFibonacci series :\n");
    for ( c = 1 ; c <= n ; c++ ){     //used just to print the series of the fibonacci values
        printf("%d ", Fibonacci(i));
        i++;
    }

   return 0;
}

int Fibonacci(int n){
    if ( n == 0 || n == 1 )
        return n;

    return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
