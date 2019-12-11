#include "banque.h"
#include<iostream>
#include<string>
using namespace std;

banque::banque(void)
{
}
banque::~banque(void)
{
	bq.clear();
}
void banque::ajouter()
{
	compte* q;
	string c;
	while(1)
	{
		cout<<"compte epargne [e] ou compte courant [c]: ";cin>>c;
		if(c=="e")
		{
			q=new compteEpargne();
			q->ajouter();
			bq.push_back(co);
		}
		else
		{
			if(c=="c")
			{
					compteCourant co;
					bq.push_back(co);
			}
			else
				cout<<"caractere invalide: "<<endl;
		}
	}
}

void banque::supprimer(long n)
{
	int x=0;
	for(int unsigned i=0;i<bq.size();i++)
		if(bq[i].getNum()==x)
			bq.erase(bq.begin()+i);
}

void banque::retirer(long c)
{

}
