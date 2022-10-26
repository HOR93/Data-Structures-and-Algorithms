#include <iostream>
#include <list>
#include <cstring>
#include <vector>

using namespace std;

class nomes {
public:

char aux1[10][10], aux2[10][10], aux3[10]; // chamando char para nomes para lista

 void inserir(int a, int b, int c, int i, int n){ // metodo para inserir os dados

   cout << "digite os nomes que voce desejar inserir na lista: " << endl; 
   for (i = 0; i < n; i++)
	cin >> aux1[i];
	for (i = 0; i < n; i++)
    cout << "Nomes antes da Ordenacao: " << aux1[i] << endl;

	strcpy(aux2[0], aux1[0]); // copiando de um para o outro
	for (a = 1; a<n; a++) {
		i = a-1;
		c = 1;
		strcpy(aux3, aux1[a]);
		while( c == 1) {
			if (strcmp(aux2[i], aux3) >=0) {
				i--;
				if(i == -1)
				c = 0;
			} else
		      c=0;
        } b = a;
	      while(b > i+1) {
		  strcpy(aux2[b], aux2[b-1]);
		  b--;
	}
	strcpy(aux2[i+1], aux3);
  }
}


void imprimir (int n){ // imprimindo

for (int i = 0; i<n; i++)
    cout << "Nomes depois da ordenacao, insert sortion: " << aux2[i] << endl;
  
}


};

int main (){
	int a, b, c, i, n, swt; // atributos

	nomes lst; // chamando a classe lista

	while(1){

	do{
	cout << "1. inserir nomes para antes da ordenacao" << endl; // menu de opções
	cout << "2. imprimir depois da ordenacao" << endl;
	cout << "3. Sair" << endl;
	cin >> swt;
	}
	while(swt<0 || swt>3);

	switch(swt){
		case 1:
		    cout << "QUANTOS nomes vai ser inserido ?" << endl; // metodos para inserir e fazer ordenacao
            cin >> n;
			lst.inserir(a, b, c, i, n);
			break;
		case 2:
			lst.imprimir(n); // imprimindo os metodos
			break;
		case 3:
		    exit(3);
		    break;
	}
}

}
