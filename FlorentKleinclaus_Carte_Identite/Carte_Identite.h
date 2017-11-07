#pragma once
#include <iostream>
#include <stdlib.h>
#include "string"
class Carte_Identite
{
	//données membres
	int ID;
	int Code_Postal;
	bool Creation;
	std::string Nom;
	std::string Prenom;
	std::string Date_Naissance;
	std::string Ville;
	static int Nb_Carte;
public:
	Carte_Identite();
	int getID() const;
	int getCodePostal() const;
	std::string getNom();
	std::string getPrenom() const;
	std::string getDate() const;
	std::string getVille() const;
	bool getCreation() const;

	void setID(int mID);
	void setCodePostal(int mCode);
	void setNom(std::string mNom);
	void setPrenom(std::string mPrenom);
	void setDate(std::string mDate);
	void setVille(std::string mVille);

	void affiche() const;
	void creer();
	void modifier();
	void supprimer();


	~Carte_Identite();
};

