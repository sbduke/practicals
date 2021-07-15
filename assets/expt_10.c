#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    switch (n)
    {
        case 0:
        {
            printf("ZERO");
            break;
        }
        case 1:
        {
            printf("ONE");
            break;
        }
        case 2:
        {
            printf("TWO");
            break;
        }
        case 3:
        {
            printf("THREE");
            break;
        }
        case 4:
        {
            printf("FOUR");
            break;
        }
        case 5:
        {
            printf("FIVE");
            break;
        }
        default:
        {
            printf("This number is not between 0 to 5");
            break;
        }
    }
    return 0;
}
