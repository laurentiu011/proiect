#include"intrebari_r1.h"
using namespace std;

Intrebare::Intrebare(const string& text, const vector<string>& variante, char raspuns_corect)
    : text(text), variante(variante), raspuns_corect(raspuns_corect) {}

void Intrebare::afiseaza() const {
     cout << text << std::endl;
    for (const auto& varianta : variante) {
        std::cout << varianta << std::endl;
    }
}

bool Intrebare::verificaRaspuns(char raspuns) const {
    return raspuns == raspuns_corect;
}