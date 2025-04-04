#include <iostream>

using namespace std;

//clase deve ser nomeada com 1º letra maiuscula ++ Camel case (papaiAma) OU "___"
class Carro{
    private: //atributos, n acessa externamente
        int ano;
        float valor;
        float km; //nao da para jogar opala.ano na main oq fzr:

    public: //metodos, acessa externamente

        bool usado();

        void setAno(int ano){ 
            this->ano=ano;
        }

        void setValor(float valor){ 
            this->valor=valor;
        }


        int getAno(){
            return this-> ano;
        }//oq fzr

        float getValor(){
            return this->valor;
        }

        float getKm(){
            return this->km;
        }

        // void atualizarKm(float km); //procedimento = void & função = retorna algo
        void setKm(float km){ // set usa-se para modificar valores enquanto o GET se usa para retornar valores pre estabelecidos
            this->km=km;
        }

        Carro(int a, float v, float km){
            ano = a;
            valor = v;
            this->km = km; //esse this e dahora de entender
            cout<<"Objeto criado com sucesso!"<<endl;
        } //construtor

        ~Carro(){
            cout<<"Objeto destruido com sucesso!"<<endl;
        }

};//classe

//esse metodo faz parte da classe carro implementado fora do escopo
bool Carro::usado(){
    return km > 10?true:false;
}

int main(void){
    Carro opala(1967, 55000, 101000); //objeto
    Carro *opala2 = new Carro (1968, 55000, 220000); //ponteiro po objeto
    
    cout<<"Opala ano = "<<opala.getAno()<<endl;
    cout<<"Opala valor = "<<opala.getValor()<<endl;
    cout<<"Opala km = "<<opala.getKm()<<endl;

    delete opala2;//objeto precisa ser deletado

    return 0;
}
