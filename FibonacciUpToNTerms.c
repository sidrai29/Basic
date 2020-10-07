#include <stdio.h>
void main() 
{
    int i, n, a= 0, b= 1, temp;
    printf("Enter the number till which you want Fibonacci Series up to n terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to n terms: ");

    for (i = 1; i <= n; ++i) 
    {
        printf("%d ",a);
        temp = a + b;
        a = b;
        b = temp;
    }
}