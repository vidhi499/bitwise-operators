#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,rotations,flag;
    printf("Enter number");
    scanf("%d",&number);
    printf("Enter the number of rotations:");
    scanf("%d",&rotations);
    while(rotations>0)
    {
        flag=number&1;
        number=number>>1;
        number=(flag<<31)^(number);
        rotations--;
    }
    printf("Number after rotations is %d:",number);
    return 0;
}
