#include<stdio.h>
void main(){
int a[10],i,n,min,max;
//printf("enter the size");
//scanf("%d",&n);
printf("enter the elements in array");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1;i<10;i++){
if(min>a[i]){
min=a[i];
}
for(i=1;i<10;i++){
if(max<a[i]){
max=a[i];
}
}
printf("min = %d",min);
printf("max = %d",max);
}
}
