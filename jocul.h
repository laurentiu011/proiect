#pragma once
#include<iostream>
#include "intrebari_r1.h"
#include <vector>
#include <string>
using namespace std;
class Jocul {
public:
    void citesteIntrebari(const string& filename);
    void afiseazaIntrebari() const;
    void ruleazajoc();

private:
    vector<Intrebare> intrebari;
};

