#include <stdio.h>


//Déclaration des fonctions
double my_sin(float x, int n);
int factorielle_n(int x);
float puissance_n(double x, int n);

void main()
{
    //Déclaration des variables
    float x = 0;
    int n = 0;

    printf("Entrez x et n: \n");
    scanf("%f %d", &x, &n);
    printf("DL à l'ordre %d de sin(x= %f)= %f \n", n, x, my_sin(x, n));
    printf("sin(x= %f)= %lf \n", x, sin(x));
}

double my_sin(float x, int n)
{
    double result = 0;
    for(int i=0; i<=n; i++)
    {
        result += puissance_n(-1, i) * puissance_n(x, 2 * i+1) / factorielle_n(2 * i+1);

        printf("terme %d: %f\n", i, puissance_n(-1, i) * puissance_n(x, 2 * i) / factorielle_n(2 * i));
    }
    return result;
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

float puissance_n(double x, int n)
{
    int result = 1;
    for(int i=1; i<=n; i++)
    {
        result *= x;
    }
    return result;
}