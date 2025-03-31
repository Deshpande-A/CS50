#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int start = 0, end = 0, years = 0;

    // TODO get start population from user:
    do{
        start = get_int("Whats the starting population of llamas? :");
    }
    while(start<9);

    // TODO get end dsate from the user:

do{
        end = get_int("Whats the goal population of llamas? :");
    }
    while(end<start);


    // TODO calculate the number of years:
while(start<end)
{
    start= start + (start/12);
    years++;
}
    // TODO print the number of years:
printf("it will take %i Years", years);
}
 