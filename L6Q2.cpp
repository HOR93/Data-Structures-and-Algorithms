#include <iostream>
#include <string>

using namespace std;


class quick_sort { // classe quick_sort
private:
int fim, meio;
char a, b;

public:

void set_fim(int f){ // passando atributos privados
    f = fim;
}
int get_fim(){
    return fim;
}
void set_meio(int m){
    m = meio;
}
int get_meio(){
    return meio;
}
void set_a(char _a){
    _a = a;
}
char get_a(){
    return a;
}
void set_b(char _b){
    _b = b;
}
char get_b(){
    return b;
}

void inserir (string& S){ // inserindo com referencia
  cout << "Digite a string: " << endl;
 cin >> S;  
}
void inversa(char& a, char& b) { // metodo para inversa
    char a_troca = a;
    char b_troca = b;

    a = b_troca;
    b = a_troca;
}


int particao(int fim, string& S, int meio) { // particao para o quick
    int i, j;
    char inicio = S[meio];
    i = fim-1;

    for (j=fim; j <=(meio-1); j++) {
        if (S[j] >= inicio) {
            i++;
            inversa(S[i], S[j]);
        }
    }
    inversa(S[i+1], S[meio]);

    return i+1;
}

void quick_ordena(int fim, string& S, int meio) { // metodo completo para ordenacao
    if (fim < meio) {
    int ordem = particao(fim, S, meio);

    quick_ordena(fim, S, ordem-1);
    quick_ordena(ordem+1, S, meio);
  }
}

};

int main() {
    quick_sort qs; // chamando objeto
    int p, r, ordem, swt;
    string s;
    while(1){
	do{
	cout << "1. inserir nome para antes da ordenacao" << endl; // menu de opções
	cout << "2. imprimir depois da ordenacao" << endl;
	cout << "3. Sair" << endl;
	cin >> swt;
	}
	while(swt<0 || swt>3);

	switch(swt){ // chamando os metodos
		case 1:
			qs.inserir(s);
			break;
		case 2:
			qs.quick_ordena(0, s, s.size());
            cout << "string ordenada: " << s << endl;
			break;
		case 3:
            cout << "saindo.." << endl;
		    exit(3);
		    break;
	}
  }
}
