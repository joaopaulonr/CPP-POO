//Função Principal.
//Includes.
#include "Membros.cpp"
//Main.
int main(){
    Membros M1("Rafael Braga de Souza","Professor","Rafaelbs@gmail.com","123456789",30,'M');
    Membros M2("Lucas Rangel de Lima","Técnico","Lucasrl@gmail.com","987651234",25,'M');
    Membros M3("Débora Cristina de Almeida","Aluno","Debcris@gmail.com","975312468",13,'F');
    M1.print();
    M2.print();
    M3.print();

    return 0;
}