#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    printf("Binary of number is:");
    while(number>0)
    {
        printf("%d",number&1);
        number=number>>1;
    }
    return 0;
}
