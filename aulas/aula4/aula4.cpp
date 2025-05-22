//variaveis e input do teclado
#include <iostream>

using namespace std;

int main() {
    //tops de Variaveis heeepyyyyy
    //essa partes eu ja sei mas estou recomeçando o estudo para verse não perdi nada
    int inteiros = 10;
    float ponto = 10.32;
    double pontos = 10.3245690;
    bool VOrF = 0;
    char s = 'a';
    string sal = "Manga com sal é bom";
    cout << inteiros << "\n" << ponto  << "\n" << pontos << "\n" << VOrF << " = false" << "\n" << s << "\n" << sal << endl;
    //e nessa parte quando você ver um array é porque eu ja estudei outras linguagens ate o mediano tipi C#
    char array[11]{"sal é bom"};
    cout << array << endl;
    //agora tira mão de teclado!!
    int manga = 0;
    cout << "Dijite algum Numero!!" << endl;
    cin >> manga;
    cout << "esse foi o numero que você digitol: " << manga << endl;
}