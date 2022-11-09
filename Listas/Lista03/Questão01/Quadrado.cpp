#pragma once
#include "Quadrado.hpp"

Quadrado::Quadrado():FormaBidimensional(){
    cout<<"Digite o tamanho do lado: "<<'\n';
    cin>>Tamlado;
}
Quadrado::~Quadrado(){
    cout<<"Quadrado"<<'\n';
}
float Quadrado::getArea(){
    float a=Tamlado*Tamlado;
    cout<<"A área do quadrado é: "<<a<<'\n';
    return a;
}