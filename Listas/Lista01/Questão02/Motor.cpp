#include "Motor.h"

motor::motor(int cilindros, float potencia){
    this->cilindros = cilindros;
    this->potencia = potencia;
}
void motor::getCilindros(){
    cout << cilindros << endl;
}
void motor::setCilindros(int cilindros){
    this->cilindros = cilindros;
}
void motor::getPotencia(){
    cout << potencia << endl;
}
void motor::setPotencia(float potencia){
    this->potencia = potencia;
}
void motor::imprimir(){
    cout << "A quantidade de cilindros é: " << cilindros << endl;
    cout << "A potência do motor é de: " << potencia << " CV" << endl;
}