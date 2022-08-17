//08
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value and number of bits ");
scanf("%d %d",&a,&b);
c=1<<a&b;
(c==0)?printf("11th bit is set"):printf("11th bit is clear");
return 0;
}
