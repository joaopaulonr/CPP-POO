#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(float saldo,float credito,float debito,float taxaTrans): Conta(saldo,credito,debito){
    this->saldo=saldo;
    this->credito=credito;
    this->debito=debito;
    this->taxaTrans=taxaTrans;
}
float ContaCorrente::getTaxatrans(){
    cout<<taxaTrans<<endl;
    return taxaTrans;
}
void ContaCorrente::setTaxatrans(float t){
    this->taxaTrans=t;
}
float ContaCorrente::getCredito(float c){
    float credit=Conta::getCredito();
    return credit;
}
void ContaCorrente::setCredito(float c){
    float credit=Conta::getCredito()+c-taxaTrans;
    saldo=saldo+credit;
}
float ContaCorrente::getDebito(){
    float debit=Conta::getDebito();
    return debit;
}
void ContaCorrente::setDebito(float d){
    float debit=Conta::getDebito()-(d+taxaTrans);
    saldo=saldo-debit;
}

