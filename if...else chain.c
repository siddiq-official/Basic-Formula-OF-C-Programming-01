#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is larger\n",a);
    }
    if(b>a && b>c)
    {
        printf("%d is larger\n",b);
    }
    if(c>a && c>b)
    {
        printf("%d is larger\n",c);
    }
}
