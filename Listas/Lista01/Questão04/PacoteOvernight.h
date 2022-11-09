#pragma once
#include <iostream>
#include "Pacote.h"
using namespace std;

class PacoteOverNight: public pacote{
private:
    float taxaAdicional;
public:
    PacoteOverNight();
    PacoteOverNight(string nd,string ed,string cd,string etd,string cepd,string nr,string er,
    string cr,string etr,string cepr,float peso, float pkg, float txa);
    void setTaxaAdicional(float taxa);
    float getTaxaAdicional();
    double calculaCusto();
};