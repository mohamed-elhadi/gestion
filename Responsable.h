#include "Pch.h"
#include "Personnel.h"
class Responsable: public Personnel
{
private:
	string role;
public:
	Responsable(string nom, string prenom, string adresse, string date_embauchement);

};

