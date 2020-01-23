#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,toggle_bit;
    printf("Enter number:");
    scanf("%d",&number);
    printf("Enter bit you want to toggle:");
    scanf("%d",&toggle_bit);
    number=(number^(1<<(toggle_bit-1)));
    printf("%d",number);
    return 0;
}
