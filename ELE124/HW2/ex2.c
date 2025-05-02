#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// function prototype
void Hunerler(float itemPrice, float *donationTotal, float *profitTotal);

int main(void)
{
    // declaring variables
    int i;
    float price, d_total, p_total;
    for (i = 0; i < 50; i++)
    {
        /* setting and changing the seed for every
		iteration and program execution using time */
        srand(time(NULL) + 100 * i);

        // generating a random floating number between 0 and 20
        price = (double)(rand() % 2000) / 100;
        printf("Item is: $%.2f\n", price);

        // calling function Hunerler
        Hunerler(price, &d_total, &p_total);
    }
    printf("Donation is: $%.2f\nProfit is: $%.2f\n", d_total, p_total);
    system("pause");
}

void Hunerler(float itemPrice, float *donationTotal, float *profitTotal)
{
    int whole;
    double fraction;

    // dividing the number to whole and fractional part
    whole = (int)(itemPrice);
    fraction = itemPrice - whole;
    
    // adding those parts to the necessary variables
    *donationTotal += fraction;
    *profitTotal += whole;
}