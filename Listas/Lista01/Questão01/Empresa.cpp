#include "Empresa.h"

empresa::empresa(string n,string e,string c,string E,string cep,string t){
    Nome=n;
    Endereco=e;
    Cidade=c;
    Estado=E;
    Cep=cep;
    Telefone=t;
}
string empresa::getNome(){
    cout<<Nome<<endl;
    return Nome;
}
void empresa::setNome(string n){
    this->Nome=n;
}
string empresa::getEndereco(){
    cout<<Endereco<<endl;
    return Endereco;
}
void empresa::setEndereco(string e){
    this->Endereco=e;
}
string empresa::getCidade(){
    cout<<Cidade<<endl;
    return Cidade;
}
void empresa::setCidade(string c){
    this->Cidade=c;
}
string empresa::getEstado(){
    cout<<Estado<<endl;
    return Estado;
}
void empresa::setEstado(string e){
    this->Estado=e;
}
string empresa::getCep(){
    cout<<Cep<<endl;
    return Cep;
}
void empresa::setCep(string c){
    this->Cep=c;
}
string empresa::getTelefone(){
    cout<<Telefone<<endl;
    return Telefone;
}
void empresa::setTelefone(string t){
    this->Telefone=t;
}
void empresa::Print(){
    cout << Nome << endl;
    cout << Endereco << endl;
    cout << Cidade << endl;
    cout << Estado << endl;
    cout << Cep << endl;
    cout << Telefone << endl;
}