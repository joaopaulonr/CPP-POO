#pragma once
#include <iostream>
using namespace std;

class Inseto{
protected:
    string Nome;
    bool Venenoso,Alado,Ferrao;
public:
    Inseto(string Nome,bool Venenoso,bool Alado,bool Ferrao);
    string getNomeInseto();
    void setNome(string n);
    bool getVenenoso();
    void setVenenoso(bool v);
    bool getAlado();
    void setAlado(bool a);
    bool getFerrao();
    void setFerrao(bool f);
};