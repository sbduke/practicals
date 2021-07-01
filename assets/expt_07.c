/*
===============================================
            NOTRE DAME COLLEGE, DHAKA
                ICT PRACTICAL 
                   BATCH-22
===============================================
EXPT NO         :   7
EXPT NAME       :   CALCULATING TRIANGLE AREA
@SHARIF #12205125
===============================================
*/

#include<stdio.h>
int main()
{
    float b,h,a;
    printf("Enter base and height");
    scanf("%f%f",&b,&h);
    a=0.5*b*h;
    printf("The area is %f",a);
}