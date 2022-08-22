#include<stdio.h>
int main()
{
    int count=0;
int a[5]={3,2,5,6,7},i;
printf("enter the value\n");
scanf("%d",&i);
for(i=0;i<=5;i++)
{
count=count++;
}
printf("%d",count);
return 0;
}
