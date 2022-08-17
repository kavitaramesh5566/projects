#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value and number of bits ");
scanf("%d %d",&a,&b);
c=1<<a&b;
(c==0)?printf("14th bit is clear"):printf("14th bit is set");
return 0;
}
