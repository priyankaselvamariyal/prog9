#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("sum=%d",sum);
getch();
