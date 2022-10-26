#include <iostream>
#define unb 80

using namespace std;

class alunos {                                                              // classe aluno privado
    private:

    string  name, curso;
    int   matricula;
    float faltas, nf;

    public:

    void pegaestudantes(void);                                                  // void para escolha do usuario para cadastro dos estudantes e imprimir
    void imprimiestudantes(void);
};
 
void alunos::pegaestudantes(void){                                            
    cout << "- Nome: " ;
    cin >> name;
    cout << "- matricula: ";
    cin >> matricula;
    cout << "- curso: ";
    cin >> curso;
    cout << "- Porcentagem de faltas: ";
    cin >> faltas;
    cout << "- Nota final: ";
    cin >> nf;

}
 
void alunos::imprimiestudantes(void){

    cout << "| Nome : "<< name << endl;
    cout << "| Matricula: " << matricula << endl;
    cout << "| Curso: " << curso << endl;
    cout << "| Faltas: " << faltas << endl;
    if (faltas > 25){                                             // if relacionado as faltas e reprovação
	cout << "O aluno reprovado " << " Mencao final SR" << endl;              
	}
    cout << "| Nota final: " << nf << endl;
    if(nf >= 0 && nf < 1){                                       // if com menção final relacionado a nota do aluno
		cout << "| Mencao final do aluno vai ser: SR" << endl;
	} else if (nf >= 1 && nf < 3){
		cout << "| Mencao final do aluno vai ser: II" << endl;
	} else if (nf >= 3 && nf < 5){
		cout <<"| Mencao final do aluno vai ser: MI" << endl;
	} else if (nf >= 5 && nf < 7){
		cout <<"| Mencao final do aluno vai ser: MM" << endl;
	} else if (nf >= 7 && nf < 9){
		cout <<"| Mencao final do aluno vai ser: MS" << endl;
	} else{
		cout <<"| Mencao final do aluno vai ser: SS" << endl;
	}


}
 
int main() {
    alunos aed[unb];                                                                           // definindo limite de alunos
    int n, i;

     
    cout << "Quantidade de alunos na Disciplina: ";                                              // escolha do usuario
    cin >> n;
     
    for(i=0; i< n; i++){
        cout << "Insira os dados do estudante numero " << i+1 << " de AED" << ":\n";              // dados dos estudantes de aed
        aed[i].pegaestudantes();
        
    }

    for(i=0; i< n; i++){
        cout << "\nDetalhes do estudante: " << i+1 << " de AED" << ":\n";                      // imprimindo o detalhe final do total de estudantes
        aed[i].imprimiestudantes();
    }

    return 0;
}
