#include <iostream>
#include <list>
#include <string>

using namespace std;

class servidor{ // classe servidor com senha e check pra saber se esta correta
public:
int senha, csenha;
string loguin;

void senha_servidor(){ // metodo para senha
	cout << "loguin: " << endl;
	cin >> loguin;
	cout << "Senha: " << endl;
	cin >> senha;
}

void confirmar_senha(){ // check senha

	cout << "Confirme sua senha: " << endl;
	cin >> csenha;
	if(csenha != senha){
		cout << "senha invalida - tente outra vez: " << endl;
		cin >> csenha;
	while(csenha != senha){
		cout << "senha invalida - tente outra vez: " << endl;
		cin >> csenha;
	   }
	cout << "senha correta" << endl;   	
    }else
	cout << endl;
}

};

class banco: public servidor { // classe filha com listas e parametros do banco

public:

list < string > banco_nome, banco_titular, banco_agencia;
list < int > banco_cpf, banco_senha, nconta;

banco(){

        };
        
		banco(int CONTA){ // declarando construtor e passando o ponteiro
			this->nconta.push_back(CONTA);
		}


void inserir_ultimo(string &NOME){ // referencial das variaveis para inserir nas listas
    banco_nome.push_back(NOME);
}
void inserir_ultimo2(string &BANCO_TITULAR){
    banco_titular.push_back(BANCO_TITULAR);
}
void inserir_ultimo3(string &BANCO_AGENCIA){
    banco_agencia.push_back(BANCO_AGENCIA);
}

void inserir_ultimo4(int &CPF){
    banco_cpf.push_back(CPF);
}
void inserir_ultimo5(int &SENHA){
    banco_senha.push_back(SENHA);
}
void inserir_ultimo13(int &NCONTA){
    nconta.push_back(NCONTA);
}

void remover_conta(int posicao){ // metodo para remoção 
    list< int >::iterator it;
	it = nconta.begin();
	for (int i=0; i<posicao; i++){
	it++;
	}
	nconta.erase(it);
}

void remover_banco(int posicao){
cout << "qual posicao vai ser removida o numero da conta: " << endl; // passando o metodo remover_conta para banco e escolher qual posição
cin >> posicao;
remover_conta(posicao-1);
}

void inserir_banco(string nome_banco, string titular, string agencia, int cpf, int senha, int nconta){ // passando as variaveis do main

cout << "Digite | Nome do banco | Titular | Agencia | CPF | senha | numero da Conta : " << endl; 
cin >> nome_banco >> titular >> agencia >> cpf >> senha >> nconta;

inserir_ultimo(nome_banco); // passando cada variavel para sua lista
inserir_ultimo2(titular);
inserir_ultimo3(agencia);
inserir_ultimo4(cpf);
inserir_ultimo5(senha);
inserir_ultimo13(nconta);

}


void mostrar_banco(){

list< string >::iterator it; // usando interator e pegando o referencial para cada lista e imprimir
	for (it = banco_nome.begin(); it!=banco_nome.end(); it++){
		cout << "Nome banco |" << *it << "| -";
	}
	cout << endl;
	list< int >::iterator it2;
	for (it2 = banco_cpf.begin(); it2!=banco_cpf.end(); it2++){
		cout << "CPF |" << *it2 << "| -";
	}
	cout << endl;
	list< string >::iterator it3;
	for (it3 = banco_titular.begin(); it3!=banco_titular.end(); it3++){
		cout << "Titular |" << *it3 << "| -";
	}
	cout << endl;
	list< string >::iterator it4;
	for (it4 = banco_agencia.begin(); it4!=banco_agencia.end(); it4++){
		cout << "Agencia |" << *it4 << "| -";
	}
	cout << endl;
	list< int >::iterator it5;
	for (it5 = banco_senha.begin(); it5!=banco_senha.end(); it5++){
		cout << "Senha |" << *it5 << "| -";
	}
	cout << endl;
	list< int >::iterator it16;
	for (it16 = nconta.begin(); it16!=nconta.end(); it16 ++){
		cout << "Numero conta |" << *it16 << "| -";
	}
	cout << endl;
}

void buscar_conta(int conta){ // pegando o referencial do ponteiro e passando para a pesquisa

list< int >::iterator it;
	int i=1;
	for (it = nconta.begin(); it!=nconta.end(); it++){
		if (*it == conta){ // ponteiro
			cout << "O numero da conta esta na posicao " << i << " da lista" << endl; 
			}
		i++;	
		}	
}

};

class empresa : public servidor { // utilizando os mesmos comentarios do class banco, porem usando maioria string

public:
list < string > nome_empresa, nome_funcionario, cargo;
list < int >  salario;

empresa(){

        };
        
		empresa(string FUNC){ 
			this->nome_funcionario.push_back(FUNC);
		}

void inserir_ultimo6(string &NOME_EMPRESA){ // passando para listas usando referencia parte 1
    nome_empresa.push_back(NOME_EMPRESA);
}
void inserir_ultimo7(string &NOME_FUNCIONARIO){
    nome_funcionario.push_back(NOME_FUNCIONARIO);
}
void inserir_ultimo8(string &CARGO){
    cargo.push_back(CARGO);
}
void inserir_ultimo12(int &SALARIO){
    salario.push_back(SALARIO);
}

void remover_funcionario(int posicao2){ // remover parte 1
    list< string >::iterator it2;
	it2 = nome_funcionario.begin();
	for (int i=0; i<posicao2; i++){
	it2++;
	}
	nome_funcionario.erase(it2);
}

void remover_empresa(int posicao2){ // remover parte 2
cout << "qual posicao do nome do funcionario vai ser removida : " << endl;
cin >> posicao2;
remover_funcionario(posicao2-1);
}

void inserir_empresa(string nome_empresa, string nome_funcionario, string cargo, int salario){

cout << "digite o Nome da Empresa| Funcionario | Cargo | Salario : " << endl;
cin >> nome_empresa >> nome_funcionario >> cargo >> salario;

inserir_ultimo6(nome_empresa); // declarando listas parte 2
inserir_ultimo7(nome_funcionario);
inserir_ultimo8(cargo);
inserir_ultimo12(salario);

}

void mostrar_empresa(){

list< string >::iterator it6; // imprimindo com iterator
	for (it6 = nome_empresa.begin(); it6!=nome_empresa.end(); it6++){
		cout << "Nome Empresa -   |" << *it6 <<"| -";
	}
	cout << endl;

	list< string >::iterator it7;
	for (it7 = nome_funcionario.begin(); it7!=nome_funcionario.end(); it7++){
		cout << "Funcionario -    |" << *it7 <<"| -";
	}
	cout << endl;

	list< string >::iterator it8;
	for (it8 = cargo.begin(); it8!=cargo.end(); it8++){
		cout << "Cargo -          |" << *it8 <<"| -";
	}
	cout << endl;

	list< int >::iterator it9;
	for (it9 = salario.begin(); it9!=salario.end(); it9++){
		cout << "Salario -        |" << *it9 <<"| -";
	}
	cout << endl;
}

void buscar_func(string func){

list< string >::iterator it2;
	int k=1;
	for (it2 = nome_funcionario.begin(); it2!=nome_funcionario.end(); it2++){
		if (*it2 == func){ // ponteiro
			cout << "O nome do funcionario esta na posicao " << k << " da lista" << endl; 
			}
		k++;	
		}	
}

};

class email_servidor : public servidor { // mesmos comentarios das outras duas classes filhas
public:

list < string > email, nickname;
list < int > senha_email;

email_servidor(){

        };
        
		email_servidor(string NOME_EMAIL){ // declarando para busca
			this->email.push_back(NOME_EMAIL);
		}

void inserir_ultimo9(string &EMAIL){ // declarando 1
    email.push_back(EMAIL);
}
void inserir_ultimo10(string &NICKNAME){
    nickname.push_back(NICKNAME);
}
void inserir_ultimo11(int &SENHA_EMAIL){
    senha_email.push_back(SENHA_EMAIL);
}

void remover_email(int posicao3){
    list< string >::iterator it3;
	it3 = email.begin();
	for (int i=0; i<posicao3; i++){
	it3++;
	}
	email.erase(it3);
}

void remover_empresa(int posicao3){
cout << "qual posicao do nome do funcionario vai ser removida : " << endl;
cin >> posicao3;
remover_email(posicao3-1);
}

void inserir_email(string nickname, string email, int senha2){

cout << "digite o Nickname| email | senha : " << endl; // string e apenas numeros na senha
cin >> nickname >> email >> senha2; // declarando 2

inserir_ultimo10(nickname); // declarando 3
inserir_ultimo9(email);
inserir_ultimo11(senha2);

}

void mostrar_email(){

list< string >::iterator it10;
	for (it10 = nickname.begin(); it10!=nickname.end(); it10++){
		cout << "Nickname -    |" << *it10 << "| -";
	}
	cout << endl;

	list< string >::iterator it11;
	for (it11 = email.begin(); it11!=email.end(); it11++){
		cout << "Email -       |" << *it11 << "| -";
	}
	cout << endl;

	list< int >::iterator it12;
	for (it12 = senha_email.begin(); it12!=senha_email.end(); it12++){
		cout << "Senha email - |" << *it12 << "| -";
	}
	cout << endl;
}

void buscar_email(string nome_email){

list< string >::iterator it3;
	int j=1;
	for (it3 = email.begin(); it3!=email.end(); it3++){
		if (*it3 == nome_email){ 
			cout << "O email esta na posicao " << j << " da lista" << endl; 
			}
		j++;	
		}	
}


};



int main(){
	int swt, posicao, posicao2, posicao3, cpf, senha, senha_email, salario, escolher, escolher2, escolher3, escolher4, nconta, conta; // passando como referencia nas classes 
    string nome_banco, titular, agencia, nome_empresa, nome_funcionario, cargo, nickname, email, nome_email, func; // passando como referencia nas classes
	servidor sen; // objetos
	banco ban;
	empresa emp;
	email_servidor eml;
                    
   
   sen.senha_servidor(); // loguin e senha
	while(1){

	do{
	cout << "1. inserir" << endl; // menu de opções
	cout << "2. Remover" << endl;
	cout << "3. mostrar" << endl;
    cout << "4. Buscar" << endl;
    cout << "5. Sair" << endl;
	cin >> swt;
	}
	while(swt<0 || swt>5);

	switch(swt){
		case 1:
		    sen.confirmar_senha(); // confirmando senha
		    cout <<"escolha o que inserir: Contas bancarias (1), Empresas (2) ou Email (3) ?" << endl;
			cin >> escolher;
			if (escolher == 1) {
			ban.inserir_banco(nome_banco, titular, agencia, cpf, senha, nconta); // passando objeto com o metodo
			} else if (escolher == 2){
			emp.inserir_empresa(nome_empresa, nome_funcionario, cargo, salario);	
			} else if (escolher == 3 ){
			eml.inserir_email(nickname, email, senha_email);	// declarando 4 usando variaveis do main
			}
			break;
		case 2:
		    sen.confirmar_senha();
		    cout <<"escolha o que remover: numero conta (1), Funcionario (2) ou Emails (3) ?" << endl;
			cin >> escolher2;
			if(escolher2 == 1){
			ban.remover_banco(posicao);	
			} else if (escolher2 == 2){
			emp.remover_funcionario(posicao2);	
			} else if (escolher2 -= 3){
			eml.remover_email(posicao3);	
			}
			break;
		case 3:
		    cout <<"escolha qual mostrar: banco (1), empresa (2) ou contas email (3) ?" << endl;
		    cin >> escolher3;
		    if (escolher3 == 1){
			ban.mostrar_banco();
		    }else if (escolher3 == 2){
			emp.mostrar_empresa();
			}else if (escolher3 == 3){
			eml.mostrar_email();
			}
            break;
        case 4:
		    cout <<"escolha qual procurar: numero conta (1), Funcionario (2) ou Emails (3) ?" << endl;
		    cin >> escolher4;
			if (escolher4 == 1){
			ban.buscar_conta(conta);	
			} else if (escolher4 == 2){
			emp.buscar_func(func);	
			}else if (escolher4 == 3){
			eml.buscar_email(nome_email);	
			}
			break;
        case 5:    
		exit(5);
			break;
	}
}

return 0;

}
