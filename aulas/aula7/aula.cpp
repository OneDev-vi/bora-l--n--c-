#include <iostream>

using namespace std;

int main() {
    int n1,n2;
    n1 = 5;
    n2 = 8;
    cout << n1 << endl;
    cout << n2 << "\n\n";
    n1++; //pos
    n2++; //pos
    cout << n1 << endl;
    cout << n2 << "\n\n";
    //agora:
    //se for dessa forma ele(PC) vai primeiro imprimir o valor e depois acresentar
    cout << n1++ << endl;
    cout << n2++ << "\n\n";
    n1--;
    n2--;
    //Agora se for dessa forma ele(PC) vai primeiro ACRESENTAR mais 1 e depois emprimir o valor
    cout << ++n1 << endl;
    cout << ++n2 << "\n\n";

    /**
    outra formas são as de:
    n1 = n1 + 1;
    n1 += 10; esse daqui eu gosto desse jeito porcausa que você pode adicionar qualquer valor a variavel
    n2 -= 3;
    tambem da para fazer isso
    n1 *= 2;
    n2 /= 2;
    n3 %= 2;
    */
    return 0;
}