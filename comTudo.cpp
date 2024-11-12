#include <iostream>

using namespace std;


class Veiculo {
    protected:
        string name;

    public:
        Veiculo(string name) : name(name) {}
        
        
        virtual void mostrarDetalhes() {
            cout << "Nome Veiculo: " << name << endl;
        }
};


class Car : public Veiculo {
    private: 
        int num_portas;

    public:
        Car(string name, int num_portas) : Veiculo(name), num_portas(num_portas) {}

        void mostrarDetalhes() override {
            Veiculo::mostrarDetalhes();
            cout << "Numero de portas: " << num_portas << endl;
        }
};


class Mota : public Veiculo {
    private:
        string cc;

    public:
        Mota(string name, string cc) : Veiculo(name), cc(cc) {}

        void mostrarDetalhes() override {
            Veiculo::mostrarDetalhes();
            cout << "Cilindrada: " << cc << endl;
        }
};


int main() {
    Car car_1("Porsche", 2);
    Mota mota_1("Honda", "CBr 600");

    car_1.mostrarDetalhes();
    mota_1.mostrarDetalhes();

    return 0;
}
