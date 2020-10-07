#include<stdio.h>
//Programme for greater number
void main()
{
    int x,y,z;
    printf("Enter 3 integer number please");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("%d is greater",x);
    }
    else if (y>x&&y>z)
    {
        printf("%d is greater",y);
    }
    else
    {
        printf("%d is greater",z);
    }
}
