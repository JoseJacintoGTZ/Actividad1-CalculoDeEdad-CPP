#include <iostream>

using namespace std;

int main() {
    double numero1, numero2;
    double suma, resta, multiplicacion, division;

    cout << "Introduce el valor del primer numero: ";
    cin >> numero1;

    cout << "Introduce el valor del segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;

    return 0;
}