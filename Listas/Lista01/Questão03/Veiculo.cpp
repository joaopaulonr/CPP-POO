#include "Veiculo.h"

veiculo::veiculo(float peso, float velo_max, float preco){
    this->peso = peso;
    this->velo_Max = velo_max;
    this->preco = preco;
}
void veiculo::getPeso(){
    cout <<"O peso do veiculo é: " << peso << "Kg" << endl;
}
void veiculo::setPeso(float peso){
    this->peso = peso;
}
void veiculo::getVelomax(){
    cout << "A velocidade maxima do veiculo é: " << velo_Max << "Km/h" << endl;
}
void veiculo::setVelomax(float velo_max){
    this->velo_Max = velo_max;
}
void veiculo::getPreco(){
    cout << "O preço do veiculo é: R$" << preco << endl;
}
void veiculo::setPreco(float preco){
    this->preco = preco;
}
void veiculo::imprimir(){
    cout << "O peso do veiculo é: " << peso << " Kg" << endl;
    cout << "A velocidade máxima do veiculo é: "<< velo_Max << "Km/h" << endl;
    cout << "O preço do veiculo é: R$" << preco << endl;
}