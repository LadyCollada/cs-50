#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h, i, j;

    do
    {

    printf("Height:");
    h = get_int();
    }
    while (h < 1 || h > 23);

    printf("\n");
    for (i = 0; i < h; i++) {

        for (j = 0; j < h - i - 1; j++)
        printf(" ");

        for (j = 0; j < i + 1; j++)
        printf("#");

        printf("  ");

        for (j = 0; j < i + 1; j++)
        printf("#");

    printf("\n");
    }
}