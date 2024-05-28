#include "jocul.h"

#include <fstream>
#include <iostream>

void Jocul::citesteIntrebari(const std::string& filename) {
    ifstream file(filename); //deschidere fisier
    

    while (!file.eof()) {
        string line;
        getline(file, line);
        if (line.empty()) continue;

        string text = line;
        vector<string> variante(4);
        for (int i = 0; i < 4; ++i) {
            getline(file, line);
            variante[i] = line;
        }

        getline(file, line);
        char raspuns_corect = line[0];

        intrebari.emplace_back(text, variante, raspuns_corect);
        getline(file, line);  // Linie goala de separare
    }

    file.close();
}

void Jocul::afiseazaIntrebari() const {
    for (const auto& intrebare : intrebari) {
        intrebare.afiseaza();
        cout << endl;
    }
}

void Jocul::ruleazajoc() {
    int scor = 0;
    for (const auto& intrebare : intrebari) {
        intrebare.afiseaza();

        char raspuns;
        cout << "Raspunsul tau: ";
        cin >> raspuns;

        if (intrebare.verificaRaspuns(raspuns)) {
            cout << "Corect!" << endl;
            scor++;
        }
        else {
            cout << "Gresit! Raspunsul corect este " << intrebare.raspuns_corect << endl;
        }

        cout << endl;
    }

    cout << "Scorul tau final este: " << scor << " din " << intrebari.size() << endl;
}

