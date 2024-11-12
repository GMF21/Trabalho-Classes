#include "veiculo.h"

Veiculo::Veiculo(string Name) {
    this->name = Name;
}

void Veiculo::mostrarDetalhes() {
    cout << "Nome Veiculo: " << name << endl;
}
