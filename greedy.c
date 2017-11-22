#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Variable Declarations
    float amount = 0;
    int cents = 0;
    int count = 0;
    int amount_left = 0;

    do
    {
    //ask how much change
    printf("Hi, How much change is owed?\n");
    amount = get_float();
    //check if negative
    if(amount == 0 || amount <=0)
    printf("EROOR: must not be negative.\n");
    }
    while(amount <= 0);

    //convert float to int, round
    cents = (int)round(amount*100);

    //set cents to amount_left
    amount_left = cents;

    while (amount_left >= 25) {
        count++;
        amount_left -= 25;
    }
    while (amount_left >= 10) {
        count++;
        amount_left -= 10;
    }
    while (amount_left >= 5) {
        count++;
        amount_left -= 5;
    }
    while (amount_left >= 1) {
        count++;
        amount_left -= 1;
    }
    printf("%d\n", count);
}