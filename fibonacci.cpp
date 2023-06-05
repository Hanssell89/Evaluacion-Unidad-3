#include <iostream>

using namespace std;

void fibonacciSequence(int n) {
    int first = 0, second = 1;
    

    if (n < 0) {
        cout << "No se puede generar la secuencia de Fibonacci para un numero negativo." << endl;
        return;
    }
    
    cout << first << " " << second << " ";
    
    for (int i = 2; i <= n; i++) {
        int next = first + second;
        cout << next << " ";
        
        first = second;
        second = next;
    }
    
    cout << endl;
}

int main() {
    int number;
    cout << "Ingrese un numero entero: ";
    cin >> number;
    
    fibonacciSequence(number);
    
    return 0;
}
