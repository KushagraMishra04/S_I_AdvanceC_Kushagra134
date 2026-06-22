#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,swap;
printf("\n enter unsorted data");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++) //cycle
{
for(j=0;j<=9-i;j++) //sorting bubble wise
{
if(a[j]>a[j+1]) //comparison inside a bubble
{

swap=a[j+1];
a[j+1]=a[j]; //swap values inside a bubble
a[j]=swap;
}
}
}
printf("\n Sorted data:"); //printing
for(i=0;i<=9;i++)
{
printf("\n number %d: ", a[i]);
}
getch();
}