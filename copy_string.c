#include<stdio.h>
# define MAX 10
main()
{
char src[MAX],dst[MAX];
int i;
printf("enter the string");
scanf("%s",src);
for(i=0;src[i]!='\0';i++)
{
dst[i]=src[i];
}
dst[i]='\0';
printf("%p-%s\n",dst,dst);
}
