#include<stdio.h>
int main()
{
int base;
char a,b,c,d,min;
scanf("%d,", &base);
char b1,b2,b3,b4;
scanf("%c %c %c %c", &a, &b, &c, &d);

if (a>b)
{
    min=a; a=b; b=min;
}
if(a>c)
{
    min=a; a=c; c=min;
}
if(a>d)
{
    min=a; a=d; d=min;
}
b1=a;
if(b>c)
{
    min=b; b=c; c=min;
}
if(b>d)
{
    min=b; b=d; d=min;
}
b2=b;
if(c>d)
{
    min=c; c=d; d=min;
}
b3=c;
b4=d;
printf("%c %c %c %c", b1, b2, b3, b4);
}
