#include "Humano.h"

Humano::Humano(string NomeHumano,string Sexo,string Lingua,string Etinia,int idade){
    this->NomeHumano=NomeHumano;
    this->Sexo=Sexo;
    this->Lingua=Lingua;
    this->Etinia=Etinia;
    this->idade=idade;
}
string Humano::getNomeHumano(){
    cout<<NomeHumano<<endl;
    return NomeHumano;
}
void Humano::setNome(string n){
    NomeHumano=n;
}
string Humano::getSexo(){
    cout<<Sexo<<endl;
    return Sexo;
}
void Humano::setSexo(string s){
    Sexo=s;
}
string Humano::getLingua(){
    cout<<Lingua<<endl;
    return Lingua;
}
void Humano::setLingua(string l){
    Lingua=l;
}
string Humano::getEtnia(){
    cout<<Etinia<<endl;
    return Etinia;
}
void Humano::setEtnia(string e){
    Etinia=e;
}