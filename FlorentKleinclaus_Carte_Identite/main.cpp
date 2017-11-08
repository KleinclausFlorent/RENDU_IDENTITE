#include "Carte_Identite.h"
#include "Utilisation.h"


int main() {
	//tableau de cartes d'identité
	Carte_Identite TCID[TAILLE];
	//Variable pour controler les choix de l'utilisateur
	int deroul = 0;
	//Boucle qui permet de rester dans le programme
	std::cout << "Bienvenue dans le programme de gestion de carte d'identite de Florent Kleinclaus" << std::endl;
	while (deroul == 0)
	{
		choix(TCID,deroul);
	}

	system("pause");

	return 0;
}