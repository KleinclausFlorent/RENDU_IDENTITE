#include "Utilisation.h"

//BUT : Boucle de base du projet / gestion du tableau de carte par l'utilisateur
//ENTREE : Tableau de carte et commandes utilisateur
//SORTIE : TABLEAU Modifier ou on quitte le programme
int choix(Carte_Identite* TCID)
{
	char choix;
	std::cout << std::endl;
	std::cout << "Que voulez faire ?" << std::endl;
	std::cout << "a pour afficher les cartes" << std::endl;
	std::cout << "m pour modifier une carte" << std::endl;
	std::cout << "s pour en supprimer une" << std::endl;
	std::cout << "c pour en creer une" << std::endl;
	std::cout << "q pour quitter" << std::endl;
	std::cin >> choix;
	std::cout << std::endl;
	switch (choix) {
	case 'a':
		system("cls");
		affiche(TCID);
		break;
	case 'm':
		system("cls");
		modif(TCID);
		break;
	case 's':
		system("cls");
		suppr(TCID);
		break;
	case 'c':
		system("cls");
		creer(TCID);
		break;
	case 'q':
		return 1;
		break;
	default:
		break;
	}
	return 0;

}

//But : Modification d'un carte dans le tableau de carte
//ENTREE : Tableau de carte et commandes utilisateurs pour modifier la carte voulue
//SORTIE : Carte choisie modifié dans le tableau
void modif(Carte_Identite* TCID)
{
	int choix;
	int modifiable = 0;
	std::cout << "MODIFICATION DE CARTE" << std::endl;
	for (int i = 0; i < TAILLE; i++)
	{
		
		if (TCID[i].getCreation())
		{
			std::cout << "Carte numero : " << i << std::endl;
			TCID[i].affiche();
			std::cout << std::endl;
			modifiable += 1;
		}		
	}
	if (modifiable > 0)
	{
		std::cout << std::endl;
		std::cout << "Entrez le numero de la carte que vous voulez modifier" << std::endl;
		std::cin >> choix;
		TCID[choix].modifier();
	}
	else {
		std::cout << "Aucune carte a modifier." << std::endl;
	}


}

//BUT : Retirer une carte du tableau ( elle ne sera plus consultable / modifiable et elle sera écrasée à la création d'une nouvelle carte)
//ENTREE : TABLEAU DE CARTE et commandes utilisateur pour choisir la carte à supprimer
//SORTIE : Tableau modifié avec carte choisie ignorée 
void suppr(Carte_Identite* TCID)
{
	int choix;
	int modifiable = 0;
	std::cout << "SUPPRESSION DE CARTE" << std::endl;
	for (int i = 0; i < TAILLE; i++)
	{

		if (TCID[i].getCreation())
		{
			std::cout << "Carte numero : " << i << std::endl;
			TCID[i].affiche();
			std::cout << std::endl;
			modifiable += 1;
		}
	}
	if (modifiable > 0)
	{
		std::cout << std::endl;
		std::cout << "Entrez le numero de la carte que vous voulez supprimer" << std::endl;
		std::cin >> choix;
		TCID[choix].supprimer();
	}
	else {
		std::cout << "Aucune carte a supprimer." << std::endl;
	}
}

//BUT : Donner les valeurs voulues à une carte du tableau ( carte pas encore remplie ou carte supprimée précédemment )
//ENTREE : TABLEAU DE CARTE
//SORTIE : TABleau de carte avec une carte remplie
void creer(Carte_Identite* TCID)
{
	int libre = 0;
	std::cout << "CREATION DE CARTE" << std::endl;
	while (TCID[libre].getCreation())
	{
		libre += 1;
	}
	if (libre == TAILLE)
	{
		std::cout << "Plus de place libre. Veuillez supprimer une carte." << std::endl;
	}
	else {
		TCID[libre].creer();
		std::cout << "Creation terminee." << std::endl;
	}
}

//BUT : Afficher les cartes déjà remplies par l'utilisateur
//ENTREE : Tableau de carte
//SORTIE : Texte avec données de chaque carte affichable
void affiche(Carte_Identite * TCID)
{
	int affichable = 0;
	std::cout << "AFFICHAGE DES CARTES" << std::endl;
	for (int i = 0; i < TAILLE; i++)
	{
		if (TCID[i].getCreation())
		{
			TCID[i].affiche();
			std::cout << std::endl;
			affichable += 1;
		}
	}
	if (affichable == 0)
	{
		std::cout << "Aucune carte a supprimer." << std::endl;
	}
}
