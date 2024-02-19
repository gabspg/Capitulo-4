#include <iostream>

using namespace std;

int main() {


    int l1, l2, l3;

    cout << "Ingrese el primer lado: ";
    cin >> l1;

    cout << "Ingrese el segundo lado: ";
    cin >> l2;

    cout << "Ingrese el tercer lado: ";
    cin >> l3;

    // Comprobar si los lados pueden formar un triángulo rectángulo
    if (l1 > 0 && l2 > 0 && l3 > 0) {
        if (l1 * l1 == l2 * l2 + l3 * l3 ||
            l2 * l2 == l1 * l1 + l3 * l3 ||
            l3 * l3 == l1 * l1 + l2 * l2) {
            cout << "Se pueden formar un triángulo rectángulo." << endl;
        } else {
            cout << "No se puede formar un triángulo rectángulo." << endl;
        }
    } else {
        cout << "Deben ser enteros." << endl;
    }

    return 0;
}

