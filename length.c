#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    string name = get_string("What's Your name? ");
    int n = strlen(name);
    printf("%i\n", n);
}
