#include <iostream>
#include <string>
#include <fstream>

#define max 50

using namespace std;

class veiculos{

private:    

int peso, ano;
string cor, marca;

public:


void setpeso (int _p){
    peso = _p;
}

int getpeso(){
    return this-> peso;
}

void setano (int _a){
    ano = _a;
}
int getano(){
    return this -> ano;
}

void setcor(string _c){
    cor = _c;
}

string getcor(){
    return this ->cor;
}

void setmarca(string _m){
    marca = _m;
}

string getmarca(){
    return this -> marca;
}


void imprimir(){
     cout << "peso: " << getpeso() << endl;
     cout << "ano: " << getano()<< endl;
     cout << "cor: " << getcor()<< endl;
     cout << "marca: " << getmarca()<< endl;
}    

};

int main(){
    int swt;
    string nveiculo;
	fstream listacarro;
	string cormarca[3];
	int pesoano[3];
	veiculos v1;
	string s;

	do{
		cout << "(1) para adicionar novo veiculo, (2) veiculos cadastrados (3) para sair" << endl;
		cin >> swt;
		
		switch(swt){

			case 1:{
				
				cout << "Digite o novo veiculo que deseja adicionar: (carro)" << endl;
				cin >> nveiculo;
				
				if(nveiculo == "carro"){
					
					listacarro.open("Lista dos carros.txt", ios::out | ios::app);
					
					cout << "Digite peso, ano, cor e marca  -- separados por enter:" << endl;
					cin >> pesoano[0] >> pesoano[1] >> cormarca[0] >> cormarca[1];
					
					v1.setpeso(pesoano[0]);
					v1.setano(pesoano[1]);
					v1.setcor(cormarca[0]);
					v1.setmarca(cormarca[1]);
					
					listacarro << pesoano[0] << "\n" << pesoano[1] << "\n" << cormarca[0] << "\n" << cormarca[1] << "\n";
					
					listacarro.close();
					
					cout << "Cadastro do veiculo:" << endl;
					
					cout << v1.getpeso() << endl;
					cout << v1.getano() << endl;
					cout << v1.getcor() << endl;
					cout << v1.getmarca() << endl;
				}
				
				break;
			}
			
			case 2:{
			listacarro.open("lista dos carros.txt", ios::in | ios::app);

			while (getline(listacarro, s))
				cout << s << "\n";

			listacarro.close();
					
				break;
			}
			
			case 3:{
			exit(3);
				
				break;
			}
		}		
	} while (swt <=3);

	return 0;
}
