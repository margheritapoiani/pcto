#include <stdio.h> 
int main ()
{
    int a;
    int b;
    int c;
    printf("inserisci tre numeri");
    scanf("%d %d %d", &a, &b, &c);

    if(a-b==b-c)
    {
        printf( "i numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf( "i numeri non sono in progressione aritmetica\n");
    }
}