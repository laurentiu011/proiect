#include "raspunsuri.h"
#include "intrebarii.h"
#include<iostream>
#include<iomanip>
using namespace std;
void raspunsuri::raspuns1() {

	char raspuns_corect = 'a';

	if (raspuns == raspuns_corect) {
		score++;
		cout << "Felicitari ai raspuns coresct" << setprecision(10) << " Scorul tau este " << score;
	}
	else {
		score--;
		if (score < 0)
			score = 0;
		cout << "Din pacate ai gresit" << setprecision(10) << " Scorul tau este " << score;
	}
}
