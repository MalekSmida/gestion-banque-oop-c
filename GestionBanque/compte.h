#pragma once
class compte
{
protected:
	long num;
	double sold;
public:
	 virtual void ajouter(double);
	 virtual bool retirer(double);
	 virtual void afficher();
	compte(long=0,double=0);
	virtual ~compte(void);
	virtual long getNum();
};

