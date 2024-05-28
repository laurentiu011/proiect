#include<iostream>
#include"intrebarii.h"
#include"raspunsuri.h"
#include"jocul.h"
#include"interfata.h"
#include"utilizator.h"
using namespace std;

int main() {
	interfata interfata; //obiecte
	utilizator u;
	Jocul joc;

	interfata.afiseaza1();// apleluri
	interfata.afisare2();
	interfata.enter();

	u.introduNume();
	u.introduParola();
	u.introduEmail();
	u.scrieInFisier();
	u.afisareNume();
	interfata.afiseazaContor(3);
	cout << endl;
	joc.citesteIntrebari("intrebari.txt");
	joc.ruleazajoc();





	return 0;
}