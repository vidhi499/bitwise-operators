#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,temp=0;
    printf("Enter number:");
    scanf("%d",&number);
    while(temp<32)
    {
        if((1<<temp)&number)
        {
            break;
        }
        temp++;
    }
    printf("Total number of leading zeros are %d:",temp);
    return 0;
}
