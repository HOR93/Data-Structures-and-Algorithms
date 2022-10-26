#include <iostream>
#include <list>
#include <string>

using namespace std;

class trabalhos{ // classe trabalhos

	public:
		list < string > lista, lista_descricao; // 2 listas

        trabalhos(){

        };

		trabalhos(string NOME){ // passando parametro para lista duplamente encadeada
			this->lista.push_back(NOME);
		}


void inserir_ultimo(string &NOME){ // referencias

    lista.push_back(NOME);

}
void inserir_ultimo2(string &DESC){

    lista_descricao.push_back(DESC);

}


void remover(int posicao){ // usando iterator para remover na posicao desejada

    list< string >::iterator it;
	it = lista.begin();

	for (int i=0; i<posicao; i++){
	it++;
	}
	lista.erase (it);

}


void inserir(string nome_tema, string desc){

cout << "digite o nome do tema que voce quer inserir: " << endl; // tema e descricao
cin >> nome_tema;
cout << "digite a descricao do tema: " << endl;
cin.ignore();
getline(cin, desc);
inserir_ultimo(nome_tema);
inserir_ultimo2(desc);

}



void remover_elemento(int posicao){

cout << "qual tema na posicao vai ser removida: " << endl; // qual vai ser removido
cin >> posicao;
remover(posicao-1);

}

void buscar(string nome){ // buscar com iterator os temas

list<string>::iterator it;
	int i=1;
	for (it = lista.begin(); it!=lista.end(); it++){
		if (*it == nome){ 
			cout << "O tema esta na posicao " << i << " da lista" << endl; 
			}
		i++;
	}

}

void mostrar3(){ // imprimir todos os temas

list< string >::iterator it;
	for (it = lista.begin(); it!=lista.end(); it++){
		cout << *it << "\t";
	}
	cout << endl;

}

void mostrar1(){ // imprimir tema e descrição começo

cout << lista.front() << endl;
cout << lista_descricao.front() << endl;
}

void mostrar2(){ // imprimir tema e descrição final

cout << lista.back() << endl;
cout << lista_descricao.back() << endl;
}



};

int main(){
	int swt, posicao;
    string nome, nome_tema,desc;
	trabalhos Lst;

	while(1){

	do{
	cout << "1. Incluir um tema" << endl; // menu de opções
	cout << "2. Remover um tema" << endl;
	cout << "3. Navegas pelos temas" << endl;
	cout << "4. pesquisar tema" << endl;
    cout << "5. Sair" << endl;
	cin >> swt;
	}
	while(swt<0 || swt>5);

	switch(swt){
		case 1:
			Lst.inserir(nome, desc);
			break;
		case 2:
			Lst.remover_elemento(posicao);
			break;
		case 3:
            int gostaria;
            cout <<"Qual tema gostaria de ver ? primeiro(1) ou ultimo(2) ou todos(3)" << endl; // dinamica para ver qual
            cin >> gostaria;
            if (gostaria == 1){
               cout <<"Os temas: " << endl;
            Lst.mostrar1(); 
            } else if ( gostaria == 2) {
            cout <<"Os temas: " << endl;
            Lst.mostrar2(); 
            } else if (gostaria == 3) {
               cout <<"Os temas: " << endl;
            Lst.mostrar3(); 
            }
            break;
        case 4:
            cout << "Entre com o nome do tema a ser encontrado" << endl;
			cin >> nome;
			Lst.buscar(nome);
			break;
        case 5:    
		exit(5);
			break;
	}
} // fim do programa

return 0;

}
