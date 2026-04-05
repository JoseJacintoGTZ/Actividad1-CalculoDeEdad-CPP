#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Ingresa tu nombre: ";
    getline(cin, nombre); 

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Bienvenido " << nombre << ", Eres mayor de edad" << endl;
    } else {
        cout << "Bienvenido " << nombre << ", Eres menor de edad" << endl;
    }

    return 0;
}