#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// function prototype
void Hunerler(float itemPrice, float *donationTotal, float *profitTotal);

int main(void)
{
    // declaring variables
    int i, randnum;
    float price, d_total, p_total;
    for (i = 0; i < 50; i++)
    {
        // setting a seed to generate different numbers when program re-executed (also in every iteration)
        srand(time(NULL) + i);
        randnum = rand() % 21;

        // squeezing the generated number between 0 and 20
        (randnum != 20) ? (price = rand() % 20 + (double)(rand() % 100) / 100) : (price = rand() % 20);
        printf("Item is: $%.2f\n", price);

        // calling function Hunerler to do the trick
        Hunerler(price, &d_total, &p_total);
    }
    printf("Donation is: $%.2f\nProfit is: $%.2f\n", d_total, p_total);
}

void Hunerler(float itemPrice, float *donationTotal, float *profitTotal)
{
    int whole;
    double fraction;

    // dividing the number to whole and fractional part
    whole = (int)(itemPrice);
    fraction = itemPrice - whole;
    *donationTotal += fraction;
    *profitTotal += whole;
}