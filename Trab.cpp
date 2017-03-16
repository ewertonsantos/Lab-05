#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int cont=0;

class Trab{

    string name,sname;
    float salario;

public:
    Trab(string,string,float);

    void setName(string n){name = n;}
    void setSname(string sn){sname = sn;}
    void setSalario(float s){salario = s;}

    string getName(){return name;}
    string getSname(){return sname;}
    float getSalario(){return salario;}

        float SalarioAno(){
            return salario*12;
        }
        float sAumento(){
            return SalarioAno()*1.1;
        }

};

Trab :: Trab(string n,string sn,float s){
    if(s >= 0){
        setSalario(s);
        }else{
            cout << "salario invalido" << endl;
            cont++;
            }
    setName(n);
    setSname(sn);
}




int main()
{
    string n1,n2,sn1,sn2;
    float s1,s2;
    cout << "Digite o nome do trabalhador: " << endl;
    cin>>n1;
    cout << "Digite sobrenome do trabalhador: " << endl;
    cin>>sn1;
    cout << "Digite o salario mensal: " << endl;
    cin>>s1;
    cout << "Digite o nome do trabalhador: " << endl;
    cin>>n2;
    cout << "Digite sobrenome do trabalhador: " << endl;
    cin>>sn2;
    cout << "Digite o salario mensal: " << endl;
    cin>>s2;

    Trab t1(n1,sn1,s1);
    Trab t2(n2,sn2,s2);

    cout << "Nome: " << t1.getName() << endl;
    cout << " " << t1.getSname() << endl;
    if(cont == 0){
        cout << "Salario: " << t1.getSalario() << endl;
        cout << "Salario: " << t1.SalarioAno() << endl;
        cout << "Salario: " << t1.sAumento() << endl;
    }


    cout << "Nome: " << t2.getName() << endl;
    cout << " " << t2.getSname() << endl;
    if(cont == 0){
        cout << "Salario: " << t2.getSalario() << endl;
        cout << "Salario: " << t2.SalarioAno() << endl;
        cout << "Salario: " << t2.sAumento() << endl;
    }
}
