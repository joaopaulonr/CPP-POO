#include "Circulo.cpp"
#include "Quadrado.cpp"
#include "Triangulo.cpp"
#include "Esfera.cpp"
#include "Cubo.cpp"
#include "Tetraedro.cpp"
#include "FormaBidimensional.cpp"
#include "FormaTridimensional.cpp"
#include "Forma.cpp"


int main(){
    // Forma *p[6] ={new Circulo(),new Quadrado(),new Triangulo(),new Esfera(),new Cubo(),new Tetraedro{}};
    // int i;
    // for (i=0;i<6; i++){
    //     p[i]->~Forma();
    // };
    std::shared_ptr<Forma> p(new Circulo());
    p->~Forma();
    return 0;
}