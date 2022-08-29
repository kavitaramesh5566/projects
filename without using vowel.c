# include<stdio.h>
int main()
{
 int i;
 char j[]="chandana";
 int len =strlen(j);
 for (i=0;i<len;i++)
 {
  if(j[i]!='a'&j[i]!='e'&j[i]!='i'&j[i]!='o'&j[i]!='u')
   printf("%c",j[i]);

 }
}

