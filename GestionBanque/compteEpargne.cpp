#include "compteEpargne.h"
#include<iostream>
using namespace std;

compteEpargne::compteEpargne()
{
	long x;double y;
	cout<<"donnez le num compte: ";cin>>x;
	while(1)
	{
		cout<<"donnez le solde: ";cin>>y;
		if(y>=5)
			break;
		else
			cout<<"solde invalide "<<endl;
	}
	compte::compte(x,y);
}
void compteEpargne::ajouter();
{
	long x;double y;
	cout<<"donnez le num compte: ";cin>>x;
	while(1)
	{
		cout<<"donnez le solde: ";cin>>y;
		if(y>=5)
			break;
		else
			cout<<"solde invalide "<<endl;
	}
	compte::compte(x,y);
}

compteEpargne::~compteEpargne(void)
{
}
void compteEpargne::afficher()
{
	compte::afficher();
}
bool compteEpargne::retirer()
{
	double r;
	cout<<"donnez le sold a retire: ";cin>>r;
	if(compte::retirer(r))
		sold-=r;
	else
		cout<<"solde insuffisant !"<<endl;
}
double compteEpargne::interetAnnuel()
{
	return (tia*sold)/100;
}
long compteEpargne::getNum()
{
	return compte::getNum();
}
