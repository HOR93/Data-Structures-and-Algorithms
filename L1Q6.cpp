#include <iostream>
#define max 4

using namespace std;

class sangue {

    private:
    char ts;
    string  nome;
    int  telefone, idade, universal;
    
    public:

    void pegadoador(void);
    void imprimirdoador(void);

};
 
void sangue::pegadoador(void){                          // void para escolha do usuario 
    cout << "Nome: " ;
    cin >> nome;
    cout << "telefone: ";
    cin >> telefone;
    cout << "idade: ";
    cin >> idade;
    cout << "tipo sanguineo:  1 para A+ | 2 para A- |  3 para B+ | 4 para B- | 5 para AB+ | 6 para AB- | 7 para O+ | 8 para O-:  ";   // tipo sanguineo
    cin >> ts;
       
}
 
void sangue::imprimirdoador(void){                          // void para imprimir a escolha do usuario

    cout << "Nome : "<< nome << endl;
    cout << "telefone: " << telefone << endl;
    cout << "idade: " << idade << endl;
    cout << "tipo sanguineo: " << ts << endl;            // elemento pegando o numero em get e alocando para um switch 
    switch(ts) {                          
    case '1': 
    if (ts == '1') {
        cout << "| A+ |doa para A+ e AB+" << endl;
    }
    
    case '2':
    if (ts == '2') {
        cout << "| A- | doa para A+, AB+, A-, AB-" << endl;
    }
    
    case '3':
    if (ts == '3') {
        cout << "||  B+  || Doa para B+ e AB+" << endl;
    }
    case '4':
    if (ts == '4') {
        cout << "||  B-  || Doa para B+, AB+, B-, AB-" << endl;
    } 
    case '5':
    if (ts == '5') {
        cout << "||  AB+  || Doa para AB+" << endl;
    }
    case '6':
    if (ts == '6') {
        cout << "||  AB-  || Doa para AB+ e AB-" << endl;
    }
    case '7':
    if (ts == '7') {
        cout << "||  O+   || Doa para O+, A+, B+, AB+" << endl;
    }
    case '8':
    if (ts == '8') {
        cout << " ----------------------" << endl;
        cout << "[   DOADOR UNIVERSAL   ]" << endl;
        cout << " ----------------------" << endl;
        cout << "||  O-  || Doa para O+, A+, B+, AB+, A-, B-, AB-, O-" << endl;
    }

    }   
}

 
int main() {
    sangue doadores[100];
    int n, i;
     
    cout << "quantos doadores ? ";
    cin >> n;
     
    for(i=0; i< n; i++){
        cout << "\nDoador " << i+1 << ":\n";        // escolha do usuario
        doadores[i].pegadoador();
    } 

    for(i=0; i< n; i++){
        cout << "\n----------------------";
        cout << "\nDetalhes do Doador " << i+1 <<":\n"; // imprimindo cadastro dos usuarios e determinando qual é doador universal
        doadores[i].imprimirdoador();
    }


    return 0;
}
