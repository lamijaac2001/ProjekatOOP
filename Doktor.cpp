#include "Doktor.h"
#include "Pacijent.h"
#include <iostream>
#include <vector>
using namespace std;
Doktor::Doktor() : email("Email"), brTelefona("00000000000000")
{
}

string Doktor::getEmail()
{
	return this->email;
}

string Doktor::getbrTelefona()
{
	return this->brTelefona;
}

vector<Pacijent>& Doktor::getPacijenti()
{
	return this->pacijenti;
}

void Doktor::pretragaPacijentapoId(char* id)
{
	shared_ptr<Doktor> doktor = make_shared<Doktor>();
	for (auto& pacijent : this->getPacijenti()) {
		if (_strcmpi(pacijent.getId(), id) == 0) {
			doktor->getPacijenti().push_back(pacijent);
		}
		else {
			cout << "Nema pacijenata za dati upit!";
		}
	}

}

void Doktor::pretragaPacijentapoImenu(char* i)
{
	shared_ptr<Doktor> doktor=make_shared<Doktor>();
	for (auto& pacijent : this->getPacijenti()) {
		if (_strcmpi(pacijent.getIme(), i) == 0) {
			doktor->getPacijenti().push_back(pacijent);
		}
		else {
			cout << "Nema pacijenata za dati upit!";
		}
	}
	
	
}

void Doktor::setPacijenti(vector<Pacijent> pacijenti)
{
	this->pacijenti;
}

void Doktor::prijavaPacijenta(Pacijent pacijent)
{
	this->pacijenti.push_back(pacijent);
}