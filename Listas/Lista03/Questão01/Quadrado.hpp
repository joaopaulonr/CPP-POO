#pragma once
#include "FormaBidimensional.hpp"

class Quadrado: public FormaBidimensional{
protected:
    float Tamlado;
public:
    Quadrado();
    ~Quadrado();
    float getArea();
};