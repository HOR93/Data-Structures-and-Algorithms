#include <iostream>
#include <string>

using namespace std;

class funcionario {
    private:  
        char nome[30];
        int  salario, data, salarion;
    public:
    char departamento_n[30], departamento_n2[30]; // usando em departamento
    char empresa_n[30], cnpj[30]; // usando em empresa

    void setnome(char n[]){  // set and getters para atributos privados
        nome[30] = n[30];
    }
    char getnome(){
        return nome[30];
    }
    void setsalario(int s){
        salario = s;
    }
    int getsalario(){
        return salario;
    }
    void setsalarion(int sn){
        salarion = sn;
    }
    int getsalarion(){
        return salarion/10+salarion;
    }
    void setsdata(int d){
        data = d;
    }
    int getdata(){
        return data;
    }
    


        void informar1() {         // pegando os atributos e transferindo para escolha do usuario
            cout << "||Nome: "; 
            cin >> nome;     
            cout << "||Salario: ";
            cin  >> salario;     
            cout << "||data (tudo junto): ";
            cin  >> data;
        }
        void informar2() {         // pegando os atributos e transferindo para escolha do usuario
            cout << "||Nome: "; 
            cin >> nome;     
            cout << "||Salario: ";
            cin  >> salario;
            cout << "||Salario novo: ";
            cout << salario/10+salario << endl;    
            cout << "||data (tudo junto): ";
            cin  >> data;
        }
 
};
 
class departamento:public funcionario {         // classe departamento filha com nome
    public:  

void imprimeDepartamento(){
         cout << "||Nome do departamento: (nome duplo com espaco) exe: -engenharia pc- " << endl;
         cin >> departamento_n >> departamento_n2; // departamento_n heranca de funcionario
    }
};


class empresa:public funcionario {      // classe empresa filha com atributos de nome e cnpj
    public:  

void imprime_empresa(){
        cout << "||Nome da Empresa: ";
         cin >> empresa_n; // herenca de funcionario
        cout << "||CNPJ: (tudo junto) ";
         cin >> cnpj; // herenca de funcionario
  }
  

};

int main (){
empresa nome;                     // atribuindo para nome a classe empresa
departamento dpto[30];            // atribuindo para dpto a classe departamento
funcionario func[100];            // atribuindo para func a classe mae empresa
int swt;         

int departamentos = 0, quantosfunc = 0;     // iniciando em 0 os atributos

   cout << " -- |COLETA INFORMACOES EMPRESA| -- " << endl;      // nome empresa
    cout << "|| ---- EMPRESA ---- ||" << endl;
    nome.imprime_empresa();

      cout << "|| ---- DEPARTAMENTOS ---- ||" << endl;  // quantos departamentos e atribuindo nome
      cout << "Digite o numero de departamentos para serem inseridos na empresa: " << endl; 
      cin >> departamentos;
    for(int i = 0; i < departamentos; i++){       
      cout << "|| Digite o nome do departamento: " << i+1 << endl;
      dpto[i].imprimeDepartamento();

      cout << "|| ---- FUNCIONARIOS ---- ||" << endl; // quantos funcionarios no departamento e dados pessoais
      cout << "|| Digite o numero de funcionarios a serem inseridos nesse departamento: " << endl;
      cin >> quantosfunc;
    for(int j = 0; j < quantosfunc; j++){
         cout << "|| Nome do(s) funcionario(s): " << j+1 << endl;
         cout << "|| gostaria de dar um aumento para este funcionario de 10% ? Sim (1) ou Nao (2): " << endl;
         cin >> swt;
            if (swt == 1){
            func[i].informar2();  // aumento para funcionario, nao consegui para todo departamento
            } else {
            func[i].informar1();  
            }             
    }
   }     
}
