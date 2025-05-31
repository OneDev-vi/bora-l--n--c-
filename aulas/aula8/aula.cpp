#include <iostream>

using namespace std;

#define limite 1000000000

int main() {
    int sal = 0;
    inicio:
    //eu já sei usar o if else e else if mas va né
    /**
    se (Teste Lógico)
    {
        se for igual a verdadeiro ou 1 esse bloco de codigo vai ser executado
    } senão {
        se a operação de cima for falso ou 0 vai pular o bloco do se para executar esse bloco
    }
    operadores logico
    < (menor), > (Maior) ,<= (Menor ou Igual), >= (Maior ou Igual), == (Igualdade) , != (Diferença)
    */
    if (sal < limite) {
        sal += 25555555;
        cout << sal << endl;
        goto inicio; //eu ja sabia isso porcausa do C# mas nessa aula não é mostrado isso
    }  else {
        cout << "Fim do programa" << endl;
    }
    return 0;
}
