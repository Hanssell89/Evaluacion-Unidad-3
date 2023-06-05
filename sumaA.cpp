#include <iostream>

using namespace std;

int sumarElementos(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int tam;
    cout << "Ingrese la cantidad de # del arreglo: ";
    cin >> tam;

    if (tam <= 0) {
        cout << "El arreglo está vacio." << endl;
        return 0;
    }

    int* arreglo = new int[tam];

    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < tam; i++) {
        cin >> arreglo[i];
    }

    int suma = sumarElementos(arreglo, tam);
    cout << "La suma de los elementos es: " << suma << endl;

    delete[] arreglo;
    return 0;
}
