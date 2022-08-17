\\07
#include<stdio.h>
int main() {
int a,b,c;
printf("enter a weight:\n");
scanf("%d %d %d",&a,&b,&c);
if (a>=b)
printf("a is heaviest:");
else if (b>=c)
printf("b is heaviest:");
else if (c>=a)
printf("c is heaviest:");
return 0;
}
