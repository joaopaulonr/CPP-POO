#include "Pacote.cpp"
#include "PacoteDoisDias.cpp"
#include "PacoteOvernight.cpp"

int main(){
    PacoteOverNight pac1("Lucas oliveira","Travessa jurandir silva n° 123","Quixadá","Ceará","74093261","juracir","rua rachel de paiva mendes n° 123","São Paulo","São Paulo","58765126",0.5,15,5);
    pac1.calculaCusto();
    return 0;
}