#include "interfata.h"
#include<iostream>
#include<thread>

using namespace std;

void interfata::afiseaza1() {
	cout << "Bine ati venit pentru a incepe va rog sa apasati enter " << endl;

}
void interfata::enter() {
	cin.get() == '\n';
}
void interfata::afisare2() {
    cout << "Pentru a raspunde va rog sa scrieti litera corespunzatoare " << endl;
}
void interfata:: afiseazaContor(int numar) {
    cout << "Jocul incepe in " << endl;
    for (int i = numar; i > 0; --i) {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1)); // Pauza de 1 secundã
    }
    cout << "START";
}