#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int x, y;

    printf("What is the value of x? \n");
    scanf("%d", &x);
    printf("What is the value of y? \n");
    scanf("%d", &y);

    if (x < y)
    {
        printf("X is less than y\n");
    }

    else if (x == y)
    {
        printf("X is equal to Y\n");
    }
    else
    {
        printf("Y is less than x\n");
    }
}
