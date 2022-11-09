#include "PacoteOvernight.h"

PacoteOverNight::PacoteOverNight(string nd,string ed,string cd,string etd,string cepd,string nr,string er,
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
void PacoteOverNight::setTaxaAdicional(float taxa){
    taxaAdicional=taxa;
}
float PacoteOverNight::getTaxaAdicional(){
    cout<<taxaAdicional;
    return taxaAdicional;
}
double PacoteOverNight::calculaCusto(){
    double custo=(peso*precoKG)+taxaAdicional;
    cout<<custo<<endl;
    return custo;
}