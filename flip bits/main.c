//flip bits
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,temp=0;
    printf("Enter number:");
    scanf("%d",&number);
    number=~number;
    printf("%d",number);
    return 0;
}
