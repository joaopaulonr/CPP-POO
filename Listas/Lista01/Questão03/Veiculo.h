#pragma once
#include <iostream>
using namespace std;

class veiculo{
protected:
    float peso, velo_Max, preco;
public:
    veiculo();
    veiculo(float peso, float velo_max, float preco);
    void getPeso();
    void setPeso(float peso);
    void getVelomax();
    void setVelomax(float velo_max);
    void getPreco();
    void setPreco(float preco);
    void imprimir();
};