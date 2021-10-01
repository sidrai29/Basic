#include<stdio.h>
//Programme for greater number
void main()
{
    int x,y,z,answer;
    printf("ENTER THREE NUMBERS Please");
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
    printf("%d is the greatest number",answer);
}
