#include <iostream>
#include <list>
#include <string>

using namespace std;

class produtos_loja{ // classe trabalhos

	public:
    int n;
		list < string > lista_nome;
        list< int > lista_preco;

        produtos_loja(){

        };

		produtos_loja(string NOME, int PRECO){ // passando parametro para lista duplamente encadeada
			this->lista_nome.push_back(NOME);
            this->lista_preco.push_back(PRECO);
		}
        

void inserir_produto(string &NOME){ // referencias

    lista_nome.push_back(NOME);

}
void inserir_preco(int &PRECO){

    lista_preco.push_back(PRECO);

}


void remover(int posicao){ // usando iterator para remover na posicao desejada

    list< string >::iterator it;
	it = lista_nome.begin();

	for (int i=0; i<posicao; i++){
	it++;
	}
	lista_nome.erase (it);

}


void inserir(string nome_tema, int preco){
cout <<"quantos produtos gostaria de adicionar: ";
cin >> n;    
for (int i = 0; i<n; i++) {
cout << "|Digite o nome do produto "<< i+1 << " : "; 
cin >> nome_tema;
cout << "|Digite o valor do produto "<< i+1 << " : "; 
cin >> preco;
inserir_produto(nome_tema);
inserir_preco(preco);
 }

}



void remover_elemento(int posicao){

cout << "qual posicao esta o produto que voce deseja comprar: " << endl; // qual vai ser removido
cin >> posicao;
remover(posicao-1);

}

void buscar(string nome){ // buscar com iterator os temas

list<string>::iterator it;
	int i=1;
	for (it = lista_nome.begin(); it!=lista_nome.end(); it++){
		if (*it == nome){ 
			cout << "O tema esta na posicao " << i << " da lista" << endl; 
			}
		i++;
	}

}

void mostrar3(){ // imprimir todos os temas
string c;
int l;
int i = 0;
list< string >::iterator it;
list< int >::iterator it2;
  
   for (it = lista_nome.begin(), it2 = lista_preco.begin();  it!=lista_nome.end(), it2!=lista_preco.end();  it++, it2++, i++){ // i++ para o contador e marcando iniciando em 0
		cout << "Item " << i+1 << ": "<< *it << " $R " << *it2 <<" | ";
	 }
	cout << endl;


	/*for (it = lista_nome.begin(); it!=lista_nome.end(); it++){
		cout << *it <<"\t";
	}
	cout << endl;

	for (it2 = lista_preco.begin(); it2!=lista_preco.end(); it2++){
		cout << *it2 <<"\t";
	}
	cout << endl; */

  
}



};

int main(){
	int swt, posicao, desc;
    string nome, nome_tema;
	produtos_loja Lst;

	while(1){

	do{
	cout << "1. Incluir produtos" << endl; // menu de opções
	cout << "2. comprar Produto" << endl;
	cout << "3. Mostrar os produtos" << endl;
	cout << "4. Buscar um Produto" << endl;
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
            Lst.mostrar3(); 
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
