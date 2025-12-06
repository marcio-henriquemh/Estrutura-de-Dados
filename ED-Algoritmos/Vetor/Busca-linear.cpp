#include <iostream>
#include <limits>
#include <iomanip> // Incluído para formatação, se necessário

using namespace std;

int main() {
    int n, x; // n para o tamanho do vetor, x para o valor a ser buscado
    
    cout << "Informe o tamanho do vetor: " << endl;
    cin >> n;

    if (n <= 0) {
        cout << "O tamanho do vetor precisa ser um valor positivo." << endl;
        return 1; // Encerra o programa se o tamanho for inválido
    }

    int vet[n]; // Declara o vetor com o tamanho n (C99 feature, funciona na maioria dos compiladores)

    cout << "Informe os " << n << " elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> vet[i];
    }

    cout << "Digite o valor que deseja buscar no vetor: " << endl;
    cin >> x;

    bool encontrado = false;
    int indice_encontrado = -1;

    // Realiza a busca linear
    for (int i = 0; i < n; i++) {
        if (vet[i] == x) {
            encontrado = true;
            indice_encontrado = i;
            break; // Interrompe o loop assim que encontrar o primeiro elemento
        }
    }

    // Imprime o resultado da busca
    if (encontrado) {
        cout << "Valor " << x << " encontrado no indice: " << indice_encontrado << endl;
    } else {
        cout << "Valor " << x << " nao encontrado no vetor." << endl;
    }

    return 0;
}
