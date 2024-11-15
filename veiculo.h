#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

using namespace std;

class Veiculo{
    protected:      // nao passa para fora das classes
        string name;


    public:
        Veiculo(string name);  // construtor
        

        
        
        virtual void mostrarDetalhes(); //virtual-indica q pode ser substituido em classes derivadas, as classes q herdam de veiculo podem subscrever esse metodo
        
};

#endif
