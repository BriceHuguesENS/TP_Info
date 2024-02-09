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

void RemplirCarnet(Carnet* carnet, char** donnees, int Taille);

void nouvel_eleve(Carnet* LeCarnet, Eleve MonEleve);

void affichage_carnet(Carnet* LeCarnet);

void suprimer_eleve(Carnet* LeCarnet, int indice);
void suprimer_eleve2(Carnet* LeCarnet, char* Nom);

void afficheNumEleve(Carnet* LeCarnet, char* Nom);
void suppCarnet(Carnet* LeCarnet);
int menu(Carnet* LeCarnet);
	
#endif

