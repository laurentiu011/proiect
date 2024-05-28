#pragma once
#include<iostream>
#include<fstream>
using namespace std;



#include <string>

class utilizator {
private:
    string nume;
    string parola;
    string email;

public:
    void introduNume();
    void afisareNume();
    void introduParola();
    void introduEmail();
    void scrieInFisier();
};