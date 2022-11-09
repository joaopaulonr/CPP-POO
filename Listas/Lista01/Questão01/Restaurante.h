#pragma once
#include <iostream>
#include "Empresa.h"
using namespace std;

class restaurante: public empresa{
protected:
    string tipoComida;
    float precoMedio;
public:
    restaurante();
    restaurante(string n,string e,string c,string E,string cep,string t,string tc,float p);
    string getTipocomida();
    void setTipocomida(string t);
    float getPrecomedio();
    void setPrecomedio(float p);
    void Print();
};