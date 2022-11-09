//Implementação da classe Membros.
//Includes.
#pragma once
#include "Membros.hpp"
//Implementação dos métodos.
Membros::Membros(std::string nome, std::string ocupacao, std::string email, std::string palavraChave, int idade, char sx){
    this->nome=nome;
    this->ocupacao=ocupacao;
    this->email=email;
    this->palavraChave=palavraChave;
    this->idade=idade;
    sexo=sx;
}
Membros::~Membros(){}
std::string Membros::getNome(){
    return nome;
}
void Membros::setNome(std::string nome){
    this->nome=nome;
}
std::string Membros::getOcupacao(){
    return ocupacao;
}
void Membros::setOcupacao(std::string ocupacao){
    this->ocupacao=ocupacao;
}
std::string Membros::getEmail(){
    return email;
}
void Membros::setEmail(std::string email){
    this->email=email;
}
std::string Membros::getPalavrachave(){
    return palavraChave;
}
void Membros::setPalavrachave(std::string palavraChave){
    this->palavraChave=palavraChave;
}
int Membros::getIdade(){
    return idade;
}
void Membros::setIdade(int idade){
    this->idade=idade;
}
void Membros::print(){
    std::cout<<"Nome: "<<nome<<'\n'<<"Ocupação: "<<ocupacao<<'\n'<<"Email: "<<email<<'\n'<<"Palavra chave: "<<palavraChave<<'\n'<<"Idade: "<<idade<<'\n'<<"Sexo: "<<sexo<<'\n';
}