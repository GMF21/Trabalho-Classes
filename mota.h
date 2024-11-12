#ifndef MOTA_H
#define MOTA_H

#include "veiculo.h"

class Mota : public Veiculo {
    private:
        string cc;
    
    public:
        Mota(string name, string cc);
        void mostrarDetalhes() override;
};

#endif 
