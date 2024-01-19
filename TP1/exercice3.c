#include <stdio.h>
//Déclaration des variables
int x = 10, y = 20;

//Déclaration des fonctions
int sum_two_numbers(int x, int y);

void main()
{
    printf("somme= %d \n",sum_two_numbers(x, y));
}

int sum_two_numbers(int x, int y)
{
    return x + y;
}