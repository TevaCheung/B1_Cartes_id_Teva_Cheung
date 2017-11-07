#pragma once

class carte_id
{

private:
	int id;
	char* prenom;
	char* nom;
	char* adresse;
	int cp;
	char* ville;

public:
	carte_id();
	carte_id(int id,char * prenom,char * nom,char * adresse,int cp,char * ville);
	~carte_id();
	static int nb_cartes;
	static void ajouter_carte(int nb_cartes);
	static void retirer_carte(int nb_cartes);
	
	int get_id()const;
	char* get_prenom()const;
	char* get_nom()const;
	char* get_adresse()const;
	int get_cp()const;
	char* get_ville()const;

	void set_id(int id);
	void set_prenom(char* prenom);
	void set_nom(char* nom);
	void set_adresse(char* adresse);
	void set_cp(int cp);
	void set_ville(char* ville);

	void afficher();
	void ajouter(carte_id* carte);

	void modifier();
};

