#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    if(0==num%2)
    {
        printf("this is an even number");

    }
    else
    {
         printf("this is an odd number");

    }
    return 0;
}
