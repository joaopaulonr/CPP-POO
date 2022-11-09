#pragma once
#include "Tetraedro.hpp"

Tetraedro::Tetraedro():FormaTridimensional(){
    cout<<"Digite a base do triângulo: "<<'\n';
    cin>>base;
    cout<<"Digite a altura do triângulo: "<<'\n';
    cin>>altura;
}
Tetraedro::~Tetraedro(){
    cout<<"Tetraedro"<<'\n';
}
float Tetraedro::getArea(){
    float a=((base*base)*(sqrt(3)));
    cout<<"A area do tetraedro é :"<<a<<'\n';
    return a;
}
float Tetraedro::getVolume(){
    float v=((base*base*base)*sqrt(2))/12;
    cout<<"O volume do tetraedro é: "<<v<<'n';
    return v;
}