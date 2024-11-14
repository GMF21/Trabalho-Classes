#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

using namespace std;

class Veiculo{
    protected:      // nao passa para fora das classes
        string name;


    public:
        Veiculo(string name);  // construtor
        

        
        
        virtual void mostrarDetalhes();
        
};

#endif
