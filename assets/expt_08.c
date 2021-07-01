#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter a number :");
    scanf("%d",&n);
    t=n%2;
    if (t==0)
        printf("EVEN NUMBER");
    else
        printf("ODD NUMBER");
}