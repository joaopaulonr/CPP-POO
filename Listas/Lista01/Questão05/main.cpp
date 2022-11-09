#include "Conta.cpp"
#include "ContaCorrente.cpp"
#include "Poupanca.cpp"

int main(){
    Poupanca acc1(1212,0,0,132);
    ContaCorrente acc2(1500,0,0,15);
    acc2.setCredito(1000);
    acc2.getSaldo();
    return 0;
}