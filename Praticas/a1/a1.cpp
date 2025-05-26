#include <iostream>

using namespace std;

int main() {
    int valor;
    int valor2;
    int res;
    cout << "Dijite um valor" << endl;
    cin >> valor;
    cout << "Dijite outro valor" << endl;
    cin >> valor2;
    res = valor + valor2;
    cout << "Essa foi a soma dos valores: " << res << endl;
    return 0;
}