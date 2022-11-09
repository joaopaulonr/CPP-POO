#pragma once
#include <iostream>
#include "Humano.h"
#include "Inseto.h"
using namespace std;

class SuperHeroi: public Humano, public Inseto{
protected:
    string Codinome, Trauma, Poderes;
public:
    SuperHeroi(string Nome,string Sexo,string Lingua,string Etinia,int idade,string Nomeinseto,bool Venenoso,bool Alado,bool Ferrao,string Codinome,string Trauma,string Poderes);
    string getCodinome();
    void setCodinome(string c);
    string getTrauma();
    void setTrauma(string t);
    string getPoderes();
    void setPoderes(string p);
};