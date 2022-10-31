#include <stdio.h>
void main() 
{
    int i, n, a= 0, b= 1, sum;
    printf(" Enter the number");
    scanf("%d", &n);
    printf("Fibonacci Series (upto n terms):");
    
    while(i<=n)
    {
        printf("%d ",a);
        sum = a + b;
        a = b;
        b = sum;
        i++;
    }
}
