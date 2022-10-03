#include<stdio.h>

void main()
{
    int n,d=0,b=0,no=0,p=1;
    printf("Enter a decimal equivalent number");
    scanf("%d",&n);
    no=n;
    while(no>0)
    {
        d=no%2;
        no=no/2;
        b=b+(d*p);
        p=p*10;
    }
    printf("The binary of %d is %d\n",n,b);

    }