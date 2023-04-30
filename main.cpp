#include <iostream>

using namespace std;

int main() {
    int n1, n2, op = 0;

    cout << "Bem vindo!" << endl;
    cout << "Por favor, informe o primeiro numero: " << endl;
    cin >> n1;
    cout << "Agora, informe o segundo numero: " << endl;
    cin >> n2;

    cout << "Qual operacao voce deseja fazer?" << endl;
    cout << "===============================" << endl;
    cout << "==     1 - Soma              ==" << endl;
    cout << "==     2 - Subtracao         ==" << endl;
    cout << "==     3 - Multiplicacao     ==" << endl;
    cout << "==     4 - Divisao           ==" << endl;
    cout << "==     5 - Resto da Divisao  ==" << endl;
    cout << "===============================" << endl;
    cin >> op;

    switch (op) {
        case 1:
            cout << "A soma e igual a: " << n1 + n2 << endl;
            break;
        case 2:
            cout << "A subtracao e igual a: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "A multiplicacao e igual a: " << n1 * n2 << endl;
            break;
        case 4:
            cout << "A divisao e igual a: " << n1 / n2 << endl;
            break;
        case 5:
            cout << "O resto da divisao e igual a: " << n1 % n2 << endl;
            break;
        default:
            cout << "Opcao nao encontrada, tente novamente!" << endl;
            break;
    }
}