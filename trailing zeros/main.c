#include <stdio.h>
#include <stdlib.h>

int main()
{
     int number,temp=32,count=0;
    printf("Enter number:");
    scanf("%d",&number);
    while(temp>0)
    {
        if((1<<temp)&number)
        {
            break;
        }
        temp--;
        count++;
    }
    printf("Total number of trailing zeros are %d:",count);
    return 0;
}
