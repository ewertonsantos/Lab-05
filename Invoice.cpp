#include <iostream>
#include <stdlib.h>

using namespace std;



class Invoice {

    private:
        int numero;
        int quantidade;
        int preco;
        int InvoiceAmount;
        //int* dt;
        string descricao;  // como estamos usando o std podemos invocar um objeto string dinâmico


    public:
        Invoice (); //contrutor padrao
        Invoice (int n,int q, int p, string d); //criacao de metodo construtor para a classe invoice
        void setNumero(int n){numero=n;}  //metodo set para cada parametro para modificar os parametros da class invoice
        void setQuantidade(int q){quantidade=q;}
        void setPreco(int p){preco=p;}
        void setDescricao(string d){descricao=d;}
    //~Invoice(); //declaracao do metodo destrutor

        int getNumero(){return numero;} //metodo get para cada parametro para invocalos e pode ler o que esta armazenado
        int getQuantidade(){return quantidade;}
        int getPreco(){return preco;}
        string getDescricao(){return descricao;}



            int getInvoiceAmount(){ // funcao que retorna o valor total da compra multiplicando a quantidade pelo preco
                int InvoiceAmount=0;
                InvoiceAmount = preco*quantidade;
                return InvoiceAmount;
            }

};
// CONSTRUTOR PADRAO

Invoice::Invoice(){
    setNumero(0);
    setQuantidade(0);
    setPreco(0);
    setDescricao("sem");
}
// METODO CONSTRUTOR

Invoice::Invoice(int n, int q, int p, string d){
    numero = n;
    quantidade = q;
    preco = p;
    descricao = d;
//dt new int[n,q,p,string d];
}



//FUNCAO PRINCIPAL

int main(){
    int codFatura = 20170571;
    cout <<" FATURA 1" << endl;
    cout << "digite a quantidade do produto"<< endl;
    Invoice fatura1;
    fatura1.setNumero(10);
    //fatura1.setQuantidade(20);
    //fatura1.setQuantidade(cin >>;);
    cout << "a quantidade eh: " << fatura1.getNumero();
}
