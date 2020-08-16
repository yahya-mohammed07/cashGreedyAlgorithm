#include <stdio.h>
#include <math.h>

int main()
{
    float dollars = 0.0;
    do
    {
        printf("Change owned: ");
    }
    while (scanf("%f", &dollars) != 1);
    //*
    int cents = round(dollars * 100);
    //*
    int pennies = 1;
    int nickles = 5;
    int dimes = 10;
    int quartes = 25;
    int coins = 0;
    //
    while(cents != 0)
    {
        if(cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if(cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }
    printf("%d\n", coins);
}