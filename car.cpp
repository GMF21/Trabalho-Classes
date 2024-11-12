#include "Car.h"

Car::Car(string Name, int portas) : Veiculo(Name) {
    num_portas = portas;
}

void Car::mostrarDetalhes() {
    Veiculo::mostrarDetalhes();
    cout << "Numero de portas: " << num_portas << endl;
}
