#include <iostream>
#include <set>

using namespace std;


int main(){ // arvore usando biblioteca set
	int n, m, idade;
    string nome, raca, nome2, raca2, continuar;

	set<string> petshop_1, petshop_2; // arvore para os petshops

	while(1){

	do{
		cout << "1. Cadastrar: " << endl; // menu de opções
		cout << "2. Procurar Pet por nome" << endl;
		cout << "3. ordenar petshop" << endl;
		cout << "4. sair" << endl;
		cin >> n;		
	}while(n<0 || n>4);
	
	switch(n){
		case 1:
            cout << "escolha o petshop (1) Salsichinhas to glory ou (2) gatos e autopecas ltda" << endl;
            cin >> m;
            if ( m == 1) { // determinando em qual petshop o usuario quer
            cout << "Salsichinhas to glory: " << endl;    
            cout << "Entre informacao basicas do cachorro ou gato: " << endl;
            cout << "nome do pet: " << endl; // com  informações do nome e raça
			cin >> nome;
            cout << "raca do pet: " << endl;
            cin >> raca;
			petshop_1.insert(nome);
            petshop_1.insert(raca);  
            }
            if ( m == 2) {
            cout << "gatos e autopecas ltda: " << endl;    
            cout << "Entre informacao basicas do cachorro ou gato:" << endl;
            cout << "nome do pet: " << endl;
			cin >> nome2;
            cout << "raca do pet: " << endl;
            cin >> raca2;
			petshop_2.insert(nome2); 
            petshop_2.insert(raca2);   
            }
			break;

		case 2:
            cout << "escolha o petshop (1) Salsichinhas to glory ou (2) super miau" << endl;
            cin >> m;
            if ( m == 1) {
            cout << "Salsichinhas to glory: " << endl;    
			cout << "Pesquisa o pet pelo nome: " << endl; // pesquisa feita 
			cin >> nome;
			if (petshop_1.find(nome)!=petshop_1.end()){
				cout << "O " << nome << " esta no petshop" << endl;
			}
			else{
				cout << "O " << nome << " não esta no petshop" << endl;
			  }
            }
            if ( m == 2) {
            cout << "gatos e autopecas ltda: " << endl;    
			cout << "Pesquisa o pet pelo nome: " << endl;
			cin >> nome2;
			if (petshop_2.find(nome2)!=petshop_2.end()){
				cout << "O " << nome2 << " esta no petshop" << endl;
			}
			else{
				cout << "O " << nome2 << " nao esta no petshop" << endl;
			  }
            }
			break;

		case 3:
            cout << "escolha o petshop (1) Salsichinhas to glory ou (2) super miau" << endl;
            cin >> m;
            if ( m == 1) {
            cout << "Salsichinhas to glory: " << endl; // fazendo ordenação
            cout << endl;
			for(set<string>::iterator it = petshop_1.begin(); it!=petshop_1.end(); it++){
				cout << *it << "| |";
			 }
            }
            if ( m == 2) {
            cout << "gatos e autopecas ltda: " << endl;    
			cout << endl;
            for(set<string>::iterator it2 = petshop_2.begin(); it2!=petshop_2.end(); it2++){
				cout << *it2 << "| |";
			 }
            }
			break;
        case 4:
        exit(4);   
			return 0;
	}
};
	return 0;
	
	
}
