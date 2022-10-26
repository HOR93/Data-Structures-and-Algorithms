#include <iostream>
#include <cmath>

using namespace std;

class complexo {                                                             // inicio da classe publico
    float real, imaginario, realb, imaginariob, mult1, mult2, div1, div2;

public:

    void valores() {                                                            // void para escolha do usuario de valor real e imaginario
        cout << "entre valor real (A): ";
        cin >> real;
        cout << "entre valor imaginario (A): ";
        cin >> imaginario;
        cout << "entre valor real (B): ";
        cin >> realb;
        cout << "entre valor imaginario (B): ";
        cin >> imaginariob;
    }
    float add() {                                                                   // float retornando uma adição

     cout << (real+realb) << "+" << (imaginario+imaginariob) << "i" << endl;

    }
    float sub() {                                                                 // float subtração

        cout << (real-realb) << "+" << (imaginario-imaginariob) << "i" << endl;
    }
    float mul() {                                                                 // float mutiplicação
        mult1 = real * realb - imaginario * imaginariob;
        mult2 = real * realb + imaginario * imaginariob;

        cout << mult1 << "+" << mult2 << "i" << endl;
    }
    float div() {                                                                 // float divisão

    div1=(((real)*(realb))+((imaginario)*(imaginariob)))/(pow(realb,2)+pow(imaginariob,2));
    div2=(((realb)*(imaginario))-((real)*(imaginariob)))/(pow(realb,2)+pow(imaginariob,2));

    cout << div1 << " + " << div2 << "i" << endl;       
    }
};
int main() {
    int n;

    complexo calculadora;                                    // main com escolha para qual das alternativas devem ser escolhidas
    cout << "1 para Adicao"
        << "\n2 para Subtracao"
        << "\n3 Mutilplicacao"
        << "\n4 Divisao"
        << "\n5 para sair"
        << "\n";
    do {
        cout << "\nEscolha uma das alternativas: ";
        cin >> n;
        switch (n) {
        case 1:
            calculadora.valores();
            cout << "\nO valor vai ser: " << calculadora.add() << endl;                       // atribuindo  add
            break;
        case 2:
            calculadora.valores();
            cout << "\nO valor vai ser: " << calculadora.sub() << endl;                      // atribuindo  sub
            break;
        case 3:
            calculadora.valores();
            cout << "\nO valor vai ser: " << calculadora.mul() << endl;                       // atribuindo mult
            break;
        case 4:
            calculadora.valores();
            cout << "\nO valor vai ser: " << calculadora.div() << endl;                     //// atribuindo div
            break;  
        }
    } while (n<= 4);
    return 0;
}
