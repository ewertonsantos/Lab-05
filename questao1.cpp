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
void setDia(int d){dia=d;} //definindo metodo set
void setMes(int m){mes=m;}
void setAno(int a){ano=a;}

int getDia() {return dia;} //definindo metodo get
int getMes() {return mes;}
int getAno() {return ano;}

void avancarDia(){ //metodo para avancar um dia no tempo
int i=0;
if((mes==2)&&(dia==28)){
dia = 1;
mes = 3;
i++;
}
if(((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia==31)){
dia = 1;
mes = mes +1;
i++;
}
if(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia==30)){
dia = 1;
mes = mes +1;
i++;
}
if((mes==12)&&(dia==31)){
dia = 1;
mes = 1;
ano = ano+1;
i++;
}
if (i==0)
dia = dia+1;
}

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
int d,m,a, x;
cout <<"digite dia mes e ano separado por espacos: ";
cin >>d>>m>>a;
date HJ(d,m,a);
cout << "data: "<< HJ.getDia()<<" "<< HJ.getMes()<<" "<<HJ.getAno()<< endl;
cout << "digite 1 para avancar a data e 0 para terminar: ";
cin >> x;
while (x!=0){
    if (x=1){
    HJ.avancarDia();
    cout << "data: "<< HJ.getDia()<<" "<< HJ.getMes()<<" "<<HJ.getAno()<< endl;
    cout << "digite 1 para avancar a data e 0 para terminar: "<<endl;
    cin >> x;
    }
}
}



