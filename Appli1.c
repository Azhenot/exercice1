#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bonjour, voici mon fichier C\n");
    int x = 0;
    while(x < 1 || x > 4)
    {
        printf("Voulez-vous fair eune somme(1), une soustraction(2), une multiplication(3), une division(4)?");
        scanf("%d",&x);
    }
    if ( x == 1)
    {
        printf("Nous allons faire une somme\n");
        printf("Premier nombre: ");
        int a,b;
        scanf("%d",&a);
        printf("Deuxième nombre: ");
        scanf("%d",&b);
        int c = a + b;
        printf("La somme est: %d",c);
    }
    else if (x == 2)
    {
        printf("Nous allons faire une soustraction\n");
        printf("Premier nombre: ");
        int a,b;
        scanf("%d",&a);
        printf("Deuxième nombre: ");
        scanf("%d",&b);
        int c = a - b;
        printf("La différence est: %d",c);
    }
	else if ( x == 3)
    {
        printf("Nous allons faire une multiplication\n");
        printf("Premier nombre: ");
        int a,b;
        scanf("%d",&a);
        printf("Deuxième nombre: ");
        scanf("%d",&b);
        int c = a * b;
        printf("La multiplication est: %d",c);
    }
    else if (x == 4)
    {
        printf("Nous allons faire une division\n");
        printf("Premier nombre: ");
        int a,b;
        scanf("%d",&a);
        printf("Deuxième nombre: ");
        scanf("%d",&b);
        int c = a / b;
        printf("La division est: %d",c);
    }



    return 0;
}
