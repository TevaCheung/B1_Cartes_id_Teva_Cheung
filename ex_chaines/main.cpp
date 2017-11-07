#include <iostream>
#include <string>
#include "carte_id.h"

#define TAILLE 5
#define TXT 100

using namespace std;

int main(){
	
	int i = 0, choix = 0, vide = 0;
	char termine = 'n';
	carte_id tab[TAILLE];
	char texte[TXT];
	int entier;

	cout << "--- Programme cartes d'indentite ---" << endl;

	do{
		do{
			cout << "Que voulez-vous faire ?" << endl;
			cout << "1 : Voir toutes les cartes" << endl;
			cout << "2 : Ajouter une carte" << endl;
			cout << "3 : Modifier une carte" << endl;
			cout << "4 : Supprimer une carte" << endl;
			cin >> choix;
		} while (choix > 4 || choix < 1);

		if (choix == 1) {
			vide = 0;
			for (i = 0; i < TAILLE; i++) {
				if (tab[i].get_id() > -1) {
					tab[i].afficher();
				}
				else {
					vide++;
				}
			}
			if (vide == TAILLE) {
				cout << "Aucune carte" << endl;
			}
		}else if(choix == 2){
			for (i = 0; i < TAILLE; i++) {
				if (tab[i].get_id() == -1) {
					break;
				}
			}

			if (i == TAILLE && tab[i].get_id() < 0) {
				cout << "Maximum de cartes atteint !";
				cout << endl;
			}
			else {
				cout << "Entrez un numero d'identite : ";
				cin >> entier;
				tab[i].set_id(entier);
				cout << endl;

				cout << "Entrez un prenom : ";
				cin >> texte;
				tab[i].set_prenom(texte);
				cout << endl;

				cout << "Entrez un nom : ";
				cin >> texte;
				tab[i].set_nom(texte);
				cout << endl;

				cout << "Entrez l'adresse: ";
				cin >> texte;
				tab[i].set_adresse(texte);
				cout << endl;

				cout << "Entrez le code postal: ";
				cin >> entier;
				tab[i].set_cp(entier);
				cout << endl;

				cout << "Entrez la ville :";
				cin >> texte;
				tab[i].set_ville(texte);
				cout << endl;

				cout << "Carte ajoutee" << endl;
				tab->ajouter_carte(tab->nb_cartes);
				
			}
		}else if (choix == 3) {
			vide = 0;
			for (i = 0; i < TAILLE; i++) {
				if (tab[i].get_id() < 0) {
					vide++;
				}
			}

			cout << endl;

			if (vide != TAILLE) {
				do {
					for (i = 0; i < TAILLE; i++) {
						if (tab[i].get_id() > -1) {
							cout << "Carte : " << i + 1 << " --- " << tab[i].get_id() << " " << tab[i].get_prenom() << " " << tab[i].get_nom() << endl;
						}
					}
					cout << "Modifier quelle carte ?";
					cin >> i;
				} while (tab[i-1].get_id() < 0 || i<1 || i>TAILLE);

				cout << "Entrez un numero d'identite : ";
				cin >> entier;
				tab[i-1].set_id(entier);
				cout << endl;

				cout << "Entrez un prenom : ";
				cin >> texte;
				tab[i-1].set_prenom(texte);
				cout << endl;

				cout << "Entrez un nom : ";
				cin >> texte;
				tab[i-1].set_nom(texte);
				cout << endl;

				cout << "Entrez l'adresse: ";
				cin >> texte;
				tab[i-1].set_adresse(texte);
				cout << endl;

				cout << "Entrez le code postal: ";
				cin >> entier;
				tab[i-1].set_cp(entier);
				cout << endl;

				cout << "Entrez la ville :";
				cin >> texte;
				tab[i-1].set_ville(texte);
				cout << endl;

				cout << "Carte modifiee" << endl;
			} else {
				cout << "Aucune carte a modifier !";
			}
		}else if (choix == 4) {
			vide = 0;
			for (i = 0; i < TAILLE; i++) {
				if (tab[i].get_id() != -1) {
					cout << "Carte : " << i + 1 << " --- " << tab[i].get_id() << " " << tab[i].get_prenom() << " " << tab[i].get_nom() << endl;
				}
				else {
					vide++;
				}

			if (vide == TAILLE) {
				cout << "Pas de cartes a supprimer";
			}
			else {
				do {
					cout << "Supprimer quelle carte ?";
					cin >> i;
				} while (tab[i-1].get_id() < 0);

				tab[i-1].set_id(-1);
				cout << "carte supprimee" << endl;
				tab->retirer_carte(tab->nb_cartes);
			}
		}

		cout << "Termine ? y/n : ";
		cin >> termine;
		cout << endl;

	} while (termine != 'y');

	system("pause");
	return 0;
}