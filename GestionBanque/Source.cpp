#include<iostream>
#include<vector>
#include"compte.h"
#include "banque.h"
#include "compteCourant.h"
#include "compteEpargne.h"
using namespace std;
void main()
{
	cout<<"\t\t\t _____________________________________"<<endl;
	cout<<"\t\t\t|                                     |"<<endl;
	cout<<"\t\t\t|          Gestion de Banque          |"<<endl;
	cout<<"\t\t\t|_____________________________________|"<<endl;

	int x;
	banque b;

	while(1)
	{
		cout<<"\t\t\t ----------------MENU-----------------"<<endl;
		cout<<"\t\t\t| 1 > Ajouter un compte               |"<<endl;
		cout<<"\t\t\t| 2 > Supprimer un compte             |"<<endl;
		cout<<"\t\t\t| 3 > Retirer d'un compte             |"<<endl;
		cout<<"\t\t\t| 4 > Afficher un compte selon num    |"<<endl;
		cout<<"\t\t\t| 5 > Afficher tous les comptes       |"<<endl;
		cout<<"\t\t\t -------------------------------------"<<endl;
		cout<<"\n\t\t\t votre choix: ";cin>>x;

		switch(x)
		{
		case 1:
			{
				b.ajouter();
			}break;
		case 2:
			{
				long y;
				cout<<"donnez le num de compte: ";cin>>y;
				b.supprimer(y);
			}break;
		case 3:
			{
				
			}break;
		default: cout<<"\n\t\t\tchoix invalide, try again! "<<endl<<endl<<endl; break;
		}
	}

	system("pause");
}
