#include "Cao.cpp"
#include "Gato.cpp"
#include "Porco.cpp"
#include "Boi.cpp"
#include "Laurasiatheria.cpp"
#include "Artiodactyla.cpp"
#include "Carnivora.cpp"
#include <memory>
#include <list>
int main(){
    std::unique_ptr<Laurasiatheria> p1;
        //Laurasiatheria *l1[5]={new Cao(),new Gato(),new Porco(),new Boi()};
    // int i;
    // for(i=0;i<=5;i++){
    //     l1[i]->Som();
    // };
    p1->Som();
    return 0;
    // std::shared_ptr<Laurasiatheria> a=(new Cao());
    
}