#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,temp=31;
    printf("Enter number:");
    scanf("%d",&number);
    while(temp>0)
    {
        if((1<<temp)&number)
        {
            break;
        }
        temp--;
    }
    printf("set bit is at position %d",temp+1);
    return 0;
}
