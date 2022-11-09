#pragma once
#include "Esfera.hpp"

Esfera::Esfera(): FormaTridimensional(){
    cout<<"Digite o raio: "<<'\n';
    cin>>raio;
}
Esfera::~Esfera(){
    cout<<"Esfera"<<'\n';
}
float Esfera::getArea(){
    float a=4*pi*(raio*raio);
    cout<<"A área da esfera é :"<<a<<'\n';
    return a;
}
float Esfera::getVolume(){
    float v=(4/3)*pi*(raio*raio*raio);
    cout<<"O volume da esfera é: "<<v<<'\n';
    return v;
}