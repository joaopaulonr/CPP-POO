#include "PacoteDoisDias.h"

PacoteDoisDias::PacoteDoisDias(string nd,string ed,string cd,string etd,string cepd,string nr,string er,
string cr,string etr,string cepr,float peso, float pkg, float txa): pacote(nd,ed,cd,etd,cepd,nr,er,
cr,etr,cepr,peso,pkg){
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
    taxaAdicional=txa;
}
void PacoteDoisDias::setTaxaAdicional(float taxa){
    taxaAdicional=taxa;
}
float PacoteDoisDias::getTaxaAdicional(){
    cout<<taxaAdicional;
    return taxaAdicional;
}
double PacoteDoisDias::calculaCusto(){
    double custo=(peso*precoKG)+taxaAdicional;
    cout<<custo<<endl;
    return custo;
}