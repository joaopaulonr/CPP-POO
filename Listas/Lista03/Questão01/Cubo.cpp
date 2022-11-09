#pragma once
#include "Cubo.hpp"

Cubo::Cubo(): FormaTridimensional(){
    cout<<"Digite o tamanho do lado: "<<'\n';
    cin>>Tamlado;
}
Cubo::~Cubo(){
    cout<<"Cubo"<<'\n';
}
float Cubo::getArea(){
    float a=6*(Tamlado*Tamlado);
    cout<<"A área do cubo é de : "<<a<<'\n';
    return a;
}
float Cubo::getVolume(){
    float v=Tamlado*Tamlado*Tamlado;
    cout<<"O volume do cubo é de : "<<v<<'\n';
    return v;
}