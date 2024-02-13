#include <stdio.h>
#include <stdlib.h>

float* tableau;   //allocation de la mémoire nécessaire pour stocker le tableau
//Déclaration des fonctions
float creation_tableau(float n1, float n2, float n3);
float moyenne_tableau(float* tab,int taille_tab);
float absolute(float nb);

void main()
{
    //Déclaration des variables
    float n1,n2,n3 = 0;
    int taille=3;
    tableau = malloc(sizeof(float)* taille);

    printf("Entrer 3 nombres pour remplir le tableau: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    creation_tableau(n1,n2,n3);
    printf("Affichage du tableau:\n");
    for(int i=0;i<3;i++)
    {
        if(absolute(tableau[i] >10))
        {
            printf("%f \n", tableau[i]);
        }
        
    }

    printf("Affichage de la moyenne: %f\n", moyenne_tableau(tableau,taille));

    
    free(tableau);
}

float creation_tableau(float n1, float n2, float n3)
{
    
    tableau[0]=n1;
    tableau[1]=n2;
    tableau[2]=n3;
    return 1;
}

float moyenne_tableau(float* tab,int taille_tab)
{
    float moy=0;
    for(int i=0; i<taille_tab;i++)
    {
        moy+=tab[i];
    }
    return moy/taille_tab;
}

float absolute(float nb)
{
    return abs(nb);
}