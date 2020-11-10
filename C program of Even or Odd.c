#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if ( num % 5 == 0)
        printf(" Even ");
    else
        printf(" Odd ");

    getch();

}
