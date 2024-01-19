#include <stdio.h>


//Déclaration des fonctions
int factorielle_n(int x);

void main()
{
    //Déclaration des variables
    int x = 0;
    int n = 0;

    printf("Entrez un nombre: \n");
    scanf("%d", &x);
    printf("Résultat= %d \n",factorielle_n(x));
}

int factorielle_n(int x)
{
    int result = x;
    if (result == 0)
    {
        result = 1;
    }
    
    for(int i=1; i<x; i++)
    {
        result *= i;
    }
    return result;
}