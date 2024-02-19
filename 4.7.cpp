#include <iostream>

using namespace std;

int main() {
    // a) Recibir como entrada la variable unsigned int x con cin
    unsigned int x;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    // b) Recibir como entrada la variable unsigned int y con cin
    unsigned int y;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    // c) Declarar la variable unsigned int i e inicializarla con 1
    unsigned int i = 1;

    // d) Declarar la variable entera potencia e inicializarla con 1
    int potencia = 1;

    // e) Multiplicar la variable potencia por x y asignar el resultado a potencia
    potencia *= x;

    // f) Preincrementar la variable i en 1
    ++i;

    // g) Determinar si i es menor o igual a y
    if (i <= y) {
        // h) Imprimir la variable entera potencia con cout
        cout << "El valor de potencia es: " << potencia << endl;
    }

    return 0;
}
