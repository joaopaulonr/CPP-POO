#pragma once
#include <iostream>
#include "Pacote.h"
using namespace std;

class PacoteDoisDias: public pacote{
private:
    float taxaAdicional;
public:
    PacoteDoisDias();
    PacoteDoisDias(string nd,string ed,string cd,string etd,string cepd,string nr,string er,
    string cr,string etr,string cepr,float peso, float pkg, float txa);
    void setTaxaAdicional(float taxa);
    float getTaxaAdicional();
    double calculaCusto();
};