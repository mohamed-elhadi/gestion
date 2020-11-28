#include"Pch.h"
class Personnel
{
protected:
	string nom, prenom, adresse, date_embauchement;
public:
	Personnel();
	Personnel(string nom, string prenom, string adresse, string date_embauchement);
	void setnom(string nom);
	string getnom();
	void setprenom(string prenom);
	string getprenom();
	void setadresse(string adresse);
	string getadresse();
	void setdate_embauchement(string date_embachement);
	string getdate_embauchement();
};

