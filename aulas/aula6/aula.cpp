#include <iostream>

using namespace std;

// Variaveis FORS de um Escopo é uma viriavel global
/**
int global = 10;
int sal = 0X521;
*/
int main() {
    //Aqui ou qualquer outra variavel dentro de um escopo é uma variavel LOCAL que NÃo podem ser acessadas por outra função
    /**
     * / Divisão
     * % Resto da divição
     * * Multiplicação
     * + Soma
     * - Subtração
     * () fazer essa operação primeiro
    */
    int result = 0;
    int valor1 = 35;
    int valor2 = 58;
    //int valor3 = 2;
    result = (valor1 + valor2) * 2 / 4;
    cout << "Esse foi o valor final da conta: " << result << endl;
    return 0;
}