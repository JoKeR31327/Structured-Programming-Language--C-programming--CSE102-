#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,y1,y2;
int x,y,r,a,b,m,n,o,l,p;
printf("enter the centers and radius of the circle: ");
scanf("%d %d %d", &x, &y, &r);
printf("enter the first two cordinates:");
scanf("%d %d", &x1, &y1);
printf("enter the second two cordinates:");
scanf("%d %d", &x2, &y2);
a=((x1-x)*(x1-x))+((y1-y)*(y1-y))-(r*r);
b=((x2-x)*(x2-x))+((y2-y)*(y2-y))-(r*r);
m=(y1-y2); n=(x2-x1); o=(y1*(x1-x2))+(x1*(y2-y1));
l=(m*x+n*y+o)/sqrt(m*m+n*n);
p=(n*x-m*y-(((n*(x1+x2))-(m*(y1+y2)))/2))/sqrt(m*m+n*n);
l=abs(l);
p=abs(p);
if(a<0 && b<0)
{
printf("The line segment is inside the circle");
}

else if(a<0 && b>0)
{
    printf("The line segment intersects with the circle");
}
else if(b<0 && a>0)
{
    printf("The line segment intersects with the circle");
}

         else if((a==0 && b<0) || (a<0 && b==0))
{
    printf("The line segment is inside the circle");
}

else if(a>0 && b>0)
{

 if (l<r && p<r)
{
    printf("The line segment intersects with the circle");
}
else if (l==r && p<=r)
{
    printf("The line segment touches the circle");
}
else
{
printf("The line segment is outside the circle");
}

}
else if ((a==0 && b>0) || (b==0 && a>0))
{
    printf("The line segment touches the circle");
}

else if (a==0 && b==0)
{
     printf("The line segment is inside the circle");
}
}
