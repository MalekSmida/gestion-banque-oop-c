#pragma once
#include "compte.h"
class compteCourant :
	public compte
{
public:
	void ajouter();
	void afficher();
	bool retirer();
	compteCourant();
	~compteCourant(void);
	long getNum();
};

