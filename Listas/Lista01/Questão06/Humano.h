#pragma once
#include <iostream>
using namespace std;

class Humano{
protected:
    string NomeHumano,Sexo,Lingua,Etinia;
    int idade;
public:
    Humano(string NomeHumano,string Sexo,string Lingua,string Etinia,int idade);
    string getNomeHumano();
    void setNome(string n);
    string getSexo();
    void setSexo(string s);
    string getLingua();
    void setLingua(string l);
    string getEtnia();
    void setEtnia(string e);
};