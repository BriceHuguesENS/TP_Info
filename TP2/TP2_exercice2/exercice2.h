#ifndef Exercice_H
#define Exercice_H

typedef struct Eleve
{
	char* nom;
	char* numero;
} Eleve;

typedef struct Carnet
{
	Eleve* eleves;
	int taille;
	
	
} Carnet;

void initialise_carnet(Carnet* carnet);

void nouvel_eleve(Carnet* LeCarnet, char* LeNom, char* LeNumero);

//char* affichage_test(Eleve* LeEleve);
//void affichage_carnet(Carnet* LeCarnet);
	
#endif

