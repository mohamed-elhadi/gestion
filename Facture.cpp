#include "Facture.h"

Facture::Facture(string nom_client):nom_client(nom_client)
{

}

void Facture::setnom_client(string nom_client)
{
	this->nom_client = nom_client;
}

string Facture::getnom_client()
{
	return string(nom_client);
}
