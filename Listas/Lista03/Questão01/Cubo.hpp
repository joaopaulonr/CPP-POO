#pragma once
#include "FormaTridimensional.hpp"

class Cubo:public FormaTridimensional{
protected:
    float Tamlado;
public:
    Cubo();
    ~Cubo();
    float getArea();
    float getVolume();
};

