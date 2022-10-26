#include <iostream>
#define carro 100
#define size 3

using namespace std;

class Carros {                                       // classe carros em private, e declarações
    private:

    char letras[size];
    string  nome, marca, cor;
    int   telefone, placa;

    public:

    void pegacadastro(void);         
    void imprimicadastrocarro(void);
};
 
void Carros::pegacadastro(void){                                       //escolha do usuario cadastro
    cout << "Nome: " ;
    cin >> nome;
    cout << "telefone: ";
    cin >> telefone;
    cout << "marca: ";
    cin >> marca;
    cout << "placa do carro: 3 letras (espaço) 3 digitos: ";
    cin >> letras >> placa;
    cout << "cor: ";
    cin >> cor;
}
 
void Carros::imprimicadastrocarro(void){                             // imprimir os dados

    cout << "| Nome : "<< nome << endl;
    cout << "| telefone:: " << telefone << endl;
    cout << "| marca: " << marca << endl;
    cout << "| placa: " << letras << "-" << placa << endl;                // placa usando string e char para separar corretamente em 3 char
    cout << "| cor: " << cor << endl;
}
 
int main() {
    Carros garagem[carro];                                      // limite do numero de carros em define
    int n, i;
     
    cout << "Quantos clientes ? ";
    cin >> n;
     
    for(i=0; i< n; i++){
        cout << "\nCliente " << i+1 << ":\n";
        garagem[i].pegacadastro();
        
    }

    for(i=0; i< n; i++){
        cout << "\nCadastro do Cliente: " << i+1 << " - com marca, placa e cor:" <<"\n";
        garagem[i].imprimicadastrocarro();
    }

    return 0;
}
