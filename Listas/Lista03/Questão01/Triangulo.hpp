#pragma once
#include "FormaBidimensional.hpp"

class Triangulo: public FormaBidimensional{
protected:
    float base, altura;
public:
    Triangulo();
    ~Triangulo();
    float getArea();
};