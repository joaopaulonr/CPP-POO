#include "Conta.h"

Conta::Conta(float saldo,float credito,float debito){
    while(saldo<debito && saldo<=0){
        cout<<"O saldo é incompatível"<<endl;
        cin>>saldo;
    }
    this->saldo=saldo;
    this->credito=credito;
    this->debito=debito;
}
float Conta::getSaldo(){
    cout<<saldo<<endl;
    return saldo;
}
void Conta::setSaldo(float s){
    saldo=s;
    while(saldo<debito && saldo<=0){
        cout<<"O saldo é incompatível"<<endl;
        cin>>saldo;
        saldo=s;
    }
}
float Conta::getCredito(){
    cout<<credito<<endl;
    return credito;
}
void Conta::setCredito(float c){
    credito=c;
}
float Conta::getDebito(){
    cout<<debito<<endl;
    return debito;
}
void Conta::setDebito(float d){
    debito=d;
}