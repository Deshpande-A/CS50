#include<stdio.h>
#include<cs50.h>

   int get_cents(void);
   int calculate_quarters(int cents);
   int calculate_dime(int cents);
   int calculate_nickel(int cents);
   int calculate_pennies(int cents);
int main (void)

{

//ask how many cents is the customer owed
int cents = get_cents();

//calculate the number of quarters

int quarters = calculate_quarters(cents);
cents = cents - quarters * 25;


//calculate the number of dime

int dime = calculate_dime(cents);
cents = cents - dime * 10;


//calculate the number of nickel
int nickel = calculate_nickel(cents);
cents = cents - nickel * 5;


//calculate the number of pennies
int pennies = calculate_pennies(cents);
cents = cents - pennies * 1;


int coins = quarters + dime + nickel + pennies;
printf("total coins : %i \n" , coins);
}

int get_cents()
{
    int cents;
    do
    {
    cents = get_int("How many cants owed to the customer(Must be a positive number): ");
    }
    while(cents<0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    do
    {
        cents = cents - 25;
        quarters++;
    }

    while(cents>=25);
    return quarters;
}

int calculate_dime(int cents)
{
    int dime = 0;
    do
    {
        cents = cents - 10;
        dime++;
    }

    while(cents>=10);
    return dime;
}

   int calculate_nickel(int cents)
   {
    int nickel = 0;
    do
    {
        cents = cents - 5;
        nickel++;
    }

    while(cents>=5);
    return nickel;

   }


   int calculate_pennies(int cents)
   {
    int pennies = 0;
    do
    {
        cents = cents - 1;
        pennies++;
    }

    while(cents>=1);
    return pennies;
   }
