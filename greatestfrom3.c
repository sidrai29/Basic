#include<stdio.h>
//Programme for greater number
void main()
{
    int x,y,z,answer;
    printf("Enter any 3 numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        answer=x;
    }
    else if (y>x&&y>z)
    {
        answer=y;
    }
    else
    {
        answer=z;
    }
    printf("greatest number is %d",answer);
}
