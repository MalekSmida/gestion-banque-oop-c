#pragma once
#include "compte.h"
class compteEpargne :
	public compte
{
	float tia;
public:
	void ajouter();
	void afficher();
	bool retirer();
	double interetAnnuel();
	compteEpargne();
	~compteEpargne(void);
	long getNum();
};

