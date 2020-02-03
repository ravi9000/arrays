#include<stdio.h>
void display(int*);
main ()
{
int arr[5],i;
/*void (*fptr)(int*);
fptr=display;
fptr(&arr[i]);*/
for(i=0;i<5;i++)
{
printf("enter a value for arr[%d] :",i);
scanf("%d",&arr[i]);
}
void (*fptr)(int*);
fptr=display;
fptr(&arr[i]);
}
void display(int *arr)
{
int i;
printf("the array elements are: \n");
for(i=0;i<5;i++)
printf("fptr[%p]-fptr[%d]\n",arr[i],*arr[i]);
printf("\n");
}
