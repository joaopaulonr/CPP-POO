#include "Inseto.h"
Inseto::Inseto(string Nome,bool Venenoso,bool Alado,bool Ferrao){
    this->Nome=Nome;
    this->Venenoso=Venenoso;
    this->Alado=Alado;
    this->Ferrao=Ferrao;
}
    string Inseto::getNomeInseto(){
        cout<<Nome<<endl;
        return Nome;
    }
    void Inseto::setNome(string n){
        Nome=n;
    }
    bool Inseto::getVenenoso(){
        cout<<Venenoso<<endl;
        return Venenoso;
    }
    void Inseto::setVenenoso(bool v){
        Venenoso=v;
    }
    bool Inseto::getAlado(){
        cout<<Alado<<endl;
        return Alado;
    }
    void Inseto::setAlado(bool a){
        Alado=a;
    }
    bool Inseto::getFerrao(){
        cout<<Ferrao<<endl;
        return Ferrao;
    }
    void Inseto::setFerrao(bool f){
        Ferrao=f;
    }