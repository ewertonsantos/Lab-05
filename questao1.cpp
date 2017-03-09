#include <iostream>
#include <stdlib.h>


using namespace std;


//criacao da classe

class date {
private:
int dia;
int mes;
int ano;
int* dt;

public:
date(int d,int m,int a);
void setDia(int d){dia=d;}
void setMes(int m){mes=m;}
void setAno(int a){ano=a;}

int getDia() {return dia;}
int getMes() {return mes;}
int getAno() {return ano;}

~date();
};



//construtor

date::date(int d,int m,int a){
if (m==2){
    if((d<=0)||(d>28)){ //para o mes de fevereiro nao pode existir data maior que 28
    cout << "data invalida" << endl;
    }else{
    dia = d;
    mes = m;
    ano = a;
    dt = new int[d,m,a];
    }
}
if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)){  // para os mes de 31 nao pode existir dia maior que 31
    if((d<=0)||(d>31)){
    cout << "data invalida" << endl;
    }else{
    dia = d;
    mes = m;
    ano = a;
    dt = new int[d,m,a];
    }
}
if ((m==4)||(m==6)||(m==9)||(m==11)){  // para os mes de 30 dias nao pode existir dia maior que 30
    if((d<=0)||(d>30)){
    cout << "data invalida" << endl;
    }else{
    dia = d;
    mes = m;
    ano = a;
    dt = new int[d,m,a];
    }
}
if ((m<=0)||(m>12)){ //nao existe mes zero , negativo ou maior que 12
cout << "data invalida" << endl;
}
}

// destrutor

date::~date(){
delete [] dt;
}



//função principal

int main(){
date HJ(12,3,2017);
cout << "data: "<< HJ.getDia()<<" "<< HJ.getMes()<<" "<<HJ.getAno()<< endl;
}



