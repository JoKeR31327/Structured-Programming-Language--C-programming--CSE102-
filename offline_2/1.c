#include<stdio.h>
int main()
{
int z,n,f=1,s=0;
double sum=0,g=1,m=1,sum1=0,sum2=0;
printf("enter n=");
scanf("%d", &n);
for(z=1; z<=n; z++)
{
if(z%2!=0)
{
for(int i=z;i<=z;i++)
{
for(int f=i; f<=i; f++)
{
g=g*f;
s=s+i;
m=m*s;
}
}
sum1=sum1+(m/g);
}
else if(z%2==0)
{
for(int i=z;i<=z;i++)
{
for(int f=i; f<=i; f++)
{
g=g*f;
s=s+i;
m=m*s;
}
}
sum2=sum2+(m/g);
}
}
sum=sum1-sum2;
printf(" \nsum= %f \n", sum);
return 0;
}
