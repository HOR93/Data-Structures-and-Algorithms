#include <iostream>
#include <list>

using namespace std;

class Lista{

	public:
		list<int> lista; // criando lista
        Lista(){

        };

		Lista(int Elemento){
			this->lista.push_back(Elemento); // ponteiro 
		}


void inserir_ultimo(int &Elemento){ // referencia para inserir na lista

    lista.push_back(Elemento);

}

void remover(int posicao){ // metodo para remover

    list<int>::iterator it;
	it = lista.begin();
	for (int i=0; i<posicao; i++){
		it++;
	}
	lista.erase (it);

}

void remover_elemento(int posicao){ // metodo para escolher onde no remover

cout << "qual posicao vai ser removida: " << endl;
cin >> posicao;
remover(posicao-1);

}

void inserir(int &Elemento){
int elemento;

cout << "digite o elemento que voce quer inserir: " << endl; // metodo para inserir
cin >> elemento;
inserir_ultimo(elemento); // declarando

}

void buscar(int elemento){

list<int>::iterator it;
	int i=1;
	for (it = lista.begin(); it!=lista.end(); it++){
		if (*it == elemento){ // ponteiro
			cout << "O elemento esta na posicao " << i << endl; 
			}
		i++;
	}

}

void mostrar(){

list<int>::iterator it;
	for (it = lista.begin(); it!=lista.end(); it++){ // imprimindo todas as variaveis
		cout << *it << "\t";
	}
	cout << endl;

}



};

int main(){
	int swt, elemento, posicao;
	Lista Lst;

	while(1){

	do{
	cout << "1. Inserir" << endl; // menu
	cout << "2. Remover" << endl;
	cout << "3. Buscar" << endl;
	cout << "4. Exibir" << endl;
    cout << "5. Sair" << endl;
	cin >> swt;
	}
	while(swt<0 || swt>5);

	switch(swt){
		case 1:
			Lst.inserir(elemento); // metodo inserir
			break;
		case 2:
			Lst.remover_elemento(posicao); // metodo remover
			break;
		case 3:
			cout << "Entre com o elemento a ser encontrado" << endl; // metodo busca
			cin >> elemento;
			Lst.buscar(elemento);
			break;
        case 4:
            cout <<"Os elementos: " << endl; // metodo imprimindo
            Lst.mostrar();
            break;
        case 5:    
		exit(5); // fim
			break;
	}
}

return 0;

}
