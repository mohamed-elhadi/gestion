#include "Responsable.h"

Responsable::Responsable(string nom, string prenom, string adresse, string date_embauchement): Personnel( nom,  prenom,  adresse,  date_embauchement)
{
	this->role = "encadreur";
}
