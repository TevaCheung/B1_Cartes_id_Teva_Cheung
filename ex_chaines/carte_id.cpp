#include "carte_id.h"
#include <iostream>
#include <string>

carte_id::carte_id()
{
	//ajouter_carte(this->nb_cartes);
	id=-1;
	prenom="Prenom";
	nom="Nom";
	adresse="Adresse";
	cp = 99999;
	ville="Ville";
}

carte_id::carte_id(int id, char * prenom, char * nom, char * adresse, int cp, char * ville)
{
	//retirer_carte(this->nb_cartes);
	set_id(id);
	set_prenom(prenom);
	set_nom(nom);
	set_adresse(adresse);
	set_cp(cp);
	set_ville(ville);
}

carte_id::~carte_id()
{

}

void carte_id::ajouter_carte(int nb_cartes)
{
	nb_cartes = nb_cartes + 1;
}

void carte_id::retirer_carte(int nb_cartes)
{
	if (nb_cartes > 0) {
		nb_cartes = nb_cartes - 1;
	}
}

int carte_id::get_id() const
{
	return this->id;
}

char* carte_id::get_prenom() const
{
	return this->prenom;
}

char* carte_id::get_nom() const
{
	return this->nom;
}

char* carte_id::get_adresse() const
{
	return this->adresse;
}

int carte_id::get_cp() const
{
	return this->cp;
}

char* carte_id::get_ville() const
{
	return this->ville;
}

void carte_id::set_id(int id)
{
	//do {
		this->id = id;
	//}while( id < 0);
}

void carte_id::set_prenom(char * prenom)
{
	this->prenom = prenom;
}

void carte_id::set_nom(char * nom)
{
	this->nom = nom;
}

void carte_id::set_adresse(char * adresse)
{
	this->adresse = adresse;
}

void carte_id::set_cp(int cp)
{
	this->cp = cp;
}

void carte_id::set_ville(char * ville)
{
	this->ville = ville;
}

void carte_id::afficher()
{
	std::cout << "ID : " << get_id() << std::endl;
	std::cout << "Prenom : " << get_prenom() << std::endl;
	std::cout << "Nom : " << get_nom() << std::endl;
	std::cout << "Adresse : " << get_adresse() << std::endl;
	std::cout << "Code Postal : " << get_cp() << std::endl;
	std::cout << "Ville : " << get_ville() << std::endl;
	std::cout << std::endl;
}

void carte_id::ajouter(carte_id * carte)
{
	carte = new carte_id();

}

void carte_id::modifier()
{


}

