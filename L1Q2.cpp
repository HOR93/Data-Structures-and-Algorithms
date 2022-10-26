#include <iostream>
#define unb 80

using namespace std;

 
class alunos {                                                  // classe para alunos de aed em privado
    private:

    string  nome, curso;
    int   matricula;

    public:

    void pegaestudantes(void);
    void imprimiestudantes(void);
};
 
void alunos::pegaestudantes(void){                                     //para escolha do usuario
    cout << "- Nome: " ;
    cin >> nome;
    cout << "- matricula: ";
    cin >> matricula;
    cout << "- curso: ";
    cin >> curso;
}
 
void alunos::imprimiestudantes(void){                                  //para imprimir no main
    cout << "| Nome : "<< nome << endl;
    cout << "| Matricula: " << matricula << endl;
    cout << "| Curso: " << curso << endl;
}
 
int main() {
    alunos aed[unb];
    int n, i;
     
    cout << "Quantidade de alunos na Disciplina: ";
    cin >> n;
     
    for(i=0; i< n; i++){
        cout << "Insira os dados do estudante numero " << i+1 << " de AED" << ":\n";               // escolha do usuario
        aed[i].pegaestudantes();
        
    }

    for(i=0; i< n; i++){                                                                          // detalhes dos estudantes
        cout << "\nDetalhes do estudante: " << i+1 << " de AED" << ":\n";
        aed[i].imprimiestudantes();
    }

    return 0;
}
