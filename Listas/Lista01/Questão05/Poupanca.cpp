#include "Poupanca.h"


Poupanca::Poupanca(float saldo,float credito,float debito,float rendimento): Conta(saldo,credito,debito){
    this->saldo=saldo;
    this->credito=credito;
    this->debito=debito;
    this->rendimento=rendimento;

}
float Poupanca::getRendimento(){
    cout<<rendimento<<endl;
    return rendimento;
}
void Poupanca::setRendimento(float r){
    rendimento=r;
}
float Poupanca::calculaRendimento(){
    float rendimentos=saldo*(rendimento/100);
    saldo=saldo+rendimentos;
    cout<<saldo<<endl;
    return rendimentos;
}