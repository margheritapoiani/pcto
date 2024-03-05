#include <stdio.h> 
int main ()
{ 
    int a;
    printf("inserisci un numero");
    scanf("%d", &a); 
    if(a>5)
    {
        printf("maggiore di 5");
    }
    else if (a==5)
    {
        printf("uguale a 5");
    }
    else
    {
        printf("minore di 5");
    }
}
