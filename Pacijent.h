#pragma once
#include <iostream>
#include <string>
using namespace std;
enum Spol {
	musko=0,  zensko, neodredjeno
};
class Pacijent
{private:
	char id[50];
	char ime[50];
	Spol spol;
	string datumRodjenja;
	bool zdravstveno;
	bool alergije;

public:
	Pacijent();
	void setId();
	void setIme();
	void setSpol();
	void setDatum();
	void unesiZdravstveno();
	void unesiAlergije();
	char getId();
	char getIme();
	Spol getSpol();
	string getDatumRodjenja();
	bool getZdravstveno();
	bool getAlergije();

	friend istream& operator>>(istream& stream, Pacijent& pacijent);
	friend ostream& operator<<(ostream& stream, Pacijent& pacijent);



	~Pacijent();
};

