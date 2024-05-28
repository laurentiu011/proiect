#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Intrebare {
public:
    string text;
    vector<string> variante;
    char raspuns_corect;

    Intrebare() = default;
    Intrebare(const string& text, const vector<string>& variante, char raspuns_corect);

    void afiseaza() const;
    bool verificaRaspuns(char raspuns) const;
};