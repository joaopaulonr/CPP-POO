#pragma once
#include <iostream>
#include "Conta.h"
using namespace std;

class Poupanca: public Conta{
private:
    float rendimento;
public:
    Poupanca(float saldo,float credito,float debito,float rendimento);
    float getRendimento();
    void setRendimento(float r);
    float calculaRendimento();
};