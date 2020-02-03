#include<stdio.h>
#include<string.h>
void string_int(char*);
main()
{
char str[10]="123";
void*ptr;
ptr=string_int;
((void(*)(char*))ptr)(str);
}
void string_int(char*x)
{
int y,i,temp;
for(i=0;x[i]!='\0';i++)
{
temp=x[i];
y=temp-48;
printf("%d\n",y);
}
}
