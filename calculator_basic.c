#include <stdio.h>

void main() 
{
    int x;
    int y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    printf("Sum of numbers: %d ",x+y);
    printf("Subtract of numbers: %d ",x-y);
    printf("Multiply of numbers: %d ",x*y);
    printf("Division of numbers: %f ",x/(float)y);
    return 0;
}
