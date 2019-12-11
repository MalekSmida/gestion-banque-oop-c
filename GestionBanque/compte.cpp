#include "compte.h"
#include<iostream>
using namespace std;

compte::compte(long n,double s):num(n),sold(s){}

compte::~compte(void)
{
}
void compte::ajouter(double x)
{
	sold+=x;
}
bool compte::retirer(double x)
{
	if(x<sold)
	{
		sold-=x;
		return true;
	}
	else
		return false;
} 
void compte::afficher()
{
	cout<<"*********** affichage de compte **********"<<endl;
	cout<<"le numero de compte est: "<<num<<endl;
	cout<<"le solde est: "<<sold<<endl;
	cout<<"******************************************"<<endl;
}
long compte::getNum()
{
	return num;
}
