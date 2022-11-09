#pragma once
#include <iostream>
using namespace std;

class motor{
protected:
    int cilindros;
    float potencia;
public:
    motor();
    motor(int cilindros, float potencia);
    void getCilindros();
    void setCilindros(int cilindros);
    void getPotencia();
    void setPotencia(float potencia);
    void imprimir();
};