#include <iostream>
#include <stdlib.h> // para manipulação de memoria e erros. siceramente eu gostei dessa biblioteca

using namespace std;

int main() {
    int n1,n2,res;
    char opc;
    sal:
    system("clear"); //para limpar a tela do terminal no linux não sei se o cls aria funcionar no linux
    cout << "digite a nota do aluno" << endl;
    cin >> n1;
    cout << "Dijite a nota do aluno 2" << endl;
    cin >> n2;
    res = n1 + n2;
    res /= 2;
    if (res >= 70) { // na Minha escola a nota que tem que tirar para não ficar de recuperação tem que tirar no minimo 7 ou 70
        cout << "Parabens! Vocẽ tirou a nota: ";
        cout << res << "\n\n";
    } else if (res >= 60) {
        cout << "Muito Bem e sua nota foi: ";
        cout << res << "\n\n";
    } else if (res >= 40) {
        cout << "Você não foi Muito bem: ";
        cout << res << "\n\n";
    } else {
        cout << "Você si fudeu: ";
        cout << res << "\n\n";
    }
    cout << "Você quer fazer denovo a prova?? Digite s para sim e n para não" << endl;
    cin >> opc;
    if (opc == 's' or opc == 'S') {
        goto sal;
    } else if (opc == 'n' or opc == 'N') {
        cout << "Valeu falou" << "\n\n";
        exit(EXIT_SUCCESS);
    }
    return 0;
}