#include <stdio.h>


//Déclaration des fonctions
float sum_two_numbers(float x, float y);

void main()
{
    //Déclaration des variables
    float x = 0, y = 0;

    printf("Entrez 2 nombres: \n");
    scanf("%f %f", &x, &y);
    printf("somme= %f \n",sum_two_numbers(x, y));
}

float sum_two_numbers(float x, float y)
{
    return x + y;
}