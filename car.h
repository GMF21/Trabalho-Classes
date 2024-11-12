#ifndef CAR_H
#define CAR_H

#include "veiculo.h"

class Car : public Veiculo {
    private: 
        int num_portas;

    public:
        Car(string name, int num_portas);
        void mostrarDetalhes() override;
};

#endif 
