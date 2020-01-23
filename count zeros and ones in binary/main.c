#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,count=0;
    printf("Enter number:");
    scanf("%d",&number);
    while(number>0)
    {
        count=count+(number&1);
        number=number>>1;
    }
    printf("Total number of ones are: %d\n",count);
    printf("Total number of zeros are: %d",32-count);
    return 0;
}
