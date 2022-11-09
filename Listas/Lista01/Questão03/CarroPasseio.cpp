#include "CarroPasseio.h"

carroPasseio::carroPasseio(float peso, float velo_max, float preco,int cilindros, float potencia, string modelo, string cor): veiculo(peso, velo_Max, preco), motor(cilindros, potencia){
    this->peso = peso;
    this->velo_Max = velo_max;
    this->preco = preco;
    this->cilindros = cilindros;
    this->potencia = potencia;
    this->modelo = modelo;
    this->cor = cor;
}
void carroPasseio::getModelo(){
    cout << modelo << endl;
}
void carroPasseio::setModelo(string m){
    this->modelo = m;    
}
void carroPasseio::getCor(){
    cout << cor << endl;
}
void carroPasseio::setCor(string c){
    this->cor = c;
}
void carroPasseio::imprimir(){
    cout << "Modelo do carro: " << modelo << endl;
    cout << "Cor do carro: "<< cor << endl;
    veiculo::imprimir();
    motor::imprimir();
}