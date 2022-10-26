#include <iostream>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;

class aeroporto{
public:

 queue<string> aviao;
 queue<string> lista_espera;

void criar_aviao(int n, string plane){            // metodo para criar os avioes com marca

   cout <<"--- Quantos avioes na pista: ";                    
   cin >> n;
   for(int i= 0; i<n; i++){
    cout <<"--- Marca dos Avioes: " << i+1 << " " <<  endl;
    cin >> plane;
    aviao.push(plane);
    }
}

void listar_avioes(){               // metodo para listar quantos tem
    
    if(aviao.empty()){
        cout << "\n---No momento nenhum aviao na fila do aeroporto" << endl;
    }else {
        cout << "\n---No momento a fila do aeroporto tem " << aviao.size() << " avioes" << endl;
    }
    
}

void decolagem(){             // metodo para decolagem tirando o primeiro
    aviao.front();
    aviao.pop();
}

void espera_decolagem(int j, string plane_espera){             // metodo criar fila de espera
    cout << "-- Quantos avioes para a lista de espera ?" << endl;
    cin >> j;
    for(int i= 0; i<j; i++){
    cout <<"--- Marca dos Aviao: " << i+1 << " " <<  endl;
    cin >> plane_espera;
    lista_espera.push(plane_espera);
    }
    
}

void quantidade_espera(){                             // detalhes do primeiro na fila de espera
cout <<"\n---O Primeiro aviao na fila de espera: " << lista_espera.front() << endl;
}

void listar_aviao_fila(){                            // detalhes primeiro na fila normal
	cout <<"\n---O Primeiro aviao da Fila: " << aviao.front() << endl; 
	
}

};

int main(){
int n, j, swt;
string plane, plane_espera;
aeroporto v1, v2;

v1.criar_aviao(n, plane);

do{
        cout << "|  --- CONTROLE AEROPORTO ---    |" << endl; // menu com o sistema completo
		cout << "|   1 - Fila de decolagem        |" << endl;      
		cout << "|   2 - Autorizar Decolagem      |" << endl;
		cout << "|   3 - Fila de espera           |" << endl;
		cout << "|   4 - Avioes em lista de espera|" << endl;
        cout << "|   5 - Detalhes aviao           |" << endl;
        cout << "|   6 - Sair do Sistema          |" << endl;
		cin >> swt;
		switch(swt){
			case 1:{
               v1.listar_avioes();                       // passando os metodos
			   break;
			}
			case 2:{
               v1.decolagem();
			   break;
			}
			case 3:{
                v1.espera_decolagem(j, plane_espera);
			break;
			}
			case 4:{    
              v1.quantidade_espera();
            break;
			}
            case 5:{
               v1.listar_aviao_fila();
			   break;
			}
            case 6:{
               cout << "saindo.." << endl;
			break;
			}
		}
		
	}while(swt !=6);

    system("pause");
    return 0;
	
}
