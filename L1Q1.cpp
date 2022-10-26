#include <iostream>
#include <string>

using namespace std;


class agendat{                                       // agenda telefonica com string em privado
    private:
    string nome;

    public:                                       // e numero em publico
    int numero;

    void setnome(string _nome);
    string getnome();
    void setnumero(int _numero);
    int getnumero();

};

void agendat::setnome(string _nome){                     // declarações em set e get
    nome = _nome;
}
string agendat::getnome(){
    return nome;
}
void agendat::setnumero(int _numero){
numero = _numero;
}
int agendat::getnumero(){
return numero;
}

int main(){
    agendat agenda;                                                    // agenda telefonica determinando numero e nome
    
    cout <<"|| Agenda telefonica ||" << endl;
    cout << "Primeiro nome da lista:\n";
    agenda.setnome ("Henrique O.R");
    cout<< "Nome: " << agenda.getnome() << endl;
    agenda.setnumero (994323449);
    cout<< "numero: " << agenda.getnumero() << endl;
    agenda.setnome ("Julio Cesar");
    cout<< "Nome: " << agenda.getnome() << endl;
    agenda.setnumero (994323345);
    cout<< "numero: " << agenda.getnumero() << endl;
    agenda.setnome ("Augusto");
    cout<< "Nome: " << agenda.getnome() << endl;
    agenda.setnumero (994323412);
    cout<< "numero: " << agenda.getnumero() << endl;
    agenda.setnome ("Trajano");
    cout<< "Nome: " << agenda.getnome() << endl;
    agenda.setnumero (994323423);
    cout<< "numero: " << agenda.getnumero() << endl;
    agenda.setnome ("Calígula");
    cout<< "Nome: " << agenda.getnome() << endl;
    agenda.setnumero (994323403);
    cout<< "numero: " << agenda.getnumero() << endl;
    
    
}
