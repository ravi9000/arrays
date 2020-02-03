#include<stdio.h>
#include<string.h>
main()
{
char str[100];
printf("enter the string");
scanf("%s",str);
count_char(str);
}
int count_char(char*str)
{
int i=0,count[26]={0},x;
while(str[i]!='\0')
{
if(str[i]>='a'&&str[i]<='z')
{
x=str[i]-'a';
count[x]++;
}
i++;
}
for(i=0;i<26;i++)
{
printf("%c-%d\n",i+'a',count[i]);
return 0;
}
}

