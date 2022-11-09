#pragma once
#include "FormaBidimensional.hpp"

class Circulo: public FormaBidimensional{
protected:
    float raio;
public:
    Circulo();
    ~Circulo();
    float getArea();
};