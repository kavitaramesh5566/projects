\\05
#include<stdio.h>
int main()
{
int a,b,c,d,e,f,i,k,j,temp;
printf("Enter the the seating position of student a = ");
scanf("%d/n",&a);
printf("Enter the the seating position of student b = ");
scanf("%d/n",&b);

printf("Enter the the seating position of student c = ");
scanf("%d/n",&c);

printf("Enter the the seating position of student d = ");
scanf("%d/n",&d);

printf("Enter the the seating position of student e = ");
scanf("%d/n",&e);

printf("Enter the the seating position of student f = ");
scanf("%d/n",&f);

printf("Enter the the seating position of student i = ");
scanf("%d/n",&i);
printf("Enter the the seating position of student j = ");
scanf("%d/n",&j);
printf("Enter the the seating position of student k = ");
scanf("%d/n",&k);


temp=d;
d=e;
e=temp;

printf("%d %d",d,e);
return 0;






}
