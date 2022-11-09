#include "Restaurante.h"

restaurante::restaurante(string n,string e,string c,string E,string cep,string t,string tc,float p): empresa(n,e,c,E,cep,t){
    this->tipoComida=tc;
    this->precoMedio=p;
}
string restaurante::getTipocomida(){
    cout<<tipoComida<<endl;
    return tipoComida;
}
void restaurante::setTipocomida(string t){
    this->tipoComida=t;
}
float restaurante::getPrecomedio(){
    cout<<precoMedio<<endl;
    return precoMedio;
}
void restaurante::setPrecomedio(float p){
    this->precoMedio=p;
}
void restaurante::Print(){
    empresa::Print();
    cout << tipoComida << endl;
    cout << precoMedio << endl; 
}