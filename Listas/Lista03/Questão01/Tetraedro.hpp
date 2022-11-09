#pragma once
#include "FormaTridimensional.hpp"
#include "math.h"
class Tetraedro: public FormaTridimensional{
protected:
    float base, altura;
public:
    Tetraedro();
    ~Tetraedro();
    float getArea();
    float getVolume();
};