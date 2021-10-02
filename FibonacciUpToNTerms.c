#include <stdio.h>
void main() 
{
    int i, n, a= 0, b= 1, sumab;
    printf(" Enter the number");
    scanf("%d", &n);
    printf("Fibonacci Series up to n terms:");
    
    while(i<=n)
    {
        printf("%d ",a);
        sumab = a + b;
        a = b;
        b = sumab;
        i++;
    }
}
