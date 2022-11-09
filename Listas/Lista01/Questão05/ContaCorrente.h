#pragma once
#include <iostream>
#include "Conta.h"
using namespace std;

class ContaCorrente: public Conta{
protected:
    float taxaTrans;
public:
    ContaCorrente(float saldo,float credito,float debito,float taxaTrans);
    float getTaxatrans();
    void setTaxatrans(float t);
    float getCredito(float c);
    void setCredito(float c);
    float getDebito();
    void setDebito(float d);
};
