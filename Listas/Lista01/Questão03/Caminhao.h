#pragma once
#include <iostream>
#include "Veiculo.h"
#include "Motor.h"
using namespace std;

class caminhao: public veiculo, public motor{
protected:
    float toneladas, alturaMax, Comprimento;
public:
    caminhao();
    caminhao(float peso, float velo_max, float preco,int cilindros, float potencia, float ton, float altMax, float Comp);
    float getToneladas();
    void setToneladas(float t);
    float getaltmax();
    void setaltmax(float a);
    float getComprimento();
    void setComprimento(float c);
    void print();
};