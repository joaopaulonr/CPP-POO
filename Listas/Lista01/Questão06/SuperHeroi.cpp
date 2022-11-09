#include "SuperHeroi.h"


SuperHeroi::SuperHeroi(string NomeHumano,string Sexo,string Lingua,string Etinia,int idade,string Nomeinseto,bool Venenoso,bool Alado,bool Ferrao,string Codinome,string Trauma,string Poderes):
Humano(Nome,Sexo,Lingua,Etinia,idade),Inseto(Nome,Venenoso,Alado,Ferrao){
    this->NomeHumano=NomeHumano;
    this->Sexo=Sexo;
    this->Lingua=Lingua;
    this->Etinia=Etinia;
    this->idade=idade;
    this->Venenoso=Venenoso;
    this->Alado=Alado;
    this->Trauma=Trauma;
}
string SuperHeroi::getCodinome(){
    cout<<Codinome<<endl;
    return Codinome;
}
void SuperHeroi::setCodinome(string c){
    Codinome=c;
}
string SuperHeroi::getTrauma(){
    cout<<Trauma<<endl;
    return Trauma;
}
void SuperHeroi::setTrauma(string t){
    Trauma=t;
}
string SuperHeroi::getPoderes(){
    cout<<Poderes<<endl;
    return Poderes;
}
void SuperHeroi::setPoderes(string p){
    Poderes=p;
}