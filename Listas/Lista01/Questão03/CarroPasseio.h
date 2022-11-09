#pragma once
#include <iostream>
#include "Motor.h"
#include "Veiculo.h"
using namespace std;

class carroPasseio : public veiculo, public motor{
private:
    string modelo,cor;
public:
    carroPasseio(float peso, float velo_max, float preco,int cilindros, float potencia, string modelo, string cor);  
    void getModelo();
    void setModelo(string m);
    void getCor();
    void setCor(string c);
    void imprimir();
};