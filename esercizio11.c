#include <stdio.h> 
int main ()
{ 
    int a;
    printf("inserisci un numero");
    scanf("%d", &a); 
    if(a>5)
    {
        if(a==10)
        { 
            printf("uguale a 10");
        }
        else
        {
            printf("maggiore di 5"); 
        }
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