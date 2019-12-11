#pragma once
#include "compte.h"
#include "compteCourant.h"
#include "compteEpargne.h"
#include<vector>
using namespace std;
class banque
{
	vector<compte> bq;
public:
	void ajouter();
	void supprimer(long);
	void afficher();
	void retirer();
	banque(void);
	~banque();
};

