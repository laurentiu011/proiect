#pragma once
#include "intrebari_r1.h"
#include <vector>
#include <string>

class Joc {
public:
    void citesteIntrebari(const string& filename);
    void afiseazaIntrebari() const;
    void ruleazaQuiz();

private:
    vector<Intrebare> intrebari;
};

