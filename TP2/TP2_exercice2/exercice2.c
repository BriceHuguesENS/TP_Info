#include <stdio.h>
#include <stdlib.h>
#include "exercice2.h"
#include <string.h>

void main()
{
	//Initialisation des variables
	Carnet CARNET_de_liaison;


	//initialise_carnet(&CARNET_de_liaison);
	
	char* data[] = {"Brice","01","Tanguy","02","Arnaud","03"};
	while(menu(&CARNET_de_liaison) != 6)
	{

	}

	//menu(&CARNET_de_liaison);

	//RemplirCarnet(&CARNET_de_liaison, data, 6);

	//affichage_carnet(&CARNET_de_liaison);

	//suprimer_eleve2(&CARNET_de_liaison, "Arnaud4");

	//affichage_carnet(&CARNET_de_liaison);

	//afficheNumEleve(CARNET_de_liaison,"Arnaud");

	suppCarnet(&CARNET_de_liaison);

}

int menu(Carnet* LeCarnet)
{
	int choix=0;
	printf("Bonjour, choisir: \n 1:ajouter un élève\n 2:supprimer un élève \n 3:afficher le carnet \n 4:supprimer le carnet\n 5:afficher le numéro d'un élève\n 6:sortir\n");
	scanf("%i", &choix);
	char* Nom = "";
	char* Numero = "";
	switch (choix)
	{
	case 1:
		printf("Nom:\n");
		scanf("%ms",&Nom);

		printf("Numero:\n");
		scanf("%ms",&Numero);

		Eleve MonEleve;
		MonEleve.nom=Nom;
		MonEleve.numero=Numero;
		nouvel_eleve(LeCarnet,MonEleve);
		break;

	case 2:
		printf("Nom:\n");
		scanf("%ms",&Nom);

		suprimer_eleve2(LeCarnet, Nom);
		break;

	case 3:
		affichage_carnet(LeCarnet);
		break;

	case 4:
		suppCarnet(LeCarnet);
		break;

	case 5:
		suppCarnet(LeCarnet);
		printf("Nom:\n");
		scanf("%ms",&Nom);
		afficheNumEleve(LeCarnet,Nom);
		break;	

	default:
	}
	return choix;
	}

void suppCarnet(Carnet* LeCarnet)
{
	free(LeCarnet->eleves);
	LeCarnet->eleves=NULL;
	LeCarnet->taille=0;

}
void RemplirCarnet(Carnet* carnet, char** donnees, int Taille)
{
	for(int i=0; i < Taille; i+=2)
	{
		Eleve MonEleve;
		MonEleve.nom=donnees[i];
		MonEleve.numero=donnees[i+1];
		nouvel_eleve(carnet, MonEleve);
	}
}

void initialise_carnet(Carnet* carnet)
{
	carnet->eleves = NULL;
	carnet->taille = 0;
}

void nouvel_eleve(Carnet* LeCarnet, Eleve MonEleve)
{
	LeCarnet->taille++;
	Eleve* NouveauxEleves=malloc(sizeof(Eleve)*(LeCarnet->taille));

	for(int i=0; i<LeCarnet->taille-1; i++)
	{
		NouveauxEleves[i]=LeCarnet->eleves[i];
	}
	free(LeCarnet->eleves);

	LeCarnet->eleves=NouveauxEleves;

	//Ajout au carnet
	LeCarnet->eleves[LeCarnet->taille-1]=MonEleve;
}

void affichage_carnet(Carnet* LeCarnet)
{
	for(int i = 0; i< LeCarnet->taille; i++)
	{
		printf("%s ",LeCarnet->eleves[i].nom);
		printf("%s \n",LeCarnet->eleves[i].numero);
	}
}

void suprimer_eleve(Carnet* LeCarnet, int indice)
{
	Eleve* NouveauxEleves=malloc(sizeof(Eleve)*(LeCarnet->taille-1));

	int indice2=0;
	for(int i=0; i<LeCarnet->taille; i++)
	{
		if(i != indice)
		{
			//printf(" copie de Carnet[%d] vers nouveau[%d] \n", i, indice2);
			NouveauxEleves[indice2]=LeCarnet->eleves[i];
			indice2++;
		}

	}
	free(LeCarnet->eleves);

	LeCarnet->eleves=NouveauxEleves;
	LeCarnet->taille--;
}

void suprimer_eleve2(Carnet* LeCarnet, char* Nom)
{
	

	int indice2=0;
	int indice = -1;
	for(int i=0; i<LeCarnet->taille; i++)
	{
		if(strcmp(LeCarnet->eleves[i].nom,Nom)==0)
		{
			indice=i;
		}
	}
	if(indice==-1){
		// rien à faire
	} else
	{
		Eleve* NouveauxEleves=malloc(sizeof(Eleve)*(LeCarnet->taille-1));
		for(int i=0; i<LeCarnet->taille; i++)
			{
				if(i != indice)
				{
					NouveauxEleves[indice2]=LeCarnet->eleves[i];
					indice2++;
				}

			}
		free(LeCarnet->eleves);
		LeCarnet->eleves=NouveauxEleves;
		LeCarnet->taille--;
	}

}

void afficheNumEleve(Carnet* LeCarnet, char* Nom)
{
	for(int i=0; i<LeCarnet->taille; i++)
	{
		if(strcmp(LeCarnet->eleves[i].nom,Nom)==0)
		{
			printf("indice de l'élève : %s \n",LeCarnet->eleves[i].numero);
		}
	}
}