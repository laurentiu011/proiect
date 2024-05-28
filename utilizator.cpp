#include "utilizator.h"
#include<iostream>
#include<string>
#include<conio.h>
#include"intrebari_r1.h";
#include <iostream>
#include <fstream>
#include "utilizator.h"

using namespace std;

void utilizator::introduNume() {
    cout << "Introdu numele: ";
    getline(cin, nume);
}

void utilizator::afisareNume() {
    cout << "Numele introdus este " << nume << endl;
}

void utilizator::introduParola() {
    cout << "Introdu parola: ";
    getline(cin, parola);
}

void utilizator::introduEmail() {
    cout << "Introduceti Email-ul: ";
    getline(cin, email);
}

void utilizator::scrieInFisier() {
    ofstream fisier("date_utilizator.txt");
    if (fisier.is_open()) {
        fisier << "Nume: " << nume << endl;
        fisier << "Parola: " << parola << endl;
        fisier << "Email: " << email << endl;
        fisier << "-----------------------" << endl;
        fisier.close();
        cout << "Datele au fost scrise in fisier." << endl;
    }
    else {
        cerr << "Eroare la deschiderea fisierului!" << endl;
    }
}