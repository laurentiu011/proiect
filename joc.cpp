#include "joc.h"
#include<iomanip>
#include<vector>
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;



int  joc::get_score() {
	return score;
}
void joc::apelare_randowm() {
	srand(static_cast<unsigned int>(std::time(nullptr))); // generator de numere
//	vector<void(*)()> FunctionPointer = { intrebare1() ,};
//	int index = std::rand() % FunctionPointer.size();
//	FunctionPointer[index]();


}

void joc::intrebare1(){
	cout << endl;
	cout << "Capitala Frantei este orasul" << endl;

	cout << "a) Paris" << setprecision(3) << " b) Madrid" << setprecision(3) << " c) Budapesta " << setprecision(3) << " d) Mosocva" << endl;

}

void joc::raspuns1() {
	char raspuns;
	char raspuns_corect = 'a';
	cin >> raspuns;
	if (raspuns == raspuns_corect) {
		 	score++;
		cout << "Felecitari ai raspuns coresct" << setprecision(10) << " Scorul tau este " << score;
	}
	else {
		 	score--;
			if (score < 0)
				score = 0;
		cout << "Din pacate ai gresit" << setprecision(10) << " Scorul tau este " << score;
	}

	
}
