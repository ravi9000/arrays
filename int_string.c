#include<stdio.h>
#include<string.h>
main()
{
int val=123;
char str[10];
int_ascii(val,str);
printf("%s",str);
}
void int_ascii(int          
{
int count=0,num=val;
while(val>0)
{
val=val/10;
c++;
}
ptr[count]='\0';
for(count--;num>0;count--)
{
ptr[count]=(num%10)+48
num=num/10;
}
}
