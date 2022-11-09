#pragma once
#include <iostream>
#include "Carnivora.hpp"
using namespace std;

class Gato: public Carnivora{
private:
public:
    Gato();
    ~Gato();
    void Som();
};