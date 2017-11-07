#include "Carte_Identite.h"
//Variable compte le nombre de carte construite
int Carte_Identite::Nb_Carte=0;

//BUT : Constructeur de la classe initialise les données membres
//ENTREE : Rien (données membres)
//Sortie : données membres initialisées et incrémente la variable qui compte le nombre de carte
Carte_Identite::Carte_Identite()
{
	ID = Nb_Carte;
	Code_Postal = 0;
	Nom = "";
	Prenom = "";
	Date_Naissance = "";
	Ville = "";
	Creation = false;
	Nb_Carte += 1;
}

//Getters
int Carte_Identite::getID() const
{
	return ID;
}

int Carte_Identite::getCodePostal() const
{
	return Code_Postal;
}

std::string Carte_Identite::getNom()
{
	return Nom;
}

std::string Carte_Identite::getPrenom() const
{
	return Prenom;
}

std::string Carte_Identite::getDate() const
{
	return Date_Naissance;
}

std::string Carte_Identite::getVille() const
{
	return Ville;
}

bool Carte_Identite::getCreation() const
{
	return Creation;
}

//Setters
void Carte_Identite::setID(int mID)
{
	ID = mID;
}

void Carte_Identite::setCodePostal(int mCode)
{
	Code_Postal = mCode;
}

void Carte_Identite::setNom(std::string mNom)
{
	Nom = mNom;
}

void Carte_Identite::setPrenom(std::string mPrenom)
{
	Prenom = mPrenom;
}

void Carte_Identite::setDate(std::string mDate)
{
	Date_Naissance = mDate;
}

void Carte_Identite::setVille(std::string mVille)
{
	Ville = mVille;
}


// BUT : Afficher les données de la carte
// ENTREE : Rien (données membres)
// SORTIE : Texte contenant les données de la carte
void Carte_Identite::affiche() const
{	
	std::cout << "Voici la carte d'identite de " << Nom << " " << Prenom << std::endl;
	std::cout << "ID numero : " << ID << std::endl;
	std::cout << "Ne le " << Date_Naissance << " a " << Ville << " " << Code_Postal << std::endl;
}

//But : Permettre à l'utilisateur de donner des valeurs aux données membres de la carte
//ENTREE : Renseignements entrés par l'utilisateur
//SORTIE : Carte avec données membres choisis par l'utilisateur
void Carte_Identite::creer()
{
	std::cout << "Veuillez entrez le nom ." << std::endl;
	std::cin >> Nom;

	std::cout << "Veuillez entrez le prenom ." << std::endl;
	std::cin >> Prenom;

	std::cout << "Veuillez entrez la date de naissance ." << std::endl;
	std::cin >> Date_Naissance;

	std::cout << "Veuillez entrez la ville ." << std::endl;
	std::cin >> Ville;

	std::cout << "Veuillez entrez le code postal ." << std::endl;
	std::cin >> Code_Postal;


	Creation = true;
}

//BUT : Modifier certaines ou toutes les valeurs d'une carte
//ENTREE : Champs à modifier et renseignements pour les champs modifiés par l'utilisateur
//SORTIE : Carte avec champs choisis modifiés
void Carte_Identite::modifier()
{
	char choix;

	std::cout << "Voulez-vous modifier le nom ? (y or n)" << std::endl;
	std::cin >> choix;
	if (choix == 'y')
	{
		std::cout << "Veuillez entrez le nom ." << std::endl;
		std::cin >> Nom;
	}

	std::cout << "Voulez-vous modifier le prenom ? (y or n)" << std::endl;
	std::cin >> choix;
	if (choix == 'y')
	{
		std::cout << "Veuillez entrez le prenom ." << std::endl;
		std::cin >> Prenom;
	}

	std::cout << "Voulez-vous modifier la date de naissance ? (y or n)" << std::endl;
	std::cin >> choix;
	if (choix == 'y')
	{
		std::cout << "Veuillez entrez la date de naissance." << std::endl;
		std::cin >> Date_Naissance;
	}

	std::cout << "Voulez-vous modifier la Ville ? (y or n)" << std::endl;
	std::cin >> choix;
	if (choix == 'y')
	{
		std::cout << "Veuillez entrez la Ville ." << std::endl;
		std::cin >> Ville;
	}

	std::cout << "Voulez-vous modifier le code postal ? (y or n)" << std::endl;
	std::cin >> choix;
	if (choix == 'y')
	{
		std::cout << "Veuillez entrez le code postal ." << std::endl;
		std::cin >> Code_Postal;
	}
}

//BUT : Modifier le booleen de la carte afin de l'ignorer lors du traitement  et la remplacer par une nouvelle si nécessaire
//ENTREE : rien / données membres
//SORTIE : données membres création modifée.
void Carte_Identite::supprimer()
{
	Creation = false;
}

//Destructeur
//BUT: décrémente la variable de comptage et détruit la carte en mémoire.
Carte_Identite::~Carte_Identite()
{
	Nb_Carte -= 1;
}
