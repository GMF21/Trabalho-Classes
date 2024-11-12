#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

using namespace std;

class Veiculo{
    protected:
        string name;


    public:
        Veiculo(string name);  // construtor
        

        
        
        virtual void mostrarDetalhes();
        
};

#endif
