#include <iostream>
#include "veiculo.h"
using namespace std;

//construtor
Veiculo::Veiculo(string name) // inicializar o nome 
{}

void Veiculo::exibirInfo()
{
    cout << "nome: " << name << endl;
}
