#include<stdio.h>
void read(char*str);
void display(char*str);
main()
{
char str[10];
read(str,10);
display(str,10);
}
void read(char*str,int i)
{
scanf("%s",&str[i]);
}
void display(char*str,int )
{
read(str,10);
int i;
for(i=0;str[i]!='\0';i++)
{
printf("%p-%c\n",&str[i],str[i]);
}
}
