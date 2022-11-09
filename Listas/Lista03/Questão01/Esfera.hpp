#pragma once
#include "FormaTridimensional.hpp"
class Esfera: public FormaTridimensional{
protected:
    float raio;
public:
    Esfera();
    ~Esfera();
    float getArea();
    float getVolume();
};