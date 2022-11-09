//Prototipação da classe Membros.
//Includes.
#pragma once
#include <iostream>
//classe.
class Membros{ 
private:
    std::string nome, ocupacao, email, palavraChave;
    int idade;
    char sexo;
public: 
//Métodos
    Membros(std::string nome, std::string ocupacao, std::string email, std::string palavraChave, int idade, char sx);
    ~Membros();
    std::string getNome();
    void setNome(std::string nome);
    std::string getOcupacao();
    void setOcupacao(std::string ocupacao);
    std::string getEmail();
    void setEmail(std::string email);
    std::string getPalavrachave();
    void setPalavrachave(std::string palavraChave);
    int getIdade();
    void setIdade(int idade);
    void print();
};