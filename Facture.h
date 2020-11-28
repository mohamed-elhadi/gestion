#include "Pch.h"
class Facture
{
private:
	string nom_societe, adresse_societe, nom_client;
	int num_service_client;
public:
	Facture(string nom_client);
	void setnom_client(string nom_client);
	string getnom_client();
};

