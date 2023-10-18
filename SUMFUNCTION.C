#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int n1,n2,s=0;
printf("enter 2 numbers;");
scanf("%d%d",&n1,&n2);
s=sum(n1,n2);
printf("sum=%d",s);
getch();
}
int sum (int a,int b)
{
int s;
s=a+b;
return s;
}
