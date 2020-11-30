#include "Pch.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Composants {

	ref class Client
	{
	private:
		String^ nom;
		String^ prenom;
		String^ adresse_livraison;
		String^ adresse_facturation;
		String^ date_naissance;
		String^ date_premier_achat;
	public:
		Client();
		Client(String^ nom, String^ prenom, String^ adresse_livraison, String^ adresse_facturation, String^ date_naissance, String^ date_premier_achat);
		void setnom(String^ nom);
		String^ getnom();
		void setprenom(String^ prenom);
		String^ getprenom();
		void setadresse_liv(String^ adresse_livraison);
		String^ getadresse_liv();
		void setadresse_fact(String^ adresse_facturation);
		String^ getadresse_fact();
		void setdate_naissace(String^ date_naissance);
		String^ getdate_naissance();
		void setdate_premier(String^ date_premier_achat);
		String^ getdate_premier();


	};

}