#include<stdio.h>
int main()
{
int a,n,m,a1,a2;
printf("enter the squared tiles line:");
scanf("%d", &a);
printf("enter the length and width of the floor: ");
scanf("%d %d", &m, &n);
a1=a*a;
a2=m*n;
if(a2%a1==0 && a<=n && a<=m)
{
printf("%d", a2/a1);
}
else
{
printf("cannot cover");
}
}
