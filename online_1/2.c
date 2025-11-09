#include<stdio.h>
int main()
{
    float s,v,d1,a,d2,t1,t2;
    printf("enter d1 a v d2: ");
    scanf("%f %f %f %f", &d1, &a, &v, &d2);
    s=d1+d2;
    t1=s/v;
    t2=sqrt((2*d2)/a);
    if(t1<=t2)
    {
        printf("caught");
    }
    else
    {
        printf("safe");
    }
}
