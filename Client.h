#include "Pch.h"
class Client
{
private:
	string nom, prenom, adresse_livraison, adresse_facturation,date_naissance,date_premier_achat;
public:
	Client();
	Client(string nom, string prenom, string adresse_livraison, string adresse_facturation, string date_naissance, string date_premier_achat);
	void setnom(string nom);
	string getnom();
	void setprenom(string prenom);
	string getprenom();
	void setadresse_liv(string adresse_livraison);
	string getadresse_liv();
	void setadresse_fact(string adresse_facturation);
	string getadresse_fact();
	void setdate_naissace(string date_naissance);
	string getdate_naissance();
	void setdate_premier(string date_premier_achat);
	string getdate_premier();


};

