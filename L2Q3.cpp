#include <iostream>
#include <string>

using namespace std;

class pessoa{

private:    
string nome;
int idade;
float altura;

public:


void setnome(string n){   // set e get para atributos em private
    string nome = n;
}
string getnome (){
    return nome;
}
void setidade(int i){
    int idade = i;
}
int getidade (){
    return idade;
}
void setaltura(double a){
    double altura = a;
}
double getaltura (){
    return altura;
}
pessoa(){ // construtor
    nome = '\0';
    idade = 0;
    altura = 0.0;
}
~pessoa(){ // destruidor

}

pessoa(string anome, int aidade, double aaltura){ // construtor alternativo
    nome = anome;
    idade = aidade;
    altura = aaltura;
}

void cadastro(){
    cout << "-- REGISTRO-- " << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << "idade: ";
    cin >> idade;
    cout << "altura: ";
    cin >> altura;
}

void cadastro_imprimir(){
    cout << "-- REGISTRO-- " << endl;
    cout << "Nome: " << nome << endl;
    cout << "idade: " << idade << endl;
    cout << "altura: " << altura << endl;

}

};

class lista: public pessoa {
    public:
    string lista;
    void cadastro_lista(){
        cout << " nome da lista: " << endl;
        cin >> lista;

    }
    void imprimir_lista(){
    cout << " nome da lista: " << lista << endl;
    }

};

int main(){
    int i_idade, a_altura, n, j;
    string n_nome;
    pessoa cadastro[40];
    lista listagem[10];

    cout << " -- CADASTRO E LISTA -- " << endl;
    cout << "exemplo: " << endl;
    pessoa v1; // com construtor inciado em 0
    cout << v1.getnome() << endl;
    cout << v1.getidade() << endl;
    cout << v1.getaltura() << endl;
    cout << "exemplo: " << endl;
    pessoa v2("fred ", 39 ,1.94); // construtor alternativo
    cout << v2.getnome() << endl; 
    cout << v2.getidade() << endl;
    cout << v2.getaltura() << endl;
    cout << "exemplo: " << endl;
    pessoa v3("trajano ", 93 ,1.71); // construtor  alternativo
    cout << v3.getnome() << endl;
    cout << v3.getidade() << endl;
    cout << v3.getaltura() << endl;
    
    cout << "||quantas listas: ";        // cadastro lista
    cin >> j;
    for(int q = 0; q<j; q++){
    cout << "|| -- nome da lista: " << q+1 << endl;
    listagem[q].cadastro_lista();
    cout << "||quantas pessoas para registro nessa lista ? " << endl;
    cin >> n;
    for (int i = 0; i<n; i++){
    cout << "|| --  Dados pessoa: " << i+1 << endl;
    cadastro[i].cadastro();
    }
  }
    cout << endl;
    cout << "||REGISTRO" << endl;
    cout << "||quantas listas: " << j << endl;
    for(int q = 0; q<j; q++){
    cout << "|| -- Nome da lista: " << q+1 << endl;
    listagem[q].imprimir_lista();
    cout << "||quantas pessoas para registro nessa lista ? " << n << endl;
    for (int i = 0; i<n; i++){
    cout << "|| -- Dados pessoa: " << i+1 << endl;
    cadastro[i].cadastro_imprimir();
    }
  }
}
