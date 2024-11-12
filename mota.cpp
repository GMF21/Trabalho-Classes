#include "Mota.h"

Mota::Mota(string Name, string Cc) : Veiculo(Name) {
    cc = Cc;
}

void Mota::mostrarDetalhes() {
    Veiculo::mostrarDetalhes();
    cout << "Cilindrada: " << cc << endl;
}
