#include "compteCourant.h"
#include<iostream>
using namespace std;
compteCourant::compteCourant()
{
	long x;double y;
	cout<<"donnez le num compte: ";cin>>x;
	while(1)
	{
		cout<<"donnez le solde: ";cin>>y;
		if(y>=(-500))
			break;
		else
			cout<<"solde invalide "<<endl;
	}
	compte::compte(x,y);
}
compteCourant::~compteCourant(void)
{
}
void compteCourant::afficher()
{
	compte::afficher();
}
bool compteCourant::retirer()
{
	double r;
	cout<<"donnez le sold a retire: ";cin>>r;
	if(compte::retirer(r))
		sold-=r;
	else
		cout<<"solde insuffisant !"<<endl;
}
long compteCourant::getNum()
{
	return compte::getNum();
}

