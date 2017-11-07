#include "Carte_Identite.h"
//Variable compte le nombre de carte construite
int Carte_Identite::Nb_Carte=0;

//BUT : Constructeur de la classe initialise les donn�es membres
//ENTREE : Rien (donn�es membres)
//Sortie : donn�es membres initialis�es et incr�mente la variable qui compte le nombre de carte
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


// BUT : Afficher les donn�es de la carte
// ENTREE : Rien (donn�es membres)
// SORTIE : Texte contenant les donn�es de la carte
void Carte_Identite::affiche() const
{	
	std::cout << "Voici la carte d'identite de " << Nom << " " << Prenom << std::endl;
	std::cout << "ID numero : " << ID << std::endl;
	std::cout << "Ne le " << Date_Naissance << " a " << Ville << " " << Code_Postal << std::endl;
}

//But : Permettre � l'utilisateur de donner des valeurs aux donn�es membres de la carte
//ENTREE : Renseignements entr�s par l'utilisateur
//SORTIE : Carte avec donn�es membres choisis par l'utilisateur
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
//ENTREE : Champs � modifier et renseignements pour les champs modifi�s par l'utilisateur
//SORTIE : Carte avec champs choisis modifi�s
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

//BUT : Modifier le booleen de la carte afin de l'ignorer lors du traitement  et la remplacer par une nouvelle si n�cessaire
//ENTREE : rien / donn�es membres
//SORTIE : donn�es membres cr�ation modif�e.
void Carte_Identite::supprimer()
{
	Creation = false;
}

//Destructeur
//BUT: d�cr�mente la variable de comptage et d�truit la carte en m�moire.
Carte_Identite::~Carte_Identite()
{
	Nb_Carte -= 1;
}
