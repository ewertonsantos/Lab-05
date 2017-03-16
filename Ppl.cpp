#include <iostream>
#include <string>

using namespace std;

class Ppl{
    private:
        string name;
        int number, age;
    public:
        Ppl(string);
        Ppl(string,int,int);

        void setName(string n){name = n;}
        void setNumber(int t){number= t;}
        void setAge(int ag){age = ag;}

        string getName(){return name;}
        int getNumber(){return number;}
        int getAge(){return age;}

};


Ppl::Ppl(string n){
    setName(n);
    cout << "Name(string alone): " << getName() << endl;
}
Ppl::Ppl(string n,int t,int ag){
    setName(n);
    setNumber(t);
    setAge(ag);
}



int main()
{
    string n1,n2,n3;
    int tel1,tel2;
    int id1,id2;

    cout << "Digite o nome: " << endl;
    cin >> n1;
    cout << "Digite o telefone: " << endl;
    cin >> tel1;
    cout << "Digite a idade: " << endl;
    cin >> id1;
    cout << "Digite o nome: " << endl;
    cin >> n2;
    cout << "Digite o telefone: " << endl;
    cin >> tel2;
    cout << "Digite a idade: " << endl;
    cin >> id2;
    cout << "Digite o nome: " << endl;
    cin >> n3;

    Ppl p1(n1,tel1,id1);
    Ppl p2(n2,tel2,id2);
    Ppl p3(n3);

    cout << "Nome :  " << p1.getName() << " Numero: " << p1.getNumber() << " Idade: " << p1.getAge() << endl;
    cout << "Nome :  " << p2.getName() << " Numero: " << p2.getNumber() << " Idade: " << p2.getAge() << endl;

}

