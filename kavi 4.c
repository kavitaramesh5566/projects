// 04
#include<stdio.h>
int main()
{
int rev=0,rem,n;
printf("Enter the value");
scanf("%d,&n);
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("the rev is %d",rev);
}

