#include "Pacijent.h"
#include <iostream>
using namespace std;

Pacijent::Pacijent()
{
	this->id, "0000000000000";
	this->ime, "Novi";
	this->datumRodjenja = "1.1.2001";
	this->spol = Spol::musko;
	this->zdravstveno = true;
	this->alergije = false;
}

void Pacijent::setId()
{
	cout << "Unesite id pacijenta: ";
	cin.getline( this->id,50);
}


void Pacijent::setIme()
{
	cout << "Unesite ime pacijenta: \n";
	cin.getline(this->ime, 50);
}

void Pacijent::setSpol()
{
	cout << "Unesite spol pacijenta: ";
	int broj;
	cin >> broj;
	if (broj == 0)
		this->spol = Spol::musko;
	if (broj == 1)
		this->spol = Spol::zensko;
	if (broj == 2)
		this->spol = Spol::neodredjeno;
}

void Pacijent::setDatum()
{
	cout << "Unesite datum rodjenja pacijenta: ";
	cin >> this->datumRodjenja;


}

void Pacijent::unesiZdravstveno()
{
	int broj;
	do {
		cout << "Da li pacijent ima zdravstveno osiguranje? ";
		cin >> broj;
		if (broj == 0)
			cout << "DA!";
		if(broj==1)
			cout << "NE!";
	} while (broj != 0 && broj != 1);

	

}

void Pacijent::unesiAlergije()
{
	int broj;
	do {
		cout << "Da li pacijent ima alergije? ";
		cin >> broj;
		if (broj == 0)
			cout << "DA!";
		if (broj == 1)
			cout << "NE!";
	} while (broj != 0 && broj != 1);
	
}

int Pacijent::getId()
{
	return this->id;
}




string Pacijent::getIme()
{
	return this->ime;
}

Spol Pacijent::getSpol()
{
	return this->spol;
}

string Pacijent::getDatumRodjenja()
{
	return this->datumRodjenja;
}

bool Pacijent::getZdravstveno()
{
	return false;
}

bool Pacijent::getAlergije()
{
	return false;
}

istream& operator>>(istream& stream, Pacijent& pacijent)
{
	pacijent.setIme();
	pacijent.setSpol();
	pacijent.setDatum();
	pacijent.unesiZdravstveno();
	pacijent.unesiAlergije();
	return stream;
	}
ostream& operator<<(ostream& stream, Pacijent& pacijent)
{
	stream<<"Ime pacijenta: \n"<<pacijent.getIme();
	stream<<"Spol: \n"<<pacijent.getSpol();
	stream<<"Datum rodjenja: \n"<<pacijent.getDatumRodjenja();
	stream<<"Zdravstveno osiguranje: "<<pacijent.getZdravstveno();
	stream<<"Alergije: "<<pacijent.getAlergije() ;
	return stream;
}
