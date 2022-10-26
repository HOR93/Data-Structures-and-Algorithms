#include <iostream>
#include <list>

using namespace std;

class listas{ // class lista para executar o programa
public:

list<int> lis1, lis2;
int swt2, inteiro, inteiro2;

void criarlista (int tamanho, int valor, int tamanho2, int valor2){ // criando as listas 1 e 2
    int valor3;
cout << "----tamanho da lista 1: ";
cin >> tamanho;
for (int i = 0; i<tamanho; i++){
    cout << "---Inteiros da lista 1: " << endl;
    cin >> valor;
    lis1.push_back(valor);
   }

cout << "\n----tamanho da lista 2: ";       
cin >> tamanho2;
for (int j = 0; j<tamanho2; j++){
    cout << "---Inteiros da lista 2: " << endl;
    cin >> valor2;
    lis2.push_back(valor2);
   }
   cout << "gostaria de adicionar um inteiro extra na lista igual ? " << endl; // se gostaria de adicionar mais
   cout << "(1) SIM lista 1 -- (2) SIM lista 2 -- (3) NÃO " << endl;
   cin >> swt2;
   switch(swt2){
       case 1:
       if(swt2 == 1){
           cout << "qual valor ? " << endl;
           cin >> valor3;
           adicionar_inteiro_lista1(valor3, tamanho);
           break;
       }
       case 2:
       if(valor3 == 2){
           cout << "qual valor ? " << endl;
           cin >> valor3;
           adicionar_inteiro_lista2(valor3, tamanho);
           break;
       }
       case 3:
       if(valor3 == 3){
           (exit);
           break;
       }
   }
}


void adicionar_inteiro_lista1(int valor3, int tamanho){ // metodo para adicionar na lista 1
    cout << "posicao ? " << endl;
    cin >> tamanho;

    list<int>::iterator it; // interator para integrar qual posição

	it = lis1.begin();
	for (int i=0; i<tamanho-1; i++){
		it++;
	}
	lis1.emplace(it,valor3);
}
void adicionar_inteiro_lista2(int valor3, int tamanho){ // metodo para adicionar na lista 12
    cout << "posicao ? " << endl;
    cin >> tamanho;

    list<int>::iterator it;

	it = lis2.begin();
	for (int i=0; i<tamanho-1; i++){
		it++;
	}
	lis2.emplace(it,valor3);
}

void verificar(){                       // metodo verificar

for (int i = 0; !lis1.empty(); i++) {
    cout << endl;
    cout << "---lista 1 verificada: " << endl;
    cout << lis1.front() << "\n";
    lis1.pop_front();
    }

for (int i = 0; !lis2.empty(); i++) {
    cout << endl;
    cout << "---lista 2 verificada: " << endl;
    cout << lis2.front() << "\n";
    lis2.pop_front();
    }

}

void ordenar(){                         // metodo para ordenar as listas

lis1.sort();
for (int i = 0; !lis1.empty(); i++) {
    cout << "---lista 1 ordenada: " << endl;
    cout << lis1.front() << "\n";
    lis1.pop_front();
    }

lis2.sort();
for (int i = 0; !lis2.empty(); i++) {
    cout << "---lista 2 ordenada: " << endl;
    cout << lis2.front() << "\n";
    lis2.pop_front();
    }  
}

void mesclar(){           // metodo para mesclar

lis2.merge(lis1);
lis1.sort();

for (int i = 0; !lis1.empty(); i++) {
    cout << endl;
    cout << lis1.front() << "\n";
    lis1.pop_front();
    }

lis2.sort();
for (int i = 0; !lis2.empty(); i++) {
    cout << endl;
    cout << lis2.front() << "\n";
    lis2.pop_front();
    }

}



};

int main(){
    int swt, tamanho, valor, verif, tamanho2, valor2, p, n;
    listas lis;

    lis.criarlista(tamanho, valor, tamanho2, valor2);

    do{
        cout << "\n------Escolha apenas uma opção--------" << endl; // switch para uma escolha
		cout << "\n1 - verificar listas" << endl;    
		cout << "\n2 - ordenar listas" << endl;
		cout << "\n3 - mesclar listas" << endl;
		cout << "\n4 - Sair" << endl;
		cin >> swt;
		switch(swt){
			case 1:{
                lis.verificar();
				break;
			}
			case 2:{
                lis.ordenar();
				break;
			}
			case 3:{
                lis.mesclar();
				break;
			}
			case 4:{                            
               cout << "saindo.." << endl;
               exit(4);
				break;
			}
		}
		
	}while(swt !=4);

    system("pause");
    return 0;
}
