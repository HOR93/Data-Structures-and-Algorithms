#include <iostream>
#include <stack>
#include <string>
#include <list>

using namespace std;

class produtos_loja{
    private:
    string nome_produto;
    int preco;

    stack<produtos_loja> produtos;
    
    produtos_loja buscaSequencial( int procurado, stack<produtos_loja> pilha){
        produtos_loja nulo;
        while (!pilha.empty()){
            if (procurado == pilha.top().getpreco())
                return pilha.top();
            pilha.pop();
        }

        return nulo;
    }
    public:
    
    produtos_loja( string n = "unknow", int r = 0){
        this->setNome_produtos(n);
        this->setpreco(r);
    }
    

    void setNome_produtos( string n ){
        nome_produto = n;
    }

    string getNome_produtos(){
        return nome_produto;
    }

    void setpreco( int r ){
        preco = r;
    }

    int getpreco(){
        return preco;
    }

    void adicionar_produtos_loja( produtos_loja p ){
        produtos.push(p);
    }

    void imprimir_produtos_loja(){
        stack<produtos_loja> copia_loja = produtos;

        if (copia_loja.size() <= 0)
            cout << "POPULE A PILHA PRIMEIRO" << endl;
        
        else{
            while (!copia_loja.empty()){
                cout << "-------------------" << endl;
                cout << "Nome do produto: " << copia_loja.top().getNome_produtos() << endl;
                cout << "Preco: " << copia_loja.top().getpreco() << endl;
                cout << "-------------------" << endl;

                copia_loja.pop();
            }
        }
    }

    void ordenar_produtos_loja(){
        stack<produtos_loja> copia_loja = produtos;
        stack<produtos_loja> pilhaOrdenada;
        list<int> lista;


        while(!copia_loja.empty()){
            lista.push_front(copia_loja.top().getpreco());
            copia_loja.pop();
        }


        lista.sort();

        
 
        while(!lista.empty()){
            produtos_loja p = this->buscaSequencial(lista.front(), produtos);
            pilhaOrdenada.push(p);
            lista.pop_front();
        }

        produtos = pilhaOrdenada;
        cout << "PILHA ORDENADA" << endl;
    }


    void maior_preco(){
        stack<produtos_loja> copiaAgenda = produtos;

        cout << "------------------" << endl;
        cout << "Produto com o maior preco" << endl;
        cout << "nome: " << copiaAgenda.top().getNome_produtos() << endl;
        cout << "preco: " << copiaAgenda.top().getpreco() << endl;
        cout << "------------------" << endl;
    }


    void comprar(){
        cout << "------------------" << endl;
        cout << "Produto " << produtos.top().getNome_produtos() << endl;
        cout << "Preco " << produtos.top().getpreco() << endl;
        cout << "Foi comprado e removido da loja" << endl;
        cout << "------------------" << endl;

        produtos.pop();
    }

};




int main() {
    string n;
    int r;
    produtos_loja loja;
    int menu = 0;

	while(1){
        do{
		cout << "1 - Adicionar produtos." << endl;
        cout << "2 - Mostrar produtos" << endl;
        cout << "3 - Ordenando produtos" << endl;
        cout << "4 - Produto mais caro" << endl;
        cout << "5 - comprar produto" << endl;
        cout << "6 - SAIR" << endl;
        cin >> menu;

        }while(menu<0 || menu>6);

        switch (menu) {
            case 1: 
            {
                system("cls");
                int procurados;

                cout << "quantos produtos voce deseja colocar?" << endl;
                cin >> procurados;

                for (int i = 0; i < procurados; i++){

                    cout << "-------------" << endl;
                    cout << "Nome do produto:" << endl;
                    cin >> n;
                    cout << "preco do Produto:" << endl;
                    cin >> r;
                    cout << "-------------" << endl;

                    produtos_loja p(n, r);
                    loja.adicionar_produtos_loja(p);

                }
                break;
            }
            case 2: {
                loja.imprimir_produtos_loja();
                break;
            }
            case 3: {
                loja.ordenar_produtos_loja();
                break;
            }
            case 4: {
                loja.maior_preco();
                break;
            }
            case 5:
            {
                loja.comprar();
                break;
            }
            case 6:
            {
                exit(6);
                break;
            }
        }
    }
    
    return 0;
}
