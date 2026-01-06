#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
    int valor, s, saldo;

public:
    void setValores(int, int);
    void setValores2(int);
    void setSaldo() {
        saldo = s;
    }
    int VerSaldo() {
        return saldo;
        }
    int Depositar() {
        return saldo += valor;

        }
    int Saque() {
        return saldo -= valor;

    }
};

void ContaBancaria::setValores(int v, int x) {
    valor = v;
    s = x;
}
void ContaBancaria::setValores2(int v) {
    valor = v;

}

int main()
{
    ContaBancaria Conta;
    int escolha=0, dep, saq;

    Conta.setValores(0, 0);
    Conta.setSaldo();

    while (escolha!=4)
    {
        cout << "Por favor, digite o número da opção que deseja executar!\n";
        cout << "\n1)Ver Saldo--------------\n";
        cout << "\n2)Depositar--------------\n";
        cout << "\n3)Sacar--------------\n";
        cout << "\n4)Sair--------------\n";
        cin >> escolha;
        switch (escolha)
        {
        case 1:
            cout << "O valor do seu saldo eh de: " << Conta.VerSaldo() << "\n\n\n";
            break;
        case 2:
            cout << "Digite o valor que quer depositar: \n";
            cin >> dep;
            Conta.setValores2(dep);
            cout << "O valor do seu saldo eh de: \n" << Conta.Depositar() << endl;
            break;
        case 3:
            cout << "Digite o valor que quer sacar: \n";
            cin >> saq;
            Conta.setValores2(saq);
            cout << "O valor do seu saldo eh de: \n" << Conta.Saque() << endl;

            break;
        case 4:
            cout << "\n------------Fim da operação------------\n";
            break;

        default:
            break;
        }

    }



}
