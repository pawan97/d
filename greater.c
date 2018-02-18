#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        printf("%d is greater",a);
    if(c>b)
        printf("%d is greater",c);
    else
        printf("%d is greater",b);
}

