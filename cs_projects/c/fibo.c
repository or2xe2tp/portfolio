#include <stdio.h>

int main() 
{
    int n, i;

    int fibo(int n) 
    {
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
    }

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Sequence is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }

    return 0;
}