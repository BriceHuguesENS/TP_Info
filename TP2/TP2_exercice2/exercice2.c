#include <stdio.h>
#include <stdlib.h>
#include "exercice3.h"

void main()
{
	//Initialisation des variables
	Carnet* CARNET_de_liaison = malloc(sizeof(Carnet));	//crée

	char* SonNom=NULL;
	char* SonTel=NULL;

	char* SonNom2=NULL;
	char* SonTel2=NULL;


	initialise_carnet(CARNET_de_liaison);

	//Demande des informations
	printf("Entrer le nom de l'élève: ");
	scanf("%ms",&SonNom);

	printf("Entrer le tel de l'élève: ");
	scanf("%ms",&SonTel);

	//Demande des informations
	printf("Entrer le nom de l'élève: ");
	scanf("%ms",&SonNom2);

	printf("Entrer le tel de l'élève: ");
	scanf("%ms",&SonTel2);
	

	nouvel_eleve(CARNET_de_liaison, SonNom,SonTel);		//ajoute un 1er élève
	nouvel_eleve(CARNET_de_liaison, SonNom2,SonTel2); //ajoute un 2nd élève

	//Affichage
	printf("Affichage d'un Nom : %s \n", CARNET_de_liaison->eleves[1].nom);		//affiche l'élève 2


	free(CARNET_de_liaison->eleves);
	free(CARNET_de_liaison);
	
}

void initialise_carnet(Carnet* carnet)
{
	carnet -> eleves = NULL;
	carnet -> taille = 0;
}

void nouvel_eleve(Carnet* LeCarnet, char* LeNom, char* LeNumero)
{
	Eleve* MonEleve=malloc(sizeof(Eleve));
	MonEleve->nom=LeNom;
	MonEleve->numero=LeNumero;

	//Ajout au carnet
	LeCarnet->eleves=MonEleve;


}