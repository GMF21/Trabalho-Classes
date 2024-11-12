#include "veiculo.h"

Veiculo::Veiculo(string Name) { //inicializa o nome do veículo
    this->name = Name;
}

void Veiculo::mostrarDetalhes() {
    cout << "Nome Veiculo: " << name << endl;
}
