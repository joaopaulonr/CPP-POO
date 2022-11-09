#include "Caminhao.h"

caminhao::caminhao(float peso, float velo_max, float preco,int cilindros, float potencia, float ton, float altMax, float Comp)
: veiculo(peso,velo_Max,preco), motor(cilindros,potencia){
    
}
float caminhao::getToneladas(){
    cout<<toneladas<<endl;
    return toneladas;
}
void caminhao::setToneladas(float t){
    this->toneladas=t;
}
float caminhao::getaltmax(){
    cout<<alturaMax<<endl;
    return alturaMax;
}
void caminhao::setaltmax(float a){
    this->alturaMax=a;
}
float caminhao::getComprimento(){
    cout<<Comprimento<<endl;
    return Comprimento;
}
void caminhao::setComprimento(float c){
    this->Comprimento=c;
}
void caminhao::print(){
    veiculo::imprimir();
    motor::imprimir();
    cout<<toneladas<<endl;
    cout<<alturaMax<<endl;
    cout<<Comprimento<<endl;
}
    