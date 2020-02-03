#include<stdio.h>
#include<string.h>
main()
{
char str[10];
printf("main:enter the string\n");
scanf("%s",&str);
string_polyndrome(str);
}
int string_polyndrome(char*a)
{
int i,j;
j=strlen(a)-1;
for(i=0;i<j;i++,j--)
{
if(a[i]!=a[j])
{
printf("string is not polyndrome");
return i;
}
}
printf("string is  polyndrome");
}










