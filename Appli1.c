#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bonjour, voici mon fichier C\n");
    printf("Nous allons faire une somme\n");
    printf("Premier nombre: ");
    int a,b;
    scanf("%d",&a);
    printf("Deuxième nombre: ");
    scanf("%d",&b);
    int c = a + b;
    printf("La somme est: %d",c);


    return 0;
}
