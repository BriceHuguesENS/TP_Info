#include <stdio.h>


//Déclaration des fonctions
float puissance_n(double x, int n);

void main()
{
    //Déclaration des variables
    double x = 0;
    int n = 0;

    printf("Entrez un nombre et sa puissance: \n");
    scanf("%lf %d", &x, &n);
    printf("Résultat= %lf \n",puissance_n(x, n));
}

float puissance_n(double x, int n)
{
    int result = 1;
    for(int i=0; i<=n-1; i++)
    {
        result *= x;
    }
    return result;
}