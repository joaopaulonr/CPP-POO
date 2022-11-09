#pragma once
#include "Circulo.hpp"

Circulo::Circulo():FormaBidimensional(){
    cout<<"Digite o raio: "<<'\n';
    cin>>raio;
}
Circulo::~Circulo(){
    cout<<"Circulo"<<'\n';
}
float Circulo::getArea(){
    float a=pi*(raio*raio);
    cout<<"A área do circulo é :"<<a<<'\n';
    return a;
}