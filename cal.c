#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int n=12345;
    n =(n%1000)/100;
    printf("%i", n);
}
