#include "Pacote.h"

pacote::pacote(string nd,string ed,string cd,string etd,string cepd,string nr,string er,
string cr,string etr,string cepr,float peso, float pkg){
    nomeDestinatario=nd;
    nomeRemetente=nr;
    enderecoDestinatario=ed;
    enderecoRemetente=er;
    cidadeDestinatario=cd;
    cidadeRemetente=cr;
    estadoDestinatario=etd;
    estadoRemetente=etr;
    cepDestinatario=cepd;
    cepRemetente=cepr;
    this->peso=peso;
    precoKG=pkg;
}
double pacote::calculaCusto(){
    double custo=peso*precoKG;
    cout<<custo<<endl;
    return custo;
}
void pacote::setNomeDestinatario(string nome){
    nomeDestinatario=nome;
}
void pacote::setEnderecoDestinatario(string endereco){
    enderecoDestinatario=endereco;
}
void pacote::setCidadeDestinatario(string cidade){
    cidadeDestinatario=cidade;
}
void pacote::setEstadoDestinatario(string estado){
    estadoDestinatario=estado;
}
void pacote::setCepDestinatario(string cep){
    cepDestinatario=cep;
}
void pacote::setNomeRemetente(string nome){
    nomeRemetente=nome;
}
void pacote::setEnderecoRemetente(string endereco){
    enderecoRemetente=endereco;
}
void pacote::setCidadeRemetente(string cidade){
    cidadeRemetente=cidade;
}
void pacote::setEstadoRemetente(string estado){
estadoRemetente=estado;
}
void pacote::setCepRemetente(string cep){
    cepRemetente=cep;
}
void pacote::setPeso(float peso){
    this->peso=peso;
}
void pacote::setPrecoKG(float precoKG){
    this->precoKG=precoKG;
}
string pacote::getNomeDestinatario(){
    cout<<nomeDestinatario<<endl;
    return nomeDestinatario;
}
string pacote::getEnderecoDestinatario(){
    cout<<enderecoDestinatario<<endl;
    return enderecoDestinatario;
}
string pacote::getCidadeDestinatario(){
    cout<<cidadeDestinatario<<endl;
    return cidadeDestinatario;
}
string pacote::getEstadoDestinatario(){
    cout<<estadoDestinatario<<endl;
    return estadoDestinatario;
}
string pacote::getCepDestinatario(){
    cout<<cepDestinatario<<endl;
    return cepDestinatario;
}
string pacote::getNomeRemetente(){
    cout<<nomeRemetente<<endl;
    return nomeRemetente;
}
string pacote::getEnderecoRemetente(){
    cout<<enderecoRemetente<<endl;
    return enderecoRemetente;
}
string pacote::getCidadeRemetente(){
    cout<<cidadeRemetente<<endl;
    return cidadeRemetente;
}
string pacote::getEstadoRemetente(){
    cout<<estadoRemetente<<endl;
    return estadoRemetente;
}
string pacote::getCepRemetente(){
    cout<<cepRemetente<<endl;
    return cepRemetente;
}
float pacote::getPeso(){
    cout<<peso<<endl;
    return peso;
}
float pacote::getPrecoKG(){
    cout<<precoKG<<endl;
    return precoKG;
}