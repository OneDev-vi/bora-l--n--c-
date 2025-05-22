//variaveis e input do teclado
#include <iostream>

using namespace std;

int main() {
    //tops de Variaveis heeepyyyyy
    //essa partes eu ja sei mas estou recomeçando o estudo para verse não perdi nada
    int inteiros;
    float ponto;
    double pontos;
    bool VOrF;
    char s;
    string sal;
    char array[11]{};
    //e nessa parte quando você ver um array é porque eu ja estudei outras linguagens ate o mediano tipi C#
    //agora tira mão desse teclado!!
    cout << "dijite numero(s) inteiros para colocar na variavel\n";
    cin >> inteiros;
    cout << "djite um numero com ponto tipo:4.32\n";
    cin >> ponto;
    cout << "dijite um numero com mais duas casas de pois do ponto\n";
    cin >> pontos;
    cout << "Dijite um ou zero\n";
    cin >> VOrF;
    cout << "Dijite APENAS uma letra\n";
    cin >> s;
    cout << "Dijite qualquer coisa com mais de uma letra\n";
    cin >> sal;
    cout << "Dijite mais de uma vez qualquer coisa com MENOS de 10 caracteres\n";
    cin >> array;
    cout << "Esse são o valores que você atribuiu as variaveis\n";
    cout << inteiros << "\n" << ponto  << "\n" << pontos << "\n" << VOrF << "\n" << s << "\n" << sal << "\n" << array << endl;
}