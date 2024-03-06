#include <stdio.h> 
int main ()
{  
    int a,i;
    int c=0;
    printf ("inserisci un numero");
    scanf ( "%d",&a);
    i=2;
    while (i<a)
    {
        if (a%i==0)
        {
            c=c+1;
            
            
        }
        i=i+1;
    
    }
    if(c==0)
    { 
        printf ("il numero e'primo");
    }
    else 
    {
        printf("il numero non e'primo");
    }
    
      
    
}


































 