#include<stdio.h>
//Programme for greater number
void main()
{
    int x,y,z;
    printf("ENTER THREE NUMBERS Please");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("%d is the greatest number",x);
    }
    else if (y>x&&y>z)
    {
        printf("%d is the greatest number",y);
    }
    else
    {
        printf("%d is the greatest number",z);
    }
}
