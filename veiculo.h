#include <iostream>

using namespace std;


class Veiculo {

    protected:              //para so as classes poderem 
        string name;
    
    public:

        Veiculo(string name); //construtor



        virtual void exibirInfo();

};
