#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;


class cuboraio {

private:

float comprimento_da_circunferencia, area_circunferencia, area_lateral, area_total, volume; 

void Calculo_comprimento_da_circunferencia(){          // void para cada conta a ser analizada
    float cc;
    cc = 2*PI*circulo;
    setcomprimento_da_circunferencia(cc);            // usando metodo set para comprimento_da_circunferencia
}

void Calculo_area_circunferencia(){
    float ac;
    ac = PI*circulo*circulo;
    setarea_circunferencia(ac);
}

void Calculo_area_lateral(){
    float al;
    al = 4*(cubo*cubo);
    setarea_lateral(al);
}

void Calculo_area_total(){
    float at;
    at = 6*(cubo*cubo);
    setarea_total(at);
}

void Calculo_volume(){
    float vlm;
    vlm = 6*(cubo*cubo);
    setvolume(vlm);
}

public:

void setcomprimento_da_circunferencia(float cc){         // Calculo_comprimento_da_circunferencia()
    comprimento_da_circunferencia = cc ;                                                         
}
float getcomprimento_da_circunferencia(){                // usando metodo get para return do comprimento_da_circunferencia e assim para outros tambem
  return comprimento_da_circunferencia;
}


void setarea_circunferencia(float ac){
    area_circunferencia = ac;                                                         
}
float getarea_circunferencia(){
    return area_circunferencia;
}


void setarea_lateral(float al){
     area_lateral = al;                                                          
}
float getarea_lateral(){
    return area_lateral;
}


void setarea_total(float at){
    area_total = at;                                                         
}
float getarea_total(){
   return area_total; 
}


void setvolume(float vlm){
   volume = vlm;                                                        
}
float getvolume(){
    return volume;
}

float cubo;
float circulo;

void recebecubo() {                               // public de cubos e circulos
    cout << "cubo: ";
    cin >> cubo;
 }

void recebecirculo(){
    cout <<"circulo: ";
    cin >> circulo;
 }

// tanto executacalculocirculo() e imprimircubo() executam a mesma coisa, apenas alternativas diferentes para saida

void executacalculocirculo(){                   // chama atributos privados que fazem o calculo do circulo          
    Calculo_comprimento_da_circunferencia();    
    Calculo_area_circunferencia();
}
void imprimircubo(){                           // chama atributos privados que fazem o calculo do cubo
    recebecubo();
    Calculo_area_lateral();
    Calculo_area_total();
    Calculo_volume();
    cout << "\nResultado cubo (area lateral): " << getarea_lateral();          // pode imprimir ou no main(switch)
    cout << "\nResultado cubo(area): " << getarea_total();
    cout << "\nResultado cubo(volume): " << getvolume();
}



};    

int main() {
    int n;

    cuboraio matematica;                                          // int main para escolha com uso do switch
    cout << "1 - Comprimento e area da circunferencia (Circulo)"
        << "\n2 - Area lateral, area e volume do cubo (cubo)"
        << "\n3 - Sair"
        << "\n";
    do {
        cout << "\n\nEscolha uma alternativa: ";
        cin >> n;
        switch (n) {
        case 1:                                                                                        // pode fazer dessa maneira imprimendo no main
        matematica.recebecirculo();
        matematica.executacalculocirculo();
        cout << "\nResultado circulo (comprimento): " << matematica.getcomprimento_da_circunferencia();
        cout << "\nResultado circulo(area): " << matematica.getarea_circunferencia();
            break;
        case 2:
        matematica.imprimircubo();                             // ou apenas chamando e imprimindo no "imprimircubo"
            break;    
        }
    } while (n<= 2);                                                        // fim do codigo
    return 0;
}
