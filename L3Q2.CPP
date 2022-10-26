
#include <iostream>
#include <cmath>

using namespace std;

class vetor{ // iniciando em publico a classe
public:
int X[50], vetor, n, i, j, encher, ordena, seq, bin, sent;

void preenchervetor(){
   cout << "quantos vetores (ate 50): " << endl;
   cin >> vetor;


for (int n = 0; n<vetor; n++){
cout<<"Entre com o valor do elemento "<<(n+1) << ": ";
cin >> X[n];
 }
for(n=0;n<vetor;n++){		
	for(j=n+1;j<vetor;j++){
	    if(X[n]<X[j]){
		ordena = X[n];
		X[n]=X[j];
		X[j]=ordena;
		}
	}
 }
	cout<<"Ordem decrescente: " << endl; // ordem decrescente
	for(n=0; n<vetor; n++)
	cout<< X[n] << " ";
	cout<<endl; 
}

void pesqseq(int valor){ // sequencial

int pesq=0;
  for(int n=0; n<vetor; n++) { // pesquisando cada vetor
    seq++;
     if(valor == X[n]){
       cout<<"\nO elemento sequencial: |"<< valor <<"| esta na posicao "<< (n+1) <<" do vetor\n";
       pesq++;
     }
   }
   if(pesq == 0)
    cout<<"O elemento "<< valor <<" nao existe no vetor" << ", retornando: " << -1 << endl;

}

int pesqbin(int valor2) { // binaria

int primeiro = 0;
    int ultimo = vetor-1;
    int meio = (primeiro + ultimo)/2; // separando primeiro, meio e ultimo
    bin = meio;
    while(primeiro <= ultimo) {
      if(X[meio] < valor2)
        primeiro = meio+1;
      else if(X[meio] == valor2) {
        cout<<"O elemento Binario |"<< valor2 <<"| esta na posicao "<< meio+1 << " do vetor" << endl;
        break;
      } else
        ultimo = meio-1;
        meio = (primeiro+ultimo)/2;
    } if(primeiro > ultimo)
        cout <<"O elemento Binario |"<< valor2 <<"| nao existe no vetor" << ", retornando: " << -1 << endl;
    cout << endl;

}

int pesqsent(int valor3){ // sentinela
int ultimo = X[vetor-1];                                                                                                                         
X[vetor-1] = valor3;   
int n = 0;                  
while(X[n]!=valor3){
    n++;
  sent = n;  
}
X[vetor-1] = ultimo;
if( (n < vetor-1) || (valor3 == X[vetor-1]) ) {
    cout<<"O elemento sentinela: |"<< valor3 << "| esta na posicao " << n+1 << endl;
}
else { 
    cout <<"O elemento sentinela |"<< valor3 <<"| nao existe no vetor" << ", retornando: " << -1 << endl;                                     
  }
}

void interacao(){ // voids para contagem de interaçoes
cout << "sequencial teve: " << seq << " pesquisas" << endl;
}
void interacao2(){
cout << "Binaria: " << bin << " pesquisas" << endl;
}

void interacao3(){
cout << "sentinela: " << sent << " pesquisas" << endl;
}

};

int main (){
	int valor, valor2, valor3, e;
    vetor vector;
    vector.preenchervetor(); // escolhendo qual vai ser feita
	cout << "escolha qual busca vai ser feita: (1) sequencial (2) binaria (3) sentinela " << endl;
	cin >> e;
	if (e == 1){
		cout << "--- Qual valor na pesquisa sequencial quer encontrar ? " << endl; // pesquisa sequencial
        cin >> valor; 
        cout << endl;
        vector.pesqseq(valor);
		vector.interacao(); // retornado para determinar quantas interações
	} else if (e == 2){
		cout << "--- Qual valor na pesquisa binaria quer encontrar ? " << endl; // pesquisa binaria
        cin >> valor2; 
        cout << endl;
        vector.pesqbin(valor2);
		vector.interacao2();  // retornado para determinar quantas interações
	} else if (e == 3){
		cout << "--- Qual valor na pesquisa sentinela quer encontrar ? " << endl; // pesquisa sentinela
        cin >> valor3; 
        cout << endl;
        vector.pesqsent(valor3);
		vector.interacao3();
	} // retornado para determinar quantas interações

	return 0;
