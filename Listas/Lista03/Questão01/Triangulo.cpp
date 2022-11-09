#pragma once
#include "Triangulo.hpp"

Triangulo::Triangulo():FormaBidimensional(){
    cout<<"Digite a base do triângulo: "<<'\n';
    cin>>base;
    cout<<"Digite a altura do triângulo: "<<'\n';
    cin>>altura;
}
Triangulo::~Triangulo(){
    cout<<"Triangulo"<<'\n';
}
float Triangulo::getArea(){
    float a=base*altura/2;
    cout<<" A área do triângulo é: "<<a<<'\n';
    return a;
}