
#include "Pacijent.h"
#include <string>
#include <vector>
using namespace std;

#pragma once
class Doktor 
{
private:
	string brTelefona;
	string email;
	vector<Pacijent> pacijenti;
	

public:
	Doktor();
	string getEmail();
	string getbrTelefona();
	vector<Pacijent>& getPacijenti();
    void  pretragaPacijentapoId(char* id);
	void pretragaPacijentapoImenu(char* i);
	void setPacijenti(vector<Pacijent> pacijenti);
	void prijavaPacijenta(Pacijent pacijent);

};

