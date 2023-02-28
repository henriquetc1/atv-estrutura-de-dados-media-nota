//Programa pada Média A1 e A2//
//Henrique Tenório - S.I Ciclo 2, Fatec Rubens Lara//

//aqui abaixo vai executar o código ae
#include <iostream>
using namespace std;
int main()
{
    cout << "Programa Calculador Média\n" << endl;
    cout << "================\n" << endl;

    string nome = "";
    int A1 = 0;
    int A2 = 0;

    cout << "Bem vindo ao Sistema de Avaliação\n" << endl;
    cout << "Aqui iremos avaliar a média com base na nota da sua A1 e A2.\n" << endl;
    cout << "================\n" << endl;
    
    cout << "Digite seu nome:" << endl;
    cin >> nome;
    
    cout << "\n" << endl;

    cout << "Qto tirou na A1?" << endl;
    cin >> A1;

    cout << "\n" << endl;

    cout << "Qto tirou na A2?" << endl;
    cin >> A2;

    int media = (A1 + A2) / 2;

    if (media >= 6) {
        cout << nome << endl;
        cout << "Sua média final foi de: " + media << endl;
        cout << "\n" << endl;
        cout << "Você está aprovado! Fica em paz" << endl;
    }

    else {
        cout << nome << endl;
        cout << "Sua média final foi de: " + media << endl;
        cout << "\n" << endl;
        cout << "Você está reprovado, estude mais seu imbecil" << endl;
    }
}