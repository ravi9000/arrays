#include<stdio.h>
void array_binary(int*,int*);
main()
{
int arr1[10]={11,12,13};
int arr2[20];
/*printf("enter array value");
scanf("%d",&arr1);*/
void*ptr;
ptr=array_binary;
((void(*)(int*,int*))ptr)(arr1,arr2);
}
void array_binary(int*a,int*b)
{
int i,base,binary,temp,rem;
for(i=0;i<3;i++)
{
base=1;
binary=0;

temp=a[i];
/*for(i=0;i<3;i++)
{*/
while(temp>0)
{
rem=temp%2;
binary=binary+base*rem;
temp=temp/2;
base=base*10;
}
b[i]=binary;
printf("bin:%d-->%d\n",a[i],b[i]);
}
}

