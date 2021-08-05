#include<stdio.h>

void main ()
{
    int s=0,n,c;
    printf("Enter your number :");
    scanf("%d",&n);
    for (c=1;c<=n;c++)
    {
        s=s+c;
    }
    printf ("%d",s);
}
