#pragma once
#include <iostream>
using namespace std;

class Conta{
protected:
    float saldo, credito, debito;
public:
    Conta(float saldo,float credito,float debito);
    float getSaldo();
    void setSaldo(float s);
    float getCredito();
    void setCredito(float c);
    float getDebito();
    void setDebito(float d);
};