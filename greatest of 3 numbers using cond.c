#include<stdio.h>
void main()
{
    int a,b,c,big;
    printf("enter the value of a b c\n");
    scanf("%d %d %d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d",big);
}
