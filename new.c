#include <stdio.h>
#include<cs50.h>

int main ()
{
    int a,b,c;
    a = sizeof(int);
    b = sizeof(char);
    c = sizeof(float);
    int d = sizeof(double);
    int e = sizeof(string);
    int f = sizeof(bool);
    int g = sizeof(long long  int);
    printf("%d\n" ,a);
    printf("%d\n" ,b);
    printf("%d\n" ,c);
    printf("%d\n" ,d);
    printf("%d\n" ,e);
    printf("%d\n" ,f);
    printf("%d\n" ,g);
}
