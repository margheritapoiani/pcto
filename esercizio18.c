#include <stdio.h> 
int main ()
{  int a;
    printf ("inserisci l'anno di nascita");
    scanf ( "%d",&a);
    if(a> 1969)
    {
        printf("l'utente e nato %d anni dopo lo sbarco sulla luna " ,a-1969);

    }
    else if (a==1969)
    {
        printf("l'utente e'nato nel 1969");
    }
    else if (a<1969)
    {
        printf("l'utente e'nato %d anni prima lo sbarco sulla luna",1969-a);
    }
}