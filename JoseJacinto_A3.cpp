#include <iostream>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string dia;
    string mes;
    string anio;

public:
    Empleado(string n, string ap, string am, string d, string m, string a) {
        nombre = n;
        apellidoPaterno = ap;
        apellidoMaterno = am;
        dia = d;
        mes = m;
        anio = a;
    }

    char obtenerPrimeraVocalInterna(string texto) {
        for (int i = 1; i < texto.length(); i++) {
            char letra = texto[i];
            if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
                letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                return toupper(letra);
            }
        }
        return 'X'; 
    }

    void calcularRFC() {
        string rfc = "";

        rfc += toupper(apellidoPaterno[0]);
        rfc += obtenerPrimeraVocalInterna(apellidoPaterno);

        if (apellidoMaterno.empty() || apellidoMaterno == " ") {
            rfc += 'X';
        } else {
            rfc += toupper(apellidoMaterno[0]);
        }

        rfc += toupper(nombre[0]);

        rfc += anio.substr(2, 2);

        if (mes.length() == 1) {
            rfc += "0" + mes;
        } else {
            rfc += mes;
        }

        if (dia.length() == 1) {
            rfc += "0" + dia;
        } else {
            rfc += dia;
        }

        cout << "Tu RFC sin homoclave es: " << rfc << endl;
    }
};

int main() {
    string nom, apPat, apMat, d, m, a;

    cout << "Calculo de RFC" << endl;
    
    cout << "Introduce tu nombre: ";
    getline(cin, nom);
    
    cout << "Introduce tu apellido paterno: ";
    getline(cin, apPat);
    
    cout << "Introduce tu apellido materno (o escribe X si no tienes): ";
    getline(cin, apMat);
    
    cout << "Fecha de nacimiento (solo numeros)" << endl;
    cout << "Dia: ";
    getline(cin, d);
    
    cout << "Mes: ";
    getline(cin, m);
    
    cout << "Año: ";
    getline(cin, a);

    Empleado nuevoEmpleado(nom, apPat, apMat, d, m, a);

    nuevoEmpleado.calcularRFC();

    return 0;
}