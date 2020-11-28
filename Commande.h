#include "Pch.h"
class Commande
{
private:
	string date_livraison, date_emission, date_paiment, date_solde, moyen_paiment,nom_article,tab_article_n[50];
	float montant_HT, montant_TVA, montant_TTC, remise;
	int tab_article_qt[50], n_incre,quantite;
public:
	Commande();
	Commande(string date_livraison, string date_emission, string date_paiment, string date_solde, string moyen_paiment,string nom_article, float montant_HT, float TVA, float montant_TTC, float remise,int quantite);
	string getdate_liv();
	void setdate_liv(string date_livraison);
	string getdate_emission();
	void setdate_emission(string date_emission);
	string getdate_paiment();
	void setdate_paiment(string date_paiment);
	string getdate_solde();
	void setdate_solde(string date_solde);
	string getmoyen_paiment();
	void setmoyen_paiment(string moyen_paiment);
	string getnom_article();
	void setnom_article(string nom_article);
	float getmontant_HT();
	void setmontant_HT();
	float getmontant_TVA();
	void setmontant_TVA();
	float getmontant_TTC();
	void setmontant_TTC();
	float getremise();
	void setremise(float remise);


	
};


