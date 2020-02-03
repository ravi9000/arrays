#include<stdio.h>
int my_strlen(char*str);
void rev_string(char*str);
main()
{
char buf[10]="rajesh";
printf("%s\n",buf);
rev_string(buf);
printf("%s",buf);
}
void rev_string(char*str)
{
int l,i,j;
char temp;
l=my_strlen(str);
for(i=0,j=l-1;i<j;i++,j--)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
}
int my_strlen(char*str)
{
int l=0,i;
for(i=0;str[i]!='\0';i++)
{
l++;
}
return l;
}

