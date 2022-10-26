#include <iostream>
#include <cmath>

using namespace std;

class vetor{
public:
int v[10], n, i, j, ordena, seq, bin, sent;

void enchervetor(){
   cout << "quantos vetores (ate 10): " << endl; // quantos vetores pelo usuario
   cin >> n;

for (int i = 0; i<n; i++){
   cout<<"Entre com o valor do elemento "<<(i+1) << ": ";
   cin >> v[i];
 }
 for(i=0;i<n;i++){		// ordenando em crescente
	for(j=i+1;j<n;j++){
	    if(v[i]>v[j]){
		ordena = v[i];
		v[i]=v[j];
		v[j]=ordena;
		}
	}
 }
	cout<<"Ordem crescente: " << endl;
	for(i=0;i<n;i++)
	cout<< v[i] << " ";
	cout<<endl;
 
}

void pesqseq(int valor){ // sequencial

int pesq=0;
  for(int i=0;i<n;i++) {
    seq++;
     if(valor == v[i]){
       cout<<"\nO elemento sequencial: |"<< valor <<"| esta na posicao "<< (i+1) <<" do vetor\n";
       pesq++;
     }
   }
   if(pesq == 0)
    cout<<"O elemento "<< valor <<" nao existe no vetor" << ", retornando: " << -1 << endl;

}

int pesqbin(int valor2) { // binaria

int primeiro = 0;
    int ultimo = n-1;
    int meio = (primeiro + ultimo)/2;
    bin = meio;
    while(primeiro <= ultimo) {
      if(v[meio] < valor2)
        primeiro = meio+1;
      else if(v[meio] == valor2) {
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
int ultimo = v[n-1];                                                                                                                         
v[n-1] = valor3;   
int i = 0;                  
while(v[i]!=valor3){
    i++;
  sent = i;  
}
v[n-1] = ultimo;
if( (i < n-1) || (valor3 == v[n-1]) ) {
    cout<<"O elemento sentinela: |"<< valor3 << "| esta na posicao " << i+1 << endl;
}
else { 
    cout <<"O elemento sentinela |"<< valor3 <<"| nao existe no vetor" << ", retornando: " << -1 << endl;                                     
  }
}

void interacao(){ // void para contagem de interaçoes
  cout << "sequencial: " << seq << endl;
  cout << "Binaria: " << bin << endl;
  cout << "sentinela: " << sent << endl;
  if (seq < bin && seq < sent)
  cout << "--- sequencia tem o menor numero de pesquisas" << endl;
  else if (bin < seq && bin < sent)
  cout << "--- binaria tem o menor numero de pesquisas" << endl;
  else if (sent < seq && sent < bin)
  cout << "--- Sentinela tem o menor numero de pesquisas" << endl;
  else if (seq > bin && seq > sent)
  cout << "--- sequencial tem o maior numero de pesquisas" << endl;
  else if (bin > seq && bin > sent)
  cout << "--- binaria tem o maior numero de pesquisas" << endl;
  else if (sent > seq && sent > bin)
  cout << "--- Sentinela tem o maior numero de pesquisas" << endl;
}

};

int main (){
  int valor, valor2, valor3;
    vetor vector;
    vector.enchervetor();
        cout << "--- Qual valor na pesquisa sequencial quer encontrar ? " << endl; // pesquisa sentinela
        cin >> valor; 
        cout << endl;
        vector.pesqseq(valor);


        cout << "--- Qual valor na pesquisa binaria quer encontrar ? " << endl; // pesquisa sentinela
        cin >> valor2; 
        cout << endl;
        vector.pesqbin(valor2);  

        cout << "--- Qual valor na pesquisa sentinela quer encontrar ? " << endl; // pesquisa sentinela
        cin >> valor3; 
        cout << endl;
        vector.pesqsent(valor3);

        vector.interacao();  // quantas interacoes feitas                   

}
