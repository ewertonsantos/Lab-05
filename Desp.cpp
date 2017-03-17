#include <iostream>
#include <string>
#define TAM 2

using namespace std;


class Desp{

    private:
        double valor;
        string tipoDeGasto;
    public:

        void setValor(double v){valor = v;}
        void setTipoDeGasto(string t){tipoDeGasto = t;}
        double getValor(){return valor;}
        string getTipoDeGasto(){return tipoDeGasto;}

};

class ControlGast{

    Desp desp[TAM];
    int n=0;

    public:

        void setDesp(double v, string t){
            desp[n].setValor(v);
            desp[n].setTipoDeGasto(t);
            n++;
        }
        ControlGast(){

            for(int i=0;i<TAM;i++)
            {
                desp[i].setValor(0.0);
                desp[i].setTipoDeGasto("");
            }
        }
        ControlGast(double v, string t){
            setDesp(v,t);
        }
        double calcTlDesp(){
            double total=0.0;
            int i;
            for(i=0;i<TAM;i++){
                total+=desp[i].getValor();
            }
            return total;
        }

        bool exDesp(string t){
            int i=0,c=0;
            while(i<TAM){
                if(t==desp[i].getTipoDeGasto())
                    {
                        c++;
                    }
                    i++;
            }
            if(c!=0)
                return true;
            else
                return false;
        }
};


int main(){

    ControlGast a;
    double v;
    string t;
    int i=0;

    for(i=0;i<TAM;i++)
    {
        cout<< "Digite o valor da despesa: " << endl;
        cin >> v;
        cout << "Digite o tipo de gasto: " << endl;
        cin >> t;

        a.setDesp(v,t);
    }


    cout<<a.calcTlDesp()<<endl;
    cin>>t;
    if(a.exDesp(t))
            cout<<"SIM"<<endl;
        else
            cout<<"NAO"<<endl;
	return 0;
}
