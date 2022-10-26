#include <iostream>
#include <stack>
#include <queue> // para o polindromo
#include <string>


using namespace std;

class texto{
public:

stack <string> frase;         // pilha frase
stack <char> frase_poli;      // pilha polindromo
queue <char> frase_poli2;     // fila para executar e comparar com pilha frase_poli para polindromo

void imprimir_inverso(string caractere){            // metodo para inverter frases
stack<char> txt;
    
for(int i = 0; i < caractere.length(); i++){ // passando a string pra pilha char
    txt.push(caractere[i]);
}

caractere = "";

while(!txt.empty()) {
    caractere = caractere + txt.top();      // concatenando todos os caracteres
    txt.pop();
   }
    cout << caractere; // imprimindo
}
