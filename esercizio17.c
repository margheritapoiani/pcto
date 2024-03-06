#include <stdio.h> 
int main ()
{ 
    int a;
    int b;
    int c;
    printf ("inserisci tre lunghezze\n");
    scanf ("%d %d %d", &a, &b, &c);
   if (b+c<=a || b+a<+c || c+a<=b)
   {
    printf ("non e'un triangolo");
   }
    else if(a==b && b!=c && c==a)
   
    {
    printf ("il triangolo e'isoscele\n");
    }
    else if (  a!=b && b!=c && a!=c)
    {
     printf("il triamgolo e'scaleno\n ");   
    }
    else if (a==b&&b==c)
    {
     printf("il triangolo e' equilatero\n");
    }
}