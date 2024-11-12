#include "Car.h"
#include "Mota.h"

int main() {
    Car car_1("Porsche", 2);
    Mota mota_1("Honda", "CBr 600");

    car_1.mostrarDetalhes();
    mota_1.mostrarDetalhes();

    return 0;
}
